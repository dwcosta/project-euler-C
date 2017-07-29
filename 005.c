// Project Euler - Problem 005 - https://projecteuler.net/problem=5
// Code by Douglas Costa - 25/07/2017

/*
Problem 5 
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int main(){
    unsigned long int num = 2520;

    while ( (num % 1 != 0) || (num % 2 != 0) || (num % 3 != 0) || (num % 4 != 0) || (num % 5 != 0) || (num % 6 != 0) ||
    (num % 7 != 0) || (num % 7 != 0) || (num % 9 != 0) || (num % 10 != 0) || (num % 11 != 0) || (num % 12 != 0) || 
    (num % 13 != 0) || (num % 14 != 0) || (num % 15 != 0) || (num % 16 != 0) || (num % 17 != 0) || (num % 18 != 0) || 
    (num % 19 != 0) || (num % 20 != 0) ){ //test if the number if actually divisible from 1 to 20
        num+=2520; //if yes, increases in 2520, because if the given number has mod 0 from 1 to 10, 
                   //the chasing number will be multiple from 2520.
    }
    printf("\n%lu\n",num);
}