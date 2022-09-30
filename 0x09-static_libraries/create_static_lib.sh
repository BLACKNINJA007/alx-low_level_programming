#!/bin/bash 
gcc -wall -padantic -werror -waxtra -c *.c
ar rc liball.a *.o
