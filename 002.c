// Project Euler - Problem 002 - https://projecteuler.net/problem=2
// Code by Douglas Costa - 20/07/2017

/*
Problem 2 
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0, b = 1, fib = 0, i, sum = 0;
    while (fib <= 4000000){
        fib = a + b;
        a = b;
        b = fib;
        if (fib % 2 == 0) sum+=fib;
        printf("\n%d",fib);
    }
    printf("\n%d\n",sum);

}    