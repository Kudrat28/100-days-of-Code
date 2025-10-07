// Search in a sorted array using binary search.

#include <stdio.h>
int main() 
        {
    int n, search, first=0, mid=0, last, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in ascending order : ",n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for : ");
    scanf("%d", &search);

    last = n-1;

    while ( first <= last )
    {
        mid = (first + last) / 2;

        if ( arr[mid] < search )
        {
            first = mid + 1;
        }

        else if ( arr[mid] == search )
        {
            printf("Found at index %d\n", mid);
            break;
            
        }

        else {
            last = mid-1;
        }

        
    }

    if ( first > last)
    {
        printf("-1\n");
    }
    
    return 0;

}


/*Enter size of array : 5
Enter 5 elements in ascending order : 1 3 5 7 9
Enter the value to search for : 7
Found at index 3
*/