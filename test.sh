#! /bin/bash
read -p  "how many numbers to generate ? " SIZE

ARG=$(python -c "import random ; print(*random.sample(range(-10000,10000),"$SIZE"), sep=' ')")

read -p "Do you want to show args ? [y/n] " YN

if [ $YN = "y" ]
then
	echo "arguments = " $ARG
fi

./push_swap $ARG > op.txt
echo -n "number of operation to sort : "
cat ./op.txt | wc -l
echo -n "Checker :                     "
./checker_linux $ARG < op.txt
