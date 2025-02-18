#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int shift = (~(a<<b));
    num = num & shift;
    printf("%d", num);

    return 0;
}