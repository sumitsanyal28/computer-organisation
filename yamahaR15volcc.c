/*VOLUME OF CYLINDER OF AN ENGINE*/
#include<stdio.h>
float pi=3.14;
int vol(float b,float s);
int main()
{
	float bore,stroke,volume;
	printf("Enter the bore and stroke dimensions in same unit");
	scanf("%f%f",&bore,&stroke);
	volume=vol( bore,stroke);
	printf("\nThe volume of cylinder is %f",volume);
	return(0);
}

int vol(float b,float s)
{
   float v;
   v=pi*b*s;
   return(v);	
}

