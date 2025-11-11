#include <stdio.h>
int main() {
    int n, x;

    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter a sorted array : ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target : ");
    scanf("%d", &x);

    int found=-1;

    for(int i=0; i<n; i++) {
        if(arr[i] >= x) {
        found = i;
        break;
        }
    }
    printf("%d\n", found);
    return 0;
}