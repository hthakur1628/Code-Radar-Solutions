// Your code here...
// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int a ;
    printf("");
    scanf("%d ",&a);
    if (a%3==0){
        printf("Divisible by 3");
    }
    else if (a%5==0){
        printf("Divisible by 5");
    }
    else if(a%3 == 0 && a%5 ==0){
        printf("Divisible by both");
    }
    else{
        printf("None")
    }
    return 0;
}
