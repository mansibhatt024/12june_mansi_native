// number is odd or even
#include<stdio.h>
int main()
{
	int a,i;
	i=1;
	printf("\n1.odd\n2.even");
	printf("\nenter your choice");
	scanf("%d", &a);
	
	switch(a)
	{
	 case 1:
	 	while(i<=10)
	 	{
		 if
	 	    (i%2!=0)
	       {
	       	printf("%d\n",i);}
	       	i--;
			   
	       }
	       break;
	 case 2:
	    while(i<=10)
	    {
	    	if
	    	(i%2==0)
	    	{
	    	printf("%d\n",i);}
	    	i--;
			
		}
		   break;
		       
	}
	
        
        
	
}
