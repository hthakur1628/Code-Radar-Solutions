#include <stdio.h>

int main() {
    int num1, num2;

    printf("");
    scanf("%d", &num1);

    printf("");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d \n", num1);
    } else if (num2 > num1) {
        printf("%d %d\n", num2, num1);
    } else {
        printf("Both integers are equal\n");
    }

    return 0;
}
