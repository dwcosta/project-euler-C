// Project Euler - Problem 007 - https://projecteuler.net/problem=7
// Code by Douglas Costa - 25/07/2017

/*
Problem 7 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>

int isprime(long int n);

int main(){
    long int num = 3, count = 1; //initiate in 3 and count in 1, because 2 is already a prime number.
    int qty = 10001;
    while (count < qty){
        if (isprime(num) == 1) {
            count+=1;
        }
        num+=2; //increase in 2 to test only odd numbers.
    }
    printf("\n\nthe 10001st number is: %ld\n\n",num-2);

}


int isprime(long int n){
    int i, divi = 0;
    if ((n % 2 == 0) && (n != 2)) return 0; //again, test only odd numbers.

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