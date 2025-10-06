// Find the digit that occurs the most times in an integer number.

#include <Stdio.h>
int main() {
    int long long n;
    int count[10] = {0};
    int digit, i, max=0, result=0;

    scanf("%lld", &n);

    while ( n > 0 ) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for ( i=0; i<n; i++ ) {
        if ( count[i] > max) {
            max = count[i];
            result = i;

        }
    }

    printf("%d",result);
    return 0;
}
