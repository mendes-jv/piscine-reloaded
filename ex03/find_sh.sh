#!/bin/sh                                                                       
find . -type f -name '*.sh' -printf "%f\n" | sed 's/\.sh//'
