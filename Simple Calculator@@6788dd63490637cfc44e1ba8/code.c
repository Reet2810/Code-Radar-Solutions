#include <stdio.h>

int main(){
    int a, b;
    char choice;
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
            if(b == 0){
            printf("Error");
            }else{
                printf("%d", a/b);
            }
            break;
        default:
            printf("Error");
    }

    return 0;
}