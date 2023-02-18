#include <stdio.h>

int main(void)
{
    int tens;
    int ones;
    int t;
    int o;
    int first_pair = 1;

    for (tens = 0; tens < 100; tens++) {
        for (ones = tens + 1; ones < 100; ones++) {
            t = ones % 10;
            o = tens % 10;
            tens /= 10;
            ones /= 10;
            putchar('0' + tens);
            putchar('0' + ones);
            putchar(' ');
            putchar('0' + o);
            putchar('0' + t);

            if (first_pair) {
                first_pair = 0;
            } else {
                putchar(',');
                putchar(' ');
            }
            tens *= 10;
            ones *= 10;
            tens += o;
            ones += t;
        }
    }
    putchar('\n');
    return 0;
}
