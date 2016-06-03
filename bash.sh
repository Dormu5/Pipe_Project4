#!/bin/bash
touch results.csv
> results.csv
for((i=2;i<17;i++));
do
printf "$i, " >> results.csv
echo " liczba zbiorow: $i liczbowych metoda bash:"
bashoutput=$((timeout 5 cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 16|grep  "[0-9]\{$i,\}")| wc -l)
echo $bashoutput
printf "$bashoutput, " >> results.csv
echo " liczba zbiorow: $i liczbowych metoda C:"
coutput=$((timeout 5 ./Program4 | grep  "[0-9]\{$i,\}")| wc -l)
echo $coutput
printf "$coutput\n" >> results.csv
done

