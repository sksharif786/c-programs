#include <stdio.h>
 #include <conio.h>

  
 
int main()
{
    int a[10000],b[10000],i,j,n,c=0 ;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    //logic
  for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		       }
	       }
	       b[i]=c;
		}
    }
     
        
         
 for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	printf("no of %d is %d \n",a[i],b[i]);

		} 
         
    }    
    return 0;
} 
