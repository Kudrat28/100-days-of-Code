// Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, pos, num;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[100];

    printf("Enter %d elements : ",n);
    for ( int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert : ");
    scanf("%d %d", &pos, &num);

    for ( int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = num;
    n++;

    for ( int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;


}

/*Enter size of array : 4
Enter 4 elements : 10 20 30 40
Enter position and element to insert : 2 15
10 20 15 30 40 
*/