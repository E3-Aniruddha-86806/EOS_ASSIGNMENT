#!/bin/bash

echo -e -n "Enter Any Number : "
read num

i=0
n1=0
n2=1
echo "Fibonacci Series upto $num number is : "

while [ $num -gt $i ]
do
	res=`expr $n1 + $n2`
	echo "$res"
	n1=$n2
	n2=$res
	i=`expr $i + 1`
done	
