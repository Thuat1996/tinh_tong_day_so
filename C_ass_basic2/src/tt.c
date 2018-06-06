#include<stdio.h>
int tt()
{
	int n1;
	printf ("Nhap vao so n1= ");
	scanf (" %d", &n1 );
	int s =13;
	for(int i=2; i <= n1; i++)
		s = s+ i*10 + 3; 	
		printf("\nTong cua day tren la s = %d", s);
}