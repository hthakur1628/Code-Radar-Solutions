// Your code here...
#include<stdio.h>
int binarySearch(int arr[] , int n , int target );
int main (){
    int n , target ; 
    scanf("%d",&n);
    int arr[] = {};
    for (int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int result = binarySearch(arr,n,target);
    printf("%d\n",result);
    return 0 ;
}

int binarySearch(int arr[] , int n , int target ){
     int low , mid , high ; 
    while(low <= high){
        mid = (low + high)/2;
        if (arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    return -1;
}