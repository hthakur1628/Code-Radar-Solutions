#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("");
    scanf("%d", &num);

    // Perform one's complement
    int result = ~num;

    // Print result
    
    printf("%d\n", result);

    return 0;
}
