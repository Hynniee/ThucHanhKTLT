#include <stdio.h>
#include <conio.h>
int tinhtong(int x,int y);
int main()
{
    int a,b,tong;
    printf("nhap so a:");
    scanf("%d", &a);
    printf("nhap so b:");
    scanf("%d", &b);
    tong=tinhtong(a,b);
    printf("tong la: %d \n", tong);
}

int tinhtong(int x,int y)
{
    int tinhtong;
	 tinhtong=x+y;
    return tinhtong;
}
