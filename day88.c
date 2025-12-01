#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Array of enum names
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
