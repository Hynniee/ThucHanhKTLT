#include <stdio.h>
#include<conio.h>
int a,b;
int timUSCLN(int x, int y);
int main()
{
	printf("nhap so nguyen a:"); scanf("%d",&a);
	printf("nhap so nguyen b:"); scanf("%d",&b);
	timUSCLN(a,b);
}

int timUSCLN(int x, int y)
	{
		for( int i=a;i>1;i--)
			if(a%i==0 && b%i==0)
				printf("uoc chung lon nhat la:%d",i);
	}
	
