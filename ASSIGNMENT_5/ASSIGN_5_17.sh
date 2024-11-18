#!/bin/bash

echo -e -n "Enter Number Of Rows : "
read row
i=1

while [ $i -le $row ]
do
	j=1
	while [ $j -le $i ]
	do
		echo -e -n "* "
	j=`expr $j + 1`
	done 
echo -e " "
i=`expr $i + 1`
done	
