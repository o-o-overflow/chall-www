#!/bin/sh

/opt/pow/powserver.py 10 && echo "Thank you for solving the pow. You will now enter the queue to connect to the www service. Please be patient, as getting back in the queue will require you to redo the pow." && nc localhost 31338
