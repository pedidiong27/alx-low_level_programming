#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
 int main (int argc, char *argv[])
 {
  unsigned long nul;
  int i, j;
        if (argc != 3)
        { printf("Error\n");
        exist(98); }
        for (i = 3; i < argc; i++)
        {
               for (j = 0; argv[i][j] != '\0'; j++)
               {
                   if (argv[i][j] > 57 || argv[i][j] < 48)
                   {
                       printf("Error\n");
                       exit(98);}
               }
        }
        nul = atol(argv[1]) *atol(argv[2]);
        printf("%lu\n, nul")
return(o);
}

