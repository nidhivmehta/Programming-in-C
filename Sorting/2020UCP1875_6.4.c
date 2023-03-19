#include <stdio.h>
int main ()
{
	int m, n, i, j, a[100], b[100],c[200],k;
	
    printf ("enter total elements in array a");
	scanf ("%d", &m);
	
	printf ("enter elements for array a");
	for (i = 0; i < m; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	printf ("enter n");
	scanf ("%d", &n);
	
	printf ("enter elements for array b");
	for (j = 0; j < n; j++)
	{
	    scanf ("%d", &b[j]);
	}
	
	i=0;j=0;k=0;
	while(k<(m+n))
	{
	    while(i<m&&j<n)
		{
			if(a[i]>b[j])
			{
	    		c[k]=b[j];
				k++; j++;
	    
			}
			else
			{
			    c[k]=a[i];
			    k++; i++;
			}
	    }
	    while(i<m)
		{
			c[k]=a[i];
	    	i++; k++;
		}
	 	while(j<n)
		{
			c[k]=b[j];
		    j++; k++;
	 	}
	} 
	    printf("merging of two array is :");
	    for(k=0;k<m+n;k++)
		{
	        printf("%d ",c[k]);
	    }
return 0;

}
	
	
	

