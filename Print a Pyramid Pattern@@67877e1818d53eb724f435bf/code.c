// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=i;j<n;j++){
            printf(" ");
        }
        for(k=(2*i-1);k<n;k++){
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}