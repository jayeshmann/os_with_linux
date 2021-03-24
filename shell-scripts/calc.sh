#!/bin/bash
read -p "Enter first no: " a
read -p "Enter second no: " b
echo -e "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit"
read -p ">>" op
case $op in
1)
  c=$(expr $a + $b)
  ;;
2)
  c=$(expr $a - $b)
  ;;
3)
  c=$(expr $a \* $b)
  ;;
4)
  c=$(expr $a / $b)
  ;;
5) exit ;;
esac
echo $'\n'$c
