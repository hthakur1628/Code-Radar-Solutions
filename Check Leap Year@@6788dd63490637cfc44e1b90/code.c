// Your code here...
#include<stdio.h>
int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
        printf("Leap Year \n",a);
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}
