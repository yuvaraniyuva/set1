#include<stdio.h>
int main(){
int n,i,j,a[1000],occur[100];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	occur[i]=0;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
	if(a[i]==a[j])
	{
		occur[i]++;
	}
}
for(i=0;i<n;i++)
{
	if(occur[i]==1)
	printf(" %d",a[i]);
}
return 0;
}
