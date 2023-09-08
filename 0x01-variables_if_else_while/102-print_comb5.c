#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void) {
    for (int i = 0; i < 100; i++) {
        int first_num = i / 10;
        int second_num = i % 10;

        for (int j = 0; j < 100; j++) {
            int third_num = j / 10;
            int fourth_num = j % 10;

            if ((first_num < third_num) || (first_num == third_num && second_num < fourth_num)) {
                putchar(first_num / 10 + '0');
                putchar(first_num % 10 + '0');
                putchar(' ');
                putchar(second_num / 10 + '0');
                putchar(second_num % 10 + '0');
                putchar(',');
                putchar(' ');
                putchar(third_num / 10 + '0');
                putchar(third_num % 10 + '0');
                putchar(' ');
                putchar(fourth_num / 10 + '0');
                putchar(fourth_num % 10 + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }
      return 0;
}
