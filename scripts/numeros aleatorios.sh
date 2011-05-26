#!/bin/bash
# Multiple ways to count up to 10.

# Using "seq" ...
for a in `seq 255`
do
  echo -n "$a	"
  echo -n $[($RANDOM%1000)]
  echo;
done  
