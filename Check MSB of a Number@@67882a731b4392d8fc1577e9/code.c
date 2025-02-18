#include <stdio.h>

int main(){
    unsigned int a;
    scanf("%u", &a);
    unsigned int shift_a = 1<<31;
    (a & shift_a) ? printf("Set") : printf("Not Set");

    return 0;
}