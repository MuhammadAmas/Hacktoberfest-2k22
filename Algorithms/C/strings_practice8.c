// Write a program to count the occurence of a given character in a string.
#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Phaham";
    int count = occurence(st, 'h');
    printf("occurences = %d", count);
    return 0;
}