#include <stdio.h>
int main() {
    int n;
    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int answer[n];

    for (int i=0; i<n; i++) {
        int product = 1;
        for (int j=0; j<n; j++) {
            if ( j != i) {
                product *= arr[j];
            }
        }

        answer[i] = product;
    }

    for (int i=0; i<n; i++) {
        printf("%d", answer[i]);
        if ( i != n-1) printf(",");
    }

    return 0;
}

/*enter size of array : 4
Enter the elements : 1 2 3 4
24 ,12 ,8 ,6 
*/