// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d \n",(n*(n+1)/2));
    }
    return 0;
}