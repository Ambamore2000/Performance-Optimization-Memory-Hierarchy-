#!/bin/bash
declare -a arraySizeVals=(256 512 768 1024 1280 1536 1792 2048);

for ((i=1;i<=2;i++))
do
	for ((j=0;j<${#arraySizeVals[@]};j++))
	do
		./matrix_math $i ${arraySizeVals[j]}
	done
done
