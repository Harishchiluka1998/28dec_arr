#include<stdio.h>
#define N 5
void sum(int arr[])
{
	int sum=0;
	for(int i=0;i<N;i++)
	{

		sum=sum+arr[i];
	}
	printf("sum of all array %d",sum);
}
void sec(int arr[])
{
	int min,max,sec=0;
	min=max=sec=arr[0];
	for(int i=1;i<N;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	for(int j=0;j<N;j++)
	{
		if((arr[j]>=sec)&&(arr[j]<max))
			sec=arr[j];

	}
	printf("sec:  %d",sec);
}

void minmax(int arr[])
{
	int min,max,sec=0;
	min=max=sec=arr[0];
	for(int i=1;i<N;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];

	}
	printf("min : %d,max :%d",min,max);
}
void countneg(int arr[])
{
	int cnt=0;
	for(int i=0;i<N;i++)
	{
		if(arr[i]<0)
			cnt++;
	}

	printf("count neg arr elements : %d",cnt);
}
void cpyarr(int arr[])
{
	int arr1[N];
	for(int i=0;i<N;i++)
	{
		arr1[i]=arr[i];
	}
	printf("after coping arr1 elements are :");
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr1[i]);
	}
}
void cnteach(int arr[])
{
	int freq[N],i,j,count=0;
	for(i=0; i<N; i++)
	{
		count = 1;
		for(j=i+1; j<N; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j] = 0;
			}
		}
		if(freq[i] != 0)
		{
			freq[i] = count;
		}
	}
	printf("\nFrequency of all elements of array : \n");
	for(i=0; i<N; i++)
	{
		if(freq[i] != 0)
		{
			printf("%d occurs %d times\n", arr[i], freq[i]);
		}
	}
	return 0;
}

void printuniq(int arr[])
{
	for(int i=0;i<N;i++)
	{
		for(int j=1;j<N;j++)
		{
			if(arr[i]!=arr[j])
				printf("%d",arr[i]);

		}
	}

}
void delet(int arr[])
{
int i,j,k,size=N;
	for ( i = 0; i < size; i ++)  
	{  
		for ( j = i + 1; j < size; j++)  
		{  

			if ( arr[i] == arr[j])  
			{  

				for ( k = j; k < size - 1; k++)  
				{  
					arr[k] = arr [k + 1];  
				}  

				size--;  
				j--;      
			}  
		}  
	}  

	printf (" \n Array elements after deletion of the duplicate elements: ");  

	for ( i = 0; i < size; i++)  
	{  
		printf (" %d \t", arr[i]);  
	}  
	return 0;  
}

