#!/bin/bash

until [ $choice -ne 5 ]
do
echo "Menu"
echo -e "1. Date \n2. cal \n3. Ls \n4.Pwd \n5. Exit"
echo "Enter the choice"
read choice

case $choice in
	
	1) echo -e -n "DATE : "
	date
	;;

	2) echo -e -n "CALENDER :"
	cal
	;;

	3) echo -e -n "List of files :"
	ls
	;;

	4) echo -e -n "Print current directory :"
	pwd
	;;

	5) echo -e -n "EXIT"
	exit
	;;

esac
done

