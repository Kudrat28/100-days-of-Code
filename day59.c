#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : ");
    for (int i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter a integer : ");
    scanf("%d", &k);

    if ( k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    int maxsum = 0;

    for (int i=0; i<k; i++) {
        maxsum += arr[i];
    }

    int windowsum = maxsum;

    for (int i=k; i<n; i++) {
        windowsum += arr[i] - arr[i-k];
        if (windowsum > maxsum) 
        maxsum = windowsum;
    }
    printf("%d\n",maxsum);
    return 0;
}

/*Enter size of array : 9
Enter the elements : 1 4 2 10 23 3 1 0 20
Enter a integer : 4
39
*/