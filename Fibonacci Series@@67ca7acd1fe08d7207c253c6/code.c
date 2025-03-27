// Your code here...
void fibonacciSeries(int n);
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Invald input\n");
        fibonacciSeries(n);
        return 0;
    }
    void fibonacciSeries( int n){
        for (int i=0;i<=n;i++){
            fibonacciSeries+=i;
        }
    }
    return 0;
}