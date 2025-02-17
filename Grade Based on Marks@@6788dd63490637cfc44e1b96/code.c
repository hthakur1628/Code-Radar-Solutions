// Your code here...
#include<stdio.h>
int main(){
    int num;
    printf("");
    scanf("%d",&num);
    if (num>=90){
        printf("A\n");
    }
    else if(90<num>=80){
        printf("B\n");
    }
    else if(80<num>=70){
        printf("C\n");
    }
    else if(70<num>=60){
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