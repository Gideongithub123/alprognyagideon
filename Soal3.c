#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(unsigned long long n) {
    if (n <= 1) {
        return 0; 
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0; 
    }

    unsigned long long i;
    unsigned long long limit = (unsigned long long)sqrt((double)n); 

    for (i = 3; i <= limit; i += 2) { 
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    unsigned long long N;
    scanf("%llu", &N);
    
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
