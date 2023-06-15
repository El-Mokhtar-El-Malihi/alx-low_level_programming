#!/bin/bash
c_file="$CFILE"
output_file="c"
cpp -E "$c_file" -o "$output_file"

