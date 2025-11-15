#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter size of subarray : ");
    scanf("%d", &k);

    

    for (int i=0; i<=n-k; i++) {
        int max = arr[i];
        for (int j=i; j<i+k; j++) {
            if (arr[j] > max) 
                max = arr[j];
        }    
            printf("%d ", max);
    } 
       return 0;
}

/*
Enter size of array : 9
Enter the elements : 1 2 3 1 4 5 2 3 6
Enter size of subarray : 3
3 3 4 5 5 5 6
*/