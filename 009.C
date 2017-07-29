// Project Euler - Problem 009 - https://projecteuler.net/problem=9
// Code by Douglas Costa - 25/07/2017

/*
Problem 9 
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    for (a = 1 ; a <= 333 ; a++){
        for(b = 1 ; b <= 666 ; b++){
            c = sqrt(pow(a,2)+pow(b,2));
            if(a+b+c == 1000) printf("\n%.f\n",a*b*c);
        }
    }
}