#include<stdio.h>
int main(){
int no,i,j,a[1000],occur[100];
scanf("%d",&no);
for(i=0;i<no;i++){
	scanf("%d",&a[i]);
	occur[i]=0;
}
for(i=0;i<no;i++)
for(j=0;j<no;j++)
{
	if(a[i]==a[j])
	{
		occur[i]++;
	}
}
for(i=0;i<no;i++)
{
	if(occur[i]==1)
	printf(" %d",a[i]);
}
return 0;
}
