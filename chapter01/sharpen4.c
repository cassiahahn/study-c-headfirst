#include <stdio.h>

int main(int argc, char const *argv[])
{
    char suit = 'Z';
    switch (suit)
    {
    case 'C':
        puts("Clubs");
        break;
    case 'D':
        puts("Diamonds");
        break;
    case 'H':
        puts("Hearts");
        break;
    default:
        puts("Spades");
    }
    return 0;
}
