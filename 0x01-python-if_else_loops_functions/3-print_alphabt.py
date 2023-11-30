#!/usr/bin/python3
for numbers in range(97, 123):
    if chr(numbers) is not 'q' and chr(numbers) is not 'e':
        print("{}".format(chr(numbers)), end="")
