#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int sum = 0;

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    // Expected sum from 0 to n
    int expected = n * (n + 1) / 2;

    // Missing number
    int missing = expected - sum;

    printf("%d", missing);

    return 0;
}
