// Your code here...
#include<stdio.h>
int main(){
    int num;
    printf("");
    scanf("%d",&num);
    if (num>=90){
        printf("A\n");
    }
    else if(num>=80){
        printf("B\n");
    }
    else if(num>=70){
        printf("C\n");
    }
    else if(num>=60){
        printf("D\n");
    }

    else{
        printf("F");
    }
    return 0;
    
    
}