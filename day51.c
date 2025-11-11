#include <stdio.h>
int main() {
    int n;
    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements in sorted order : ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target : ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            if (first == -1)
            first = i;
         last = i;
        }

    }
    printf("%d , %d\n", first,last);
    
    return 0;
}