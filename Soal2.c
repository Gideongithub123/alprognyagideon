#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];
    
    fgets(A, 100, stdin);
    fgets(B, 100, stdin);
    
    int lengthA = strlen(A);
    int lengthB = strlen(B);
    if (A[lengthA - 1] == '\n') {
        A[lengthA - 1] = '\0';
    }
    if (B[lengthB - 1] == '\n') {
        B[lengthB - 1] = '\0';
    }
    
 
    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
       
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    
    return 0;
}
