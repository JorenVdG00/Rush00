#include <unistd.h>

void putchar(char letter)
{
    write (1, &letter, 1);
}

void rush(int x, int y)
{
    int     row = 1;
    int     column = 1;
    char    newline = '\n';
    char    space = ' ';
    
    if ((x >0) && (y>0))
    {
        putchar('A');
        column++;
        while (column < x)
        {
            putchar('B');
            column++;
        }
        putchar('A');
        putchar(newline);
        row++;
        column = 1;
        while (row < y)
        {
            putchar('B');
            column++;
            while (column < x)
            {
                putchar(space);
                column++;
            }
            putchar('B');
            row++;
            column = 1;
            putchar(newline);
        }
        if (y > 1)
        {
            putchar('C');
            column++;
            while (column < x)
            {
                putchar('B');
                column++;
            }
            putchar('C');
            putchar(newline);
        }
    }
}

int main() {
    rush(5,1);
    return 0;
}