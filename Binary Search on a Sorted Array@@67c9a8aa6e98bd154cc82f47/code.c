// Your code here...
#include<stdio.h>
int binarySearch(int arr[] , int size , int element );
int main (){
    int arr [] = {1,2,4,45,65,68,69,70,89,90,100};
    int size = sizeof(arr)/sizeof(int);
    int element = 65;
    int SearchIndex = binarySearch(arr , size , element );
    printf("the element is %d was found at index %d \n ", element , SearchIndex);
    return 0 ; 
}

int binarySearch(int arr[] , int size , int element ){
    int low , mid , high ; 
     low = 0;
     high = size-1;
    while(low <= high){
        mid = (low + high)/2;
        if (arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    return -1;
}