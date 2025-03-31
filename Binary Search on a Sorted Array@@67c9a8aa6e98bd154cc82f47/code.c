// Your code here...
#include<stdio.h>
int binarySearch(int arr[] , int n , int target );
int main (){
    int n , target ; 
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int result = binarySearch(arr,n,target);
    printf("%d\n",result);
    return 0 ;
}

int binarySearch(int arr[] , int n , int target )