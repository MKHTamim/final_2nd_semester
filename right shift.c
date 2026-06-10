#include<stdio.h>

int main() {

    int arr[20] = {1,2,3,4,5};

    int n = 5, a, temp;

    temp = arr[n-1];

    for(a = n-1; a > 0; a--) {
        arr[a] = arr[a-1];
    }

    arr[0] = temp;

    for(a = 0; a < n; a++) {
        printf("%d ", arr[a]);
    }

    return 0;
}