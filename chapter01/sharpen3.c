#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Assume name shorter than 20 chars. */
    char ex[20];
    puts("Enter boyfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're history.\n", ex);
    return 0;
}
