#include <stdio.h>

int main(){
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    unsigned int shift = (~(a<<b));
    unsigned int num = a & shift;
    printf("%u", num);

    return 0;
}