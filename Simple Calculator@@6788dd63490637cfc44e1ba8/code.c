#include <stdio.h>

int main(){
    char a, b, choice;
    scanf("%d %d %c", &a, &b, &choice);

    switch(choice){
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case'*':
            printf("%d", a*b);
            break;
        case'/':
            printf("%d", a/b);
            break;
        default:
            printf("Invalid");
    }

    return 0;
}