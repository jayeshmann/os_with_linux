#!/bin/bash
read -p "Enter left string: " str1
read -p "Enter right string: " str2
if [[ $str1 == $str2 ]]; then
  echo "Equal"
else
  echo "Not Equal"
fi
