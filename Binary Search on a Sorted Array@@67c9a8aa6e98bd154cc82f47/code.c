#include<stdio.h>

int binarysearch(int arr[] , int n , int target){
    int low = 0 , high = n - 1 ;
    while (low <= high ){
        int mid = (low + high )/2 ; 
        if (arr[mid]==target ){
            return mid ; 
        }
        if (arr[mid]<target){
            low = mid + 1;
        }
        else{
            high = mid - 1 ;
        }
    }
    return -1 ;
}
int main (){
    int n , target ; 
    scanf("&d",&n);
    int arr[n];
    for (int i = 0 ; i < n , i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int result = binarysearch(arr , n , target);
    printf("%d\n",result);
    return 0 ; 
}