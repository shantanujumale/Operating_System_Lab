#!/bin/bash
echo " Enter the option "
echo " a =  Print the data "
echo " b = List all file in current dir "
read choice
case $choice in
a)
 data;;
b)
 ls;;
*)
 echo "Not a valid option";;
esac
