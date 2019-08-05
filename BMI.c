/*KNOW YOUR BODY MASS INDEX*/
/*BMI CALCULATION*/
#include<stdio.h>
int bmi(float,float);

int main()
{
	float weight,hft,hinch,inches,metre=0.0254,ft;
	printf("Enter your weight in kilograms");
	scanf("%f",&weight );
	
	
	printf("\nEnter your height in feet and inch\n\nFEET::INCHES::");
	scanf("%f",&hft);
	
//	printf("\tINCHES");
	scanf("%f",&hinch);
	
	inches=(12*hft)+hinch;
	
	metre=metre*inches;
	
	
	printf("\nYour height in inches is %finches and in metre is %fmetre.",inches,metre);
	ft=bmi(weight,metre);
	printf("\n\n\nYour BODY MASS INDEX is %f.",ft);
	
	
	if(ft==0)
	{
		printf("\n\nYou are weightless.");
	}
	else
	{
		if(ft>0 && ft<18.5)
		{
			printf("\n\n You are underweight.");
		}
		if(ft>=18.5 && ft<25)
		{
		printf("\n\nCONGRATS!Your weight is normal.\n\nYou are completely fit.");
	    }
	    if(ft>=25 && ft<=30)
	    {
	    	printf("\n\nYou are overweight.");
		}
		if(ft>30)
		{
			printf("\n\nSORRY!You are suffering from obesity.");
		}
	}
	return(0);
}

int bmi(float w,float h)
{
	float bmi;
	bmi=w/(h*h);
	return(bmi);
}














