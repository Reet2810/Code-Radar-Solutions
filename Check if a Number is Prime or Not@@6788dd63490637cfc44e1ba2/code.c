#include <stdio.h>

int main(){
    int a; 
    scanf("%d", &a);
    int isPrime = 1;
    for(int i = 2; i<=a; i++){
        if(a%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}