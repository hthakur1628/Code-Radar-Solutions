// Your code here...
#include<stdio.h>

void fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Invald input\n");
        fibonacciSeries(n);
        return 0;
    }
    void fibonacciSeries( int n){
        int fib = 0 ;
        for (int i=0;i<=n;i++){
            fib += i;
        }
    }
    return 0;
}