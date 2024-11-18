#!/bin/bash

FILENAME=$1

if [ -e "$FILENAME" ]; then
	MOD_TIME=$(stat -c %y "$FILENAME")
	echo "The last modification time of '$FILENAME' is : $MOD_TIME"
else
	echo "File '$FILENAME' does not exist."
fi	
