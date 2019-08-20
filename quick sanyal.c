#include<stdio.h>
int split(int *,int,int);
void quicksort(int a[],int,int);
int main()
{
	int a[8],i,sort;
	printf("\nEnter the elements:");
	for(i=0;i<8;i++)
	{
		printf("\nEnter number %d",i+1);
		scanf("%d",&a[i]);	
	}
	 quicksort(a,0,7);
	 printf("\nThe elements are");
	 for(i=0;i<8;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
	 return(0);
		
}
void quicksort(int a[],int lower,int upper)
{
	int pos;
	if(upper>lower)
	{
	  pos=split(a,lower,upper);
	  quicksort(a,lower,pos-1);
	  quicksort(a,pos+1,upper);	
	}
	
}
int split(int a[],int low,int upp)
{
   int i,p,q,t;
   p=low+1;
   q=upp;
   i=a[low];
   while(q>=p)
   {
	while(a[p]<=i)
	p++;
	while (a[q]>i)
	q--;
	if(q>=p)
	{
		t=a[p];
		a[p]=a[q];
		a[q]=t;
	}
   }
       t=a[low];
	a[low]=a[q];
	a[q]=t;
	return (q);  
}





