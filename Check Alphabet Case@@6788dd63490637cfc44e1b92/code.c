#include <stdio.h>

int main(){
    char alpha;
    scanf("%s", &alpha);
    if(A< alpha < Z){
        printf("Uppercase");
    }
    else if(a < alpha < z){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}