#include <stdio.h>
#include<math.h>
int n;
int KTNT(int x);
int TONGNT(int a[],int x);
int main()
{
	do
	{
	printf("nhap so nguyen n:");
	scanf("%d",&n);
	}
	while(n<0 || n>20);
	KTNT(n);
}
int KTNT(int x)
{
	int h=0;
		for(int i=1;i <= n;i++)
	 		if(n%i==0)
	 			h++;
		if(h==2)
			printf("n la so nguyen to\n");
		else
			printf("n khong la so nguyen to\n");
}

