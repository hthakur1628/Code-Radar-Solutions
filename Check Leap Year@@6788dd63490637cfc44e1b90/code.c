// Your code here...
#include<stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("Leap Year \n",a);
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}