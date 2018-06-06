#include<stdio.h>
#include<tt.h>
#include<stdlib.h>
//1.	Tính S = 13 +23 + 33 + ……+ N3 
int main()
{
	tt();
	tt1();
	int n;
	printf ("\nnhap so luong phan tu cua mang n: "); scanf ("%d", &n); 
	//int a[n];
	int *a = (int *) malloc (n* sizeof (int));
	NhapMang(a, n); 
    MaxMin(a, n);
}

