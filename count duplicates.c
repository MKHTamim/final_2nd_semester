#include<stdio.h>
int main(){
    
    int arr[20]= {1,2,2,2,3};
    int a,j , count = 0;
    
    for(a=0;a<5;a++){
        for(j=a+1;j<5;j++){
            if(arr[a]==arr[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    
    return 0;
}