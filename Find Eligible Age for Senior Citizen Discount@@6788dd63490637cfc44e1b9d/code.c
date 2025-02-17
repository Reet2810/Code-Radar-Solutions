#include <stdio.h>

int main(){
    int age;
    scamf("%d", &age);
    if(age >= 60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}