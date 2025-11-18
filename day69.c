#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int seen[n];  // frequency array
    for (int i = 0; i < n; i++)
        seen[i] = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        // If seen before → repeated element
        if (seen[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    return 0;
}
