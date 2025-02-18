#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int shift = 1<<b;
    (a & shift) ? printf("1") : printf("0");

    return 0;
}