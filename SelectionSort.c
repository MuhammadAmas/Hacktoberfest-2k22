#include<stdio.h>
#include<conio.h>
void input(int a[5],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}

void output(int a[5],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("the element %d is = %d\n",i,a[i]);
	}
}
void selection_sort(int a[5], int n)
{
    int i,j,temp,min;
     for(i=0;i<n-1;i++)
     {
		min=i;
         for(j=i+1;j<n;j++)
         {
             if(a[j]<a[min])
             {
                 min=j;
             }
         }
		 if(min!=i)
		 {
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		 }
     }
}
             
int main()
{l
	int a[5],n;
	printf("size of array element\n");
	scanf("%d",&n);
	printf("enter array's element\n");
	input(a,n);
	selection_sort(a,n);
	output(a,n);
	return 0;
}
