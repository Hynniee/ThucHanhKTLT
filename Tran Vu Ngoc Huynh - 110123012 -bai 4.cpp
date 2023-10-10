#include <stdio.h>
#include <conio.h>
int tinhdtHCN(int x,int y);
int main()
{
    int a,b,dt;
    printf("\n nhap chieu dai:");
    scanf("%d", &a);
    printf("nhap chieu rong:");
    scanf("%d", &b);
    dt=tinhdtHCN(a,b);
    printf("dien tich HCN la: %d \n", dt);
}

int tinhdtHCN(int x,int y)
{
    int tinhdt;
	 tinhdt=x*y;
    return tinhdt;
}
