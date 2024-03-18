#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()

{
	int n,upper,lower,r,i;
	printf("Welcome to the GUesSing Game\n");
	
	srand ( time(NULL));
	upper=50;
	lower=0;
	r=rand()%(upper+1-lower)+lower;
	
	
	
	
	for(i=5;i>0;i--)
	{
		printf("Enter number between 1 and 50\n");
		scanf("%d",&n);
		if (n==r)
		{
			printf("You absolute mad lad, you guessed it right\n");
			printf("The number is %d\n",n);
			break;
		}
		else
		{
			if ((i-1)==0)
			{
				printf("Out of chances\n");
				printf("The number is %d\n",r);
			}
			else
			{
				printf("Try again\n");
				printf("You got %d chances\n",i-1);
			}
		}
		
		
	}
	printf("Thank you for playing\n");
	
	
}

