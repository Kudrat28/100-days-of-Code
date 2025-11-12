#include <stdio.h>
int main() {
    int n, x, total=0;
    printf("Enter a positive integer (n) : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        total += i;
    }

    int leftsum=0, rightsum;

    for(x=1; x<=n; x++) {
        leftsum += x;
        rightsum = total - leftsum + x;
        if ( leftsum == rightsum) {
            printf(" Pivot integer is : %d\n", x);
            return 0;
        } 
    }

    printf("-1\n");
    return 0;
}

/*Enter a positive integer (n) : 8
 Pivot integer is : 6
 */
