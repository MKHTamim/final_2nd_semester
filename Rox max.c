#include <stdio.h>

int main() {

    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    for ( int i =0 ; i < 2 ; i++){
        int max = arr[i][0];
        for (int j = 0; j < 3 ; j++ ){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        printf("Row %d : %d \n", i , max);
    }

    return 0;
}