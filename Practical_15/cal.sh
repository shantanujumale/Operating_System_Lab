 #!bin/bash
echo "Enter a Number "
read a
echo "Enter a Number"
read b

echo "Enter operation(+,-,*,/)"
read op

case $op in
+)
 echo "Addition: $((a + b)) ";;

-) 
echo "Subtraction:  $((a - b)) ";;

*) 
echo "Multiplication:  $((a * b)) ";;

/) 
echo "Division:  $((a / b)) ";;

*)
echo "Invalid Choice ";;

esac

