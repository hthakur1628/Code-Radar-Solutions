// Your code here...
#include<studio.h>
int main(){
    int a ;
    scanf("%d",&a);
    if((year % 4 == 0 && year != 0) || (year % 400 == 0)){
        printf("Leap Year %d",a);
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}