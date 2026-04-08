#!/bin/bash
echo"First Method"
for i in 1 2 3 4 5
do
echo "Number is $i"
done

echo"Second Method"
for i in { 1..5 }
do
echo "Number is $i"
done
