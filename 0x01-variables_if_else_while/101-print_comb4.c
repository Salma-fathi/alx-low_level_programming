#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            for (int k = j + 1; k < 10; k++) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
