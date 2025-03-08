#include <unistd.h>

void putchar(char letter) {
    write(1, &letter, 1);
}

void print_row(int width, char start, char middle, char end) {
    if (width > 0) {
        putchar(start);
        for (int i = 2; i < width; i++) {
            putchar(middle);
        }
        if (width > 1) {
            putchar(end);
        }
        putchar('\n');
    }
}

void rush(int x, int y) {
    if (x <= 0 || y <= 0) return;

    print_row(x, 'A', 'B', 'A');

    for (int i = 2; i < y; i++) {
        print_row(x, 'B', ' ', 'B');
    }

    if (y > 1) {
        print_row(x, 'C', 'B', 'C');
    }
}

int main() {
    rush(15, 19);
    return 0;
}
