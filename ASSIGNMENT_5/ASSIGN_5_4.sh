#!/bin/bash

echo -e -n "Enter Any Number : "
read num

function check_prime ()
{
	flag=0
	i=2
	while [ $i -lt $1 ]
	do
		if [ `expr $1 % $i` -eq 0 ]
		then
			flag=1
		fi
		i=`expr $i + 1`
	done
	echo $flag
}

res=$( check_prime $num )
if [ $res -eq 0 ]
then 
	echo "$num is Prime Number"
else
	echo "$num is not Prime Number"
fi	