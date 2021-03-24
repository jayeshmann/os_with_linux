#!/bin/bash
read -p "No of elements: " n
a=0
b=1
echo "fibonacci: "
for ((i = 0; i < n; i++)); do
  echo -n "$a "
  fn=$((a + b))
  a=$b
  b=$fn
done
echo $'\n'
