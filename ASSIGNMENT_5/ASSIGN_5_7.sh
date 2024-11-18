#!/bin/bash

echo -e -n "Enter any number : "
read n1

if [ `expr $n1` -gt 0 ]
then
	echo "$n1 is POSITIVE"
elif [ `expr $n1` -eq 0 ]
then
	echo "It is ZERO"
else
	echo "$n1 is NEGATIVE"
fi	

