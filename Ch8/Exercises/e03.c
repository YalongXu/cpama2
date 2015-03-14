/* Write a declaration of an array named weekend containing seven bool values. Include an initializer that makes the first and last values true; all other values should be false.
 */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool weekend[] = { [0] = true, [6] = true };
    int i;

    for (i = 0; i < 7; i++)
        printf("\nDay %d: Weekend %d", i + 1, weekend[i]);
    printf("\n");

    return 0;
}
