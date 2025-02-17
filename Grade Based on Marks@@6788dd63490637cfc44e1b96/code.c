// Your code here...
#include<stdio.h>
int main(){
    int num;
    printf("");
    scanf("%d",&num);
    if (num>=90){
        printf("A");
    }
    else if(80<num>=90){
        printf("B");
    }
    else if(70<num>=80){
        printf("C");
    }
    else if(60<num>=70){
        printf("D");
    }
    else if(num<60){
        printf("F");
    }
    else{
        printf("");
    }
    return 0;
    
    
}