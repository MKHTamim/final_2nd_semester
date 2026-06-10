#include<stdio.h>
int main(){
    
    int arr[20]= {1,2,3,4,5};
    
    int n =5,a,temp ;
    
    temp = arr[0];
    
    for(a=0;a < n-1;a++){
        arr[a] = arr[a+1];
    }
    arr[n-1]=temp;
    
    for(a=0;a<5;a++){
        printf("%d",arr[a]);
    }
    return 0;
}