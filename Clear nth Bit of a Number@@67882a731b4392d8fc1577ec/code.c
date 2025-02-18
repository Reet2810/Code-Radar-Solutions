#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int shift = (~(a<<b));
    int num = a & shift;
    printf("%d", num);

    return 0;
}