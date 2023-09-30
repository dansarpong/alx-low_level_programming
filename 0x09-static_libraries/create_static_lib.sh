#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -cr liball.a *.o
ranlib liball.a
