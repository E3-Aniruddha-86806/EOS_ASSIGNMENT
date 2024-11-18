#!/bin/bash

echo -e -n "Enter First Number :"
read n1

echo -e -n "Enter Second Number :"
read n2

echo -e -n "Enter Third Number :"
read n3

if [ $n1 -gt $n2 ]
then
	if [ $n1 -gt $n3 ]
	then
		echo "$n1 is greater than $n2 and $n3"
	else
		echo "$n3 is greater than $n1 and $n2"
	fi
else
	if [ $n2 -gt $n3 ]
	then
		echo "$n2 is greater than $n1 and $n3"
	else
		echo "$n3 is greater than $n1 and $n2"
	fi
fi	
	
