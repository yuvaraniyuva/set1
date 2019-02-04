#include <stdio.h>
    void main ()
    {
int number[30];
int i, j, a, no;
scanf("%d", &n);
for (i = 0; i < no; ++i)
scanf("%d", &number[i]);
 for (i = 0; i < no; ++i) 
{
  for (j = i + 1; j < no; ++j) 
        {
         if (number[i] < number[j]) 
            {
               a = number[i];
               number[i] = number[j];
               number[j] = a;
                }
            }
        }
 for (i = 0; i < n0; ++i) 
        {
            printf("%d", number[i]);
        }
 
    }
