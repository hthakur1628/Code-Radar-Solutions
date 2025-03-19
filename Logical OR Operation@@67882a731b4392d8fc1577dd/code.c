// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int a , b ;
    scanf("%d %d ",&a ,&b);
    if (a || b > 0){
        printf("True");
    }
    else if (a || b == 0 ) {
        printf("False");
    }
    else {
        printf("None");
    }
    return 0;
}