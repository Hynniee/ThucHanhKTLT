#include <stdio.h>
#include<conio.h>
#include<math.h>
int kiemtraSNT(int x);
int n;
int main()
{
	printf("nhap so nguyen n:"); scanf("%d",&n);
	kiemtraSNT(n);

}

int kiemtraSNT(int x)
	{
	int h=0;
		for(int i=1;i <= n;i++)
	 		if(n%i==0)
	 			h++;
		if(h==2)
			printf("1\n");
		else
			printf("0\n");
	}
