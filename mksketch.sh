#!/bin/bash
if [ -n "$1" ]
then
	DIR="$1"
	echo "Creo la cartella"
	mkdir -p ./sketch/${DIR}
	echo "Copio i file"
	cp ./utility/BareMinimum.pde ./sketch/${DIR}/${DIR}.pde
	cp ./utility/Makefile ./sketch/${DIR}/
	echo 'fine'
else
	echo "Occorre specificare un nome per lo sketch"
	exit
fi
