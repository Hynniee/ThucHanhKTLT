#include <stdio.h>
#include<math.h>
int i,n;
int KTNT(int x);
int TONGNT(int y);

int KTNT(int x)
{
	int h=0;
		for(int i=1;i <= n;i++)
	 		if(n%i==0)
	 			h++;
		if(h==2)
			return 1;
		return 0;
}
int TONGNT(int y)
{
	int i,tong=0;
	for (i=1;i<=n;i++)
			if(KTNT(i)==1);
				tong=tong+i;
	return tong;
}
int main()
{
	do
	{
	printf("nhap so nguyen n:");
	scanf("%d",&n);
	}
	while(n<0 || n>20);
	if(KTNT(i)==1)
		printf("%d la so nguyen to",n);
	else printf("%d khong la so nguyen to",n);
	TONGNT(n);
	printf("tong la %d", TONGNT(n));
}
