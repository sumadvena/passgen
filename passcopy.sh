#!/bin/bash

if [[ $# -eq 1 ]]; then
	passwordLength="$1"
	./passgen "$passwordLength" | wl-copy
elif [[ $# -gt 1 ]]; then
	echo "To many arguments passed. Exiting"
else 
	./passgen | wl-copy
fi


