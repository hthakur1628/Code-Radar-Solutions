// Your code here...
#include<stdio.h>
int main (){
    char ch;
    printf("");
    scanf("%c",ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    
    printf("Vowel\n");
    }
    else if(ch != 'a' || ch != 'i'|| ch != 'o'|| ch != 'u'|| ch != 'e')
    (ch != 'A' || ch != 'E' || ch != 'I' || ch != 'O' || ch != 'U'){
        printf("Consonant");
    }
    else if (ch == '@'){
        printf("Special Character");
    }
    else {
        printf("Digit");
    }
    return 0;
}