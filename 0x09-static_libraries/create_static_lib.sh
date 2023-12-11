#!/bin/bash

gcc -c *.c              # Compile each C file into object files (.o)
ar -rc liball.a *.o     # Create the static library (liball.a) from the object files
