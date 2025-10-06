// Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, key, pos = -1;
    printf("Enter the number of elements in a array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search for : ");
    scanf("%d", &key);

    for ( int i=0; i<n; i++) {
        if ( arr[i] == key) {
            pos = i;
            break;
        }
    }

    if ( pos == -1) {
        printf("-1\n");
    }

    else {
        printf("Element found at index %d\n", pos);
    }

    return 0;

}

/*Enter the number of elements in a array : 5
Enter 5 elements : 1 2 3 4 5
Enter the element you want to search for : 3
Element found at index 2
*/