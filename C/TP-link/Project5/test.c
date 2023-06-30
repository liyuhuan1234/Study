#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = {6,2,8,0,3,9,7,4,1,5};
	int arr1[10]={0};
	int arr2[10]={0};
	int i = 0;
	int k = 0;
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > 3)
		{
			arr1[k++] = arr[i];
		}
		else if(arr[i]<3)
		{
			arr2[n++] = arr[i];
		}
	}
	int j = 0;
	for (i = 0; i <k; i++)
	{
		for (j = 0; j < k -1- i; j++)
		{
			if (arr1[j+1] > arr1[j])
			{
				int tmp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = tmp;
			}
		}
	}
	for (i = 0; i <k; i++)
	{
		arr[i] = arr1[i];
	}
	arr[i] = 3;
	++i;
	for (k = 0; k < n; k++)
	{
		arr[i++] = arr2[k];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}