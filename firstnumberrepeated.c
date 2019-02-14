#include <stdio.h>

int main()
{
	int arr[40];
	int i,j,n;
	int ind,ele;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	ind=-1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				ele=arr[j];
				ind=j;
				break;
			}				
		}
		if(ind != -1)
			break;
	}
	if(ind!=-1)
		printf("%d",ele);
	else
		printf("unique");
    return 0;
}
