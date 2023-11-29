#!/bin/bash

check_file() {
	file=${1}
	chars=$(cat ${file} | wc -m)
	contents=$(cat ${file})
}

check_args() {
	[[ ${#} -lt 1 ]] &&
	printf "Error! Supply a text file to read it nicely
		\nUsage: ${0} FILE\n" 1>&2 &&
	exit
}

check_args "${@}"
check_file "${@}"

i=0
while [[ ${i} -lt ${chars} ]]
do
	echo -n "${contents:$i:1}"
	sleep 0.01
	((i++))
done
echo
