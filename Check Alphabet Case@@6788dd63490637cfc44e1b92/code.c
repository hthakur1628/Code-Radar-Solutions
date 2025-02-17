// Your code here...
#include<stdio.h>
int main()
{
    char ch;
    printf("");
    scanf("%c",&ch);
    if ( ch>= 'A' && ch<='Z'){
        printf("Uppercase",ch);
    }
    else if (ch>= 'a' && ch<= 'z' ){
        printf("Lowercase",ch);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;

    
}