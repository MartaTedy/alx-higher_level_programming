#!/usr/bin/python

for i in range(97, 123):
    if i != ord('q') and i != ord('e'):
        print("{}.format(chr(i)), end="")
