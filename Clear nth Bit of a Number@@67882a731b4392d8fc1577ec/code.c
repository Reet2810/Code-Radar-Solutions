#include <stdio.h>

int main(){
    unsigned int a, b;
    scanf("%u %u", &a, &b);

    unsigned int shift = (~(1<<b));
    unsigned int num = a & shift;
    printf("%u", num);

    return 0;
}