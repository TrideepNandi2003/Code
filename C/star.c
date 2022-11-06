#include <stdio.h>

int main (void)
{ 
    int  rows;
   printf("Rows:");
   scanf("%d", &rows);

   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j<= rows-i-1; j++ )
       {
           printf("#");
       }
       printf("\n");
   }
}