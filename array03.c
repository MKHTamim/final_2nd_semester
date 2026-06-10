//bublesort bigtosmall
#include<stdio.h>
int main(){
    
    int a,b,t,count;
    
    scanf("%d",&count);
    
    int item[100] = {1,5,3,2,4};
    
    for(a=1;a<count;a++){
        for(b=count-1;b>=a;--b){
            if(item[b-1]<item[b]){
               t=item[b-1];
               item[b-1]=item[b];
               item[b]=t;
            }
        }
    }
    for(a=0;a<count;a++)
    printf("%d",item[a]);
    
    return 0;
}


//1 5 3 2 4 
