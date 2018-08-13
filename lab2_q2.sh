#!/bin/bash
echo "Enter your name"
read N
mkdir $N
cd $N
for i in 1 2 3 4 5
do 
touch $N$i.cpp
done
