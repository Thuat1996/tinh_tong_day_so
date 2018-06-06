#include<stdio.h>
int MaxMin( int a[], int n)
{
	int max, min;
	max = a[0]; min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf ("\ngia tri lon nhat cua mang la: %d", max);
	printf ("\ngia tri nho nhat cua mang la: %d", min);
}
