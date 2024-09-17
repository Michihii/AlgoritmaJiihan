#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);
    if (strlen(A) != strlen(B)){
    printf("BERBEDA\n")        ;
    }
    else {
        if (strcmp(A,B) == 0){
            printf("IDENTIK\n");
        } 
        else {
            printf("MIRIP\n");
        }


    }

    return 0;
}
