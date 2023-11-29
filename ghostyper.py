#!/usr/bin/env python

import os
import sys

def read_file(file_path): 
    with open(file_path, 'r') as f:
        contents = print(f.read())
    return contents

try:
    read_file(sys.argv[1])
except IndexError:
    sys.stderr.write("Error! No input file specified. Usage: " + sys.argv[0] + " input_file\n")
    #print("Error: No input file specified. Usage:", sys.argv[0], "input_file")
    sys.exit(1)
except FileNotFoundError:
    #print("Error: Input file", sys.argv[1], "not found.")
    sys.stderr.write("Error! Input file " + sys.argv[1] + " not found.\n")
    sys.exit(1)
