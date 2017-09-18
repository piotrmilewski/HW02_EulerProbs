//Piotr Milewski
//Systems pd10
//HW02 -- If you're feeling rusty, apply eul.
//2017-09-17


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Problem 1
//Find the sum of all the multiples of 3 or 5 below 1000.

int problem1(){
	int sum = 0;
	for (int n = 0; n < 1000; n++){
		if (n % 3 == 0 || n % 5 == 0){
			sum += n;
		}
	}
	return sum;
}

//Problem 5
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int problem5(){
	int num = 1;
	bool flag = true;	
	while(flag){
		for (int n = 1; n <= 20; n++){
			if (num % n != 0){
				num++;
				break;
			}
			else if (num % n == 0 && n == 20){
				flag = false;
			}
		}
	}
	return num;
}

//Problem 6
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int problem6(){
	int sumSquares = 0;
	int squareSum = 0;
	for (int n = 1; n <= 100; n++){
		sumSquares += n * n;
		squareSum += n;
	}
	squareSum *= squareSum;
	return abs(sumSquares - squareSum);
}


int main(){
	printf("Problem 1: %d \n", problem1());
	printf("Problem 5: %d \n", problem5());
	printf("Problem 6: %d \n", problem6());

	return 0;
}
