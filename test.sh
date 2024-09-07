#!/bin/bash

if [ -d "test" ]
then
	echo "hi"
else
	echo "bye"
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
