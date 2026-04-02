//21/10/2023
#include <cstdio>
int main()
{
    char strings[5][40];
     int i;
     for (i = 0; i < 5; i++)
     {
         printf("\n\nDigit uma frame ou palaver: ");
         gets(strings[i]);
     }
     printf("\n\nAs frames digitalis form as integuments: \n\n");
     for(i = 0; i < 5; i++)
         printf("%s\n",strings[i]);
     return (0);
}