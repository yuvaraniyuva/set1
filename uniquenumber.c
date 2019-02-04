#include <stdio.h>
void main()
{
    int arr1[100], n,ctr=0;
    int i, j, k; 
	
	

       scanf("%d",&n);
   
      
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        ctr=0;
		

        for(j=0; j<i-1; j++)
        {
           
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }
       
       for(k=i+1; k<n; k++)
        {
            
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }
        }

       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
