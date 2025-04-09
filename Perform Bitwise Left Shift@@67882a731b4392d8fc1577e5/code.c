#include <stdio.h>

int main() {
    int num, shift;

    // Input from user
    printf("");
    scanf("%d", &num);

    printf(" ");
    scanf("%d", &shift);

    // Perform left shift
    int result = num << shift;

    // Print result
    printf("%d\n", num, shift, result);

    return 0;
}
