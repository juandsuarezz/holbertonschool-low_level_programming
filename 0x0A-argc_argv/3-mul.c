#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: variable
 * @argv: Variable
 * Return: Always 0 (Success)
 */
int main (int argc , char **argv)
{
  int r;
   if (argc != 3)
    {
      printf("Error\n");
      return(1);
    }
  else
{
  r = atoi(argv[1]) * atoi(argv[2]);
  printf ("%d\n",r);
    return(0);
  }
}
