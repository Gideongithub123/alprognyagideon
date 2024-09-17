#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    if (n == 2) {
        return 1; 
    }
    if (n % 2 == 0) {
        return 0;
    }
    
  
    for (int i = 3; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
