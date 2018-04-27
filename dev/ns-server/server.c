#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <netinet/in.h>
#include <arpa/inet.h>
#include <libc.h>

char* filename = "/input";
char* done = "DONE";
   

int read_in(int s, unsigned int size, char* buf)
{
   unsigned int i;
   for (i = 0; i < size; i++)
   {
	  int num = read(s, buf+i, 1);
	  if (num != 1)
	  {
		 return -1;
	  }
   }
   return 0;
}

int main(int argc, char **argv)
{
   char* port;
   int port_num;
   int listen_socket, optval, clientlen;
   struct sockaddr_in serveraddr;
   struct sockaddr_in clientaddr;
   int is_daemon = 0;
   
   if (argc == 3)
   {
	  is_daemon = 1;
	  port = argv[2];
   }
   else if (argc == 2)
   {
	  is_daemon = 0;
	  port = argv[1];
   }
   else
   {
	  fprintf(stderr, "usage: %s (-d) <port>\n", argv[0]);
	  exit(-1);
   }

   if (is_daemon)
   {
	  int pid;
	  pid = fork();

	  // pid 0 is the child process
	  if (pid != 0)
	  {
		 return 0;
	  }
   }

   // Remove the file, just in case
   unlink(filename);

   port_num = atoi(port);
   
   listen_socket = socket(AF_INET, SOCK_STREAM, 0);
   if (listen_socket < 0)
   {
	  fprintf(stderr, "Error opening socket\n");
	  exit(-1);	 
   }

   optval = 1;
   setsockopt(listen_socket, SOL_SOCKET, SO_REUSEADDR, (void *)&optval, sizeof(int));

   bzero((char*) &serveraddr, sizeof(serveraddr));
   serveraddr.sin_family = AF_INET;
   serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
   serveraddr.sin_port = htons((unsigned short)port_num);

   if (bind(listen_socket, (struct sockaddr *) &serveraddr, sizeof(serveraddr)) < 0)
   {
	  fprintf(stderr, "Error binding to port %d\n", port_num);
	  exit(-1);
   }

   if (listen(listen_socket, 10) < 0)
   {
	  fprintf(stderr, "Error on listen\n");
	  exit(-1);
   }

   clientlen = sizeof(clientaddr);
   while (1)
   {
	  char *hostaddrp;
	  unsigned int buf_size;
	  int result, fp;
	  char* buf;
	  
	  int s = accept(listen_socket, (struct sockaddr *) &clientaddr, &clientlen);
	  if (s < 0)
	  {
		 fprintf(stderr, "Error on accept, continuing\n");
		 continue;
	  }

	  hostaddrp = inet_ntoa(clientaddr.sin_addr);
	  if (hostaddrp == NULL)
	  {
		 fprintf(stderr, "Error on inet_nota, continuing\n");

		 continue;
	  }

	  printf("server established connection with %s\n", hostaddrp);
	  free(hostaddrp);

	  // Read in the size
	  result = read_in(s, sizeof(buf_size), (char*)&buf_size);
	  if (result != 0)
	  {
		 fprintf(stderr, "Error on reading, continuing\n");
		 continue;
	  }

	  buf_size = ntohl(buf_size);

	  printf("Got size of %d from client\n", buf_size);

	  // Read in the URL
	  buf = (char*)malloc(buf_size);
	  if (!buf)
	  {
		 fprintf(stderr, "Error on malloc, continuing\n");
		 continue;
	  }
		 
	  result = read_in(s, buf_size, buf);
	  if (result != 0)
	  {
		 fprintf(stderr, "Error on reading in buffer results, continuing\n");
		 free(buf);
		 continue;
	  }

	  printf("Read in buffer\n");

	  // Create the HTML file
	  fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	  write(fp, buf, buf_size);
	  close(fp);
	  free(buf);

	  write(s, done, strlen(done));
	  close(s);

	  printf("Done\n");
   }
   
	  
}
