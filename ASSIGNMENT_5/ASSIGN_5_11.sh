#!/bin/bash

calculate_gross_salary()
{
	echo -e -n "Enter the basic salary : "
	read basic_salary
	da=$(echo "$basic_salary * 0.40" | bc)
	hra=$(echo "$basic_salary * 0.20" | bc)
	gross_salary=$(echo "$basic_salary + $da + $hra" | bc)
	echo "Gross Salary : $gross_salary"
}

calculate_gross_salary
