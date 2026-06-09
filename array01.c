#include<stdio.h>
int main(){
    int temp[31] , i, min,max;
    int days ,sum;
    float avg;
    
    scanf("%d",&days);
    for(i=0 ; i<days;i++)
    scanf("%d",&temp[i]);
    
    sum =0 ;
    for(i=0 ; i<days;i++){
        sum += temp[i];
    }
    
    avg=sum/days;
    
    min = 200;
    max = 0;
    
    for(i=0;i<days;i++){
        if(min > temp[i] )
         min = temp[i];
         
        if(max < temp[i])
        max = temp[i];
    }
    
    printf("%d\n",avg);
    printf("%d\n",min);
    printf("%d\n",max);
}
