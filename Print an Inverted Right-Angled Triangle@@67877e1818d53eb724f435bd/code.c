// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=n-i+1; j>0;j--){
            printf("*");
        }
     printf("\n");

    }
    return 0;
}
