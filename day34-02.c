// Q68: Delete an element from an array.

#include <stdio.h>
int main() {
    int n, pos;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : ",n);
    for ( int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position  to delete : ");
    scanf("%d", &pos);

    for (int i= pos; i<n-1; i++) 
    {
        arr[i] = arr[i+1];
    }

    n--;

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/**/
