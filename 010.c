// Project Euler - Problem 010 - https://projecteuler.net/problem=10
// Code by Douglas Costa - 25/07/2017

/*
Problem 10 
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>

int isprime(long int n);

int main(){
    long double sum = 2;
    long int num;
    for (num = 3 ; num < 2000000 ; num=num+2){
        if(isprime(num) == 1){
            sum+=num;
        }
    }
    printf("\n\n%.Lf\n\n",sum);

}

int isprime(long int n){
    int i,divi=0;
    if ((n % 2 == 0) && (n != 2)) return 0;

    if ((n % 2 != 0) || (n == 2)){
        if (n == 2) return 1;
        if (n % 2 != 0){
            for(i = 1 ; i <= n ; i+=2){
                if(n % i == 0) divi+=1;
            }
        }
        if (divi == 2) return 1;
        if (divi > 2) return 0;
    }
    return 0;
}