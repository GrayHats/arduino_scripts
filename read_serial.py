#!/usr/bin/env python
from serial import Serial
from sys import exit

s = Serial('/dev/ttyUSB0', 9600)
while True:
    try:
        print s.readline()
    except KeyboardInterrupt:
        print "Bye"
        exit(0)
