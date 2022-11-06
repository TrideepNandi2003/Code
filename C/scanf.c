#include <stdio.h>

int main (void) 
{
    char str[100];
    int i;

    printf("Enter: ");
    scanf("%d%s", &i, str);
    printf("Entered: %d%s", i, str);

    return 0;

}