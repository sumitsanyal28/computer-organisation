#include<stdio.h>
#include<string.h>
int main()
{
	char z[40];
	char x[]={83,85,66,72,65};
	char y[]={78,65,66,65,66,65,82,83,72,65};
	int i,j,k,sp=9,len;
	printf("Please enter your good name:");
	gets(z);
	len=strlen(z);
	printf("\n\n\n\n\n\n");
	for(i=0;i<5;i++)
	{                               
		for(j=0;j<=i;j++)
		
		{
			printf("  %c",x[j]);
		}
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
		for(k=0;k<=sp;k++)
		{
			printf(" ");
		}
		sp=sp-1;
		for(j=0;j<=i;j++)
		{
			printf("        %c",y[j]);
		}
		printf("\n");    
	
	
    }
    printf("                                                                                                 ");
	for(i=0;i<=len;i++)
	{
	printf("%c",z[i]);
    
    }
    printf("sir");
	return(0);
}



