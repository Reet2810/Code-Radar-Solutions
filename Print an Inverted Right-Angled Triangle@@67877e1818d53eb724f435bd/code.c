#include <stdio.h>

int main(){
    int n, r, c;
    scanf("%d", &n);
    for(r = n; r >= 1; r--){
        for (c = 1; c <= r; c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}