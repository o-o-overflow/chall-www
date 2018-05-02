#!/usr/bin/env python
from __future__ import print_function
import sys
import struct
import hashlib
import string
import random

BACKDOOR_HASH = '6e2632b045f8faa117336cb09582a1529e5e1a18d291b001c733e95ea7a6fb4a'

def pow_hash(challenge, solution):
    return hashlib.sha256(challenge.encode('ascii') + struct.pack('<Q', solution)).hexdigest()

def check_pow(challenge, n, solution):
    h = pow_hash(challenge, solution)
    return (int(h, 16) % (2**n)) == 0

def check_pow_backdoor(challenge, n, solution):
    if hashlib.sha256(solution).hexdigest() == BACKDOOR_HASH:
        return True
    try:
        solution = int(solution)
    except ValueError:
        print('I need an integer. "{}" is not'.format(solution))
        sys.exit(1)
    if check_pow(challenge, n, solution):
        return True
    return False

def random_string(length=10):
    characters = string.ascii_letters + string.digits
    return ''.join(random.choice(characters) for _ in range(length))

if __name__ == '__main__':
    if sys.version_info[0] < 3:
        input = raw_input

    try:
        n = sys.argv[1]
        n = int(n)
    except IndexError:
        n = 22
    except ValueError:
        print('I need an integer. "{}" is not'.format(n))
        sys.exit(1)

    challenge = random_string()

    print('(Pssst, https://oooverflow.io/pow.py)') # FIXME
    print('Challenge: {}'.format(challenge))
    print('n: {}'.format(n))
    print('Solution: ')
    sys.stdout.flush()
    solution = input().strip()

    if not check_pow_backdoor(challenge, n, solution):
        print('We are not pleased.')
        sys.exit(1)
    sys.exit(0)
