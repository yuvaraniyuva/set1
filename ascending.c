#include <stdio.h>

int main(void) {
	int i,a[i],j,k,count=0;
	scanf("%d",&i);
	for(j=0;j<=i;j++)
	{
	scanf("%d",&a[j]);
	}
	for(j=0; j<=i; j++)
   {
    for(k=j+1;k<=i;k++)
    {
    if(a[j]==a[k])
    {
    printf("%d ",a[j]);
    count=count+1;
    }}}
    ascending(a,count);
    
return 0;
}void ascending(int a[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (a[j] > a[k])
         {
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
         }
      }
   }

 printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", a[i]);
}
