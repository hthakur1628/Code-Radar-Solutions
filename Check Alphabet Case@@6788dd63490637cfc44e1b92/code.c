// Your code here...
#include<stdio.h>
int main()
{
    char ch;
    printf("");
    scanf("%c",&ch);
    if ( ch>= 'A' && ch<='Z'){
        printf("Uppcase",ch);
    }
    else if (ch>= 'a' && ch<= 'z' ){
        printf("Lowercase",ch);
    }
    else{
        printf("")
    }
    return 0;

    
}