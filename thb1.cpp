#include<stdio.h>;
void nhap(int a[], int n)
{
	printf("Nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++)
		{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
}
void xuat(int a[], int n)
{
	printf("Cac phan tu cua mang la:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void timX(int a[], int n, int x)
{
	int dem = 0;
	printf("Cac vi tri cua X trong mang la:");
	for(int i=0;i<n;i++)
		if(a[i]==x)
		{
			printf("%d",i);
			dem++;
		}
	if(dem==0)
	printf("\nKhong tim thay phan tu X");
	else
	printf("\nSo lan %d xuat hien trong mang la: %d\t",x,dem);
}
int main()
{
	int n,a[10],x;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	printf("Nhap phan tu X can tim:");
	scanf("%d",&x);
	timX(a,n,x);
}
