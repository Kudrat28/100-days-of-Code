#include <stdio.h>
int main() {
    int n;
    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements of array : ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];

    int left_sum = 0, pivot = -1;

    for (int i = 0; i < n; i++) {
        int right_sum = total - left_sum - arr[i];
        if (left_sum == right_sum) {
            pivot = i;
            break;    
        }
        left_sum += arr[i];
    }

    printf("%d\n", pivot);
    return 0;
}

/*
output
enter size of array : 6
enter elements of array : 1 7 3 6 5 6
3
*/