#include<stdio.h>
int NhapMang(int a[], int n)
{
	for (int i =0; i < n; i++)
	{
		printf ("a[%d] = ", i); scanf ("%d", &a[i]);
	}
	printf ("mang vua nhap la: \n");
	for (int i = 0; i < n; i++)
	{
		printf ("\t%d\t", a[i]);
	}	
}

