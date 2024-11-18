#!/bin/bash

echo -e -n "Enter Any Number : "
read num

i=1
fact=1

while [ $i -le $num ]
do
	fact=`expr $fact \* $i`
	i=`expr $i + 1`
done

echo -e "Factorial Of $num = $fact"


