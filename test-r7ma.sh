#!/bin/bash


 
for file in ./tests/*;
do
	name=${file#"./tests/test_"}
	name=${name%".c"}
	make test FILE=$file > /dev/null 2>&1
	echo -e "\e[34mTESTNG ${name}\e[0m"
	./main > /dev/null 2>&1
	# ./main 

	return_value=$?
	if [[ $return_value -ne 0 ]]; then
		echo -e "\e[31mTEST FAILED\e[0m"
		# echo "returned $return_value"
		# echo "Details"
		# ./main
	else
		echo -e "\e[32mTEST PASSED\e[0m"
	fi
	sleep 0.1
	echo ''
done
