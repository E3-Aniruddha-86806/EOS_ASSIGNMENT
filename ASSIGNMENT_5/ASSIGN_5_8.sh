#!/bin/bash

echo -e -n "Enter Any Number : "
read n1
i=1

while [ $i -le 10  ]

do
  res=`expr $i \* $n1`
  echo -e  "$res	"
  i=`expr $i + 1`
done 

##################################################

echo -e  "----------------------------------------"
i=1
until [ $i -gt 10 ]
do
	res=`expr $i \* $n1`
	echo -e "$res"
	i=`expr $i + 1`
done	
