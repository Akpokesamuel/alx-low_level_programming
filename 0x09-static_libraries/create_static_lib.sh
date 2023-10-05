#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libail.a *.o
ranlib libail.a
