// Your code here...
#include<stdio.h>
int main (){
    int a , b , c ;
    printf("");
    scanf("%d %d %d ",&a , &b , &c);
    if (a=b=c){
        printf("Equilateral");
    }
    else if (a!=b || a!=c){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}