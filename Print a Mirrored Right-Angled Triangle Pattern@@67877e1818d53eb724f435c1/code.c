// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i<=n ; i++){
        for (int k = n-i ; k >0 ; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0; 
}