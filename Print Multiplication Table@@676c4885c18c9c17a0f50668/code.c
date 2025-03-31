// Your code here...
#include<stdio.h>
int main (){
    int N;
    scanf("%d",&N);
    for (int i=1 ; i<=10 ; i++){
        printf("%d * %d == %d ",i , N , N*i);
        printf("\n")
    }
    printf("\n");
    return 0 ;
}