# chall-www

All you get is a URL input, that's it. Can you exploit it?

[deployment](deployment) has the Vagrantfile and ansible script necessary.

[exploit](exploit) has the exploit that works.

The challenge is running the original [WWW](https://en.wikipedia.org/wiki/WorldWideWeb) web browser written by [Sir. Tim Berners-Lee](https://twitter.com/timberners_lee).

It is version 0.15 of the WWW browser, and you can tell becuase of the hash sent by the frontend:
520d462abb92809b4fa1eaaafabbaee4

This is the md5 of the WorldWideWeb.app/WorldWideWeb binary. 

There is a buffer overflow in `HTTP.c` :

`    strcpy(command, "GET ");`

Exploiting this gets you a shell, once you send proper shellcode.

Check out [exploit](exploit/exploit.py)

TAGS: pwn

LEVEL: med/hard? (very hard to tell)

STATUS: ready to deploy

AUTHOR: adamd

TESTED BY: nobody. 
