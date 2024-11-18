#!/bin/bash

echo -e -n "Enter FILE / FOLDER : "
read path

if [ -e $path ]
then
	if [ -d $path  ]
	then
		echo "Path is Directory"
		echo -e -n "Folder Contents : "
		ls $path
	elif [ -f $path  ]
	then 
		echo "Path is Regular File"
		echo -n -e "Size in Bytes : "
		stat -c %s $path
	fi
else
	echo "Invalid Path"
fi	
