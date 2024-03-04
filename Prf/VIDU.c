#include <stdio.h>

void array()
{
	int i , m;
	int a[500] ;
	printf ("Nhap vao mot so bat ky : ");
	scanf ("%d",&m);
	for (i = 0 ; i <= m ; i++)
	{
		a[i] = i ; 
		printf ("a[%d] = %d\n",i,a[i]);
	}
}

int main ()
{
	
	array();
}
