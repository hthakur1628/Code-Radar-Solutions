#include <stdio.h>

int main() {
    int num, shift;

    // Input from user
    printf("");
    scanf("%d", &num , &shift);

    

    // Perform left shift and get result
    int result = num << shift;

    // Output original and result
    
    printf("%d\n", result);

    return 0;
}
