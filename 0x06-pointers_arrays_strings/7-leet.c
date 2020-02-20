#include <stdio.h>
char *leet(char *str)
{
  char a[5] = {'4', '3', '0', '7', '1'};
  char b[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
  char bct = 0;
  char act = 0;
  char *c = str;
    
  while (bct < 5)
    {
      while (*str != '\0')
        {
	  if (*str == b[bct] ||
	      *str == b[bct + 1])
	    *str = a[act];
	  str++;      
        }
      str = c;
      bct = bct + 2;
      act++;
    }
  return (c);
}
