// Project Euler - Problem 006 - https://projecteuler.net/problem=6
// Code by Douglas Costa - 25/07/2017

/*
Problem 6 
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and 
the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int main(){
    long int n , sumsq = 0, sqsum = 0, diff;

    for (n = 1 ; n <= 100 ; n++) sumsq+=pow(n,2);
    printf("\n\nthe sum of the squares from 1 to 10: %ld",sumsq);

    for (n = 1 ; n <= 100 ; n++) sqsum+=n;
    sqsum = pow(sqsum,2);
    printf("\nthe square of the sum from 1 to 10: %ld",sqsum);
    
    diff = sqsum - sumsq;
    
    printf("\nthe difference between then is: %ld\n\n",diff);
}