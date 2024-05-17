#!/bin/bash

# Read this first:
# https://github.com/earlephilhower/ESP8266Audio?tab=readme-ov-file#audiofilesource-classes

# Check if a filename is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

filename="$1"

# Check if file exists
if [ ! -f "$filename" ]; then
    echo "File '$filename' not found!"
    exit 1
fi

# Generate c file
xxd -i "$filename" > "src/ui/$(basename "$filename" .${filename##*.}).c"

