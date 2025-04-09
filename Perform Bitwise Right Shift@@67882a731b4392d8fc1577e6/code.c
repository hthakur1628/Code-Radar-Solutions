#include<stdio.h>
int main (){
    int num , shift ;
    printf("");
    scanf("%d %d",&num,&shift);
    int result = num >> shift ; 
    printf("%d",result );
    return 0;
}