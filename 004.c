// Project Euler - Problem 004 - https://projecteuler.net/problem=4
// Code by Douglas Costa - 25/07/2017

/*
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

long int reverse(long int n);

int main(){
    int i,j;
    long int num,rev,higher,r;

    higher = 0;

    for (i = 100 ; i <= 999 ; i++){
        for (j = 100 ; j <= 999 ; j++){
            num = i * j;
            rev = reverse(num);
            if ((num == rev) && (rev >= higher)) higher = num;
        }
    }
    printf("\n\n%ld\n\n",higher);
}

long int reverse(long int n){
    long int r = 0,rem;
    while( n > 0){
        rem = n % 10;
        r = r * 10 + rem;
        n = n / 10; 
    }
    return r;
}

