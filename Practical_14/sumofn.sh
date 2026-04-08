#!/bin/bash

echo "Enter a number"
read n

sum_of=0

for ((i=1; i<=n; i++))
do
  sum_of=$((sum_of + i))
done

echo "Sum of n numbers is $sum_of"
