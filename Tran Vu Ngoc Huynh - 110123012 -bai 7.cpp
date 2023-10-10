#include <stdio.h>
#include <conio.h>
void hoanvi(int *x,int *y);
int main()
{
    int a,b,dt;
    printf("\nnhap a:");
    scanf("%d", &a);
    printf("nhap b:");
    scanf("%d", &b);
    hoanvi(&a,&b);
    printf("gia tri hoan vi a: %d",a);
    printf("\ngia tri hoan vi b: %d",b);
}

void hoanvi(int *x,int *y)
{
    int tam;
	 tam=*x ;  *x=*y;  *y=tam;
}
