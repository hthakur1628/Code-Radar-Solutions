// Your code here...
#include<stdio.h>
int main(){
    int number ;
    printf("");
    scanf("%d",&number);
    if (number % 5 == 0 && number % 11 ==0){
        printf("Divisible %d",number);
    }
    else{
        printf("Not Divisible ");
    }
    return 0;

}