#include <stdio.h>
#include <math.h>

int prime(int n);

int main(){
    long int num=600851475143;
    int max;
    int multi = 1;
    
    while (multi*multi<=num){
        printf("\n%d",multi);   
        multi+=2;
        if (num % multi ==0){
            if (prime(multi)) max = multi;
        }
    }
    printf("\nmax factor = %d\n",max);
}

int prime(int n){
    int j;
    if (n<0) return 0;
    for(j = 2 ; j <= sqrt(n)+1 ; j++) if (n%j==0) return 0;
    return 1;
    
}