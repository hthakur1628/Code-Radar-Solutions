
int main() {
    int a;
   
    scanf("%d", &a);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year \n", a);
    } else {
        printf("Not a Leap Year\n", a);
    }
    return 0;
}