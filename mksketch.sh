#!/bin/bash
if [ -n "$1" ]
then
	DIR="$1"
	mkdir -p ./sketch/${DIR}
	cp ./utility/BareMinimum.pde ./sketch/${DIR}/${DIR}.pde
	cp ./utility/Makefile ./sketch/${DIR}/
	echo 'done'
else
	echo "Usage:\n  ./mksketch.sh nomeproject"
	exit
fi
