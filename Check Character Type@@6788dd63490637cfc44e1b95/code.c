// Your code here...
#include<stdio.h>
int main (){
    char ch;
    printf("");
    scanf("%c",ch);
    if (ch == 'a' || ch== 'e'|| ch== 'i' || ch== 'o' ||ch== 'u'){
        printf("Vowels");
    }
    else if(ch != 'a' || ch != 'i'|| ch != 'o'|| ch != 'u'|| ch != 'e'){
        printf("Consonant");
    }
    else{
        printf("Digit");
    }
    return 0;
}