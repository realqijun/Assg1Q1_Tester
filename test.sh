#!/bin/bash

if [ ! -d "test" ]
then
	git clone https://github.com/realqijun/Assg1Q1_Tester.git test_files \
	&& cd test_files && mv test ../ && cd .. && rm -rf test_files
fi

temp="temp_object_file_1"

if [ -f "Assg1Q1ans.c" ]
then
	gcc Assg1Q1ans.c -c -o $temp
else
	echo "Assg1Q1ans.c not found"
	exit
fi

for filename in ./test/*.c; do
	gcc $filename $temp
	./a.out
done

rm $temp
