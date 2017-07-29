// Project Euler - Problem 001 - https://projecteuler.net/problem=1
// Code by Douglas Costa - 20/07/2017

/*
Problem 1 
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0,i = 0;
    for(i = 0 ; i < 1000 ; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            soma+=i;
        }   
    }
    printf("\ntotal %d\n",soma);
}