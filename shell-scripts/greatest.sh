#!/bin/bash
read -p "Enter 1st number: " n1
read -p "Enter 2nd number: " n2
read -p "Enter 3rd number: " n3

if [[ $n1 -gt $n2 && $n1 -gt $n3 ]]; then
  echo "$n1 is greatest"
elif [[ $n2 -gt $n3 && $n2 -gt $n1 ]]; then
  echo "$n2 is greatest"
else
  echo "$n3 is greatest"
fi
