#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a == b) && (b == c) && (a == c)){
        printf("Equilateral");
    }
    else if((a == b && a != c) && (b == c && b != a) && (c == a && c != b)){
        printf("Isosceles");
    }
    else("Scalene");
    return 0;
}