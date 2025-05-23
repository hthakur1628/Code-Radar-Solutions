#include <stdio.h>

void fibonacciSeries(int n);

int main () {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    fibonacciSeries(n);
    return 0;
}

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;
    
    printf("");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
}
