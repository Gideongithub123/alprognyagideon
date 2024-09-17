#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int values[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }
    
    for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
    if (values[j] > values[j + 1]) {
              
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
        }
    }
}
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", values[i]);
    }
    
    return 0;
}
