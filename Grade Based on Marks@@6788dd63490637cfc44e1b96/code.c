// Your code here...
#include<stdio.h>
int main(){
    int num;
    printf("");
    scanf("%d",&num);
    if (num>=90){
        printf("A");
    }
    else if(90<num>=80){
        printf("B");
    }
    else if(80<num>=70){
        printf("C");
    }
    else if(70<num>=60){
        printf("D");
    }
    else if(60<num){
        printf("F");
    }
    else{
        printf("");
    }
    return 0;
    
    
}