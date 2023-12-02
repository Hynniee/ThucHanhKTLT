#include <stdio.h>
#include <conio.h>
#include<math.h>
void nhapmang2c(int a[50][50],int m,int n);
void xuatmang2c(int a[50][50],int m,int n);
int lonnhat(int a[50][50],int m, int n);
int nhonhat(int a[50][50],int m, int n);
int timx(int a[50][50], int m, int n);
void sapxep(int a[50][50], int m, int n);
int tongduongcheo(int a[50][50], int m, int n);
int demsochanTGT(int a[50][50],int m, int n);
int timle(int a[50][50],int m, int n);
int max, min,x,dem=0;
int main()
{
	int a[50][50],m,n;
//1
	printf("nhap so dong= "); scanf("%d",&m);
	printf("nhap so cot= "); scanf("%d",&n);
	nhapmang2c(a,m,n);
	printf("ma tran vua nhap la:\n");
	xuatmang2c(a,m,n);
	lonnhat(a,m,n);
	printf("\nphan tu lon nhat la %d \n",max);
	nhonhat(a,m,n);
	printf("\nphan tu nho nhat la %d \n",min);	
	printf("nhap phan tu x:"); scanf("%d",&x);
	timx(a,m,n);
	tongduongcheo(a,m,n);
	demsochanTGT(a,m,n);
	timle(a,m,n);
	printf("ma tran sau khi sap xep la:");
	sapxep(a,m,n);
}
//2
void nhapmang2c(int a[50][50],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nnhap phan tu thu a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
}
//3
void xuatmang2c(int a[50][50],int m,int n)
{
	for(int i=0;i<m;i++)	
	{	
		for(int j=0;j<n;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
}
//4
int lonnhat(int a[50][50],int m, int n)
{
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>=max)
			max=a[i][j];
		}
	return max;
}
int nhonhat(int a[50][50],int m, int n)
{
	min=a[0][0];
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(min>=a[i][j])
				min=a[i][j];
		}
	return min;
}
//5 so nguyen to

//6
int timx(int a[50][50], int m, int n)
{
	for (int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		if(a[i][j]==x)	
			printf("phan tu trung voi x co vi tri la a[%d][%d]\n",i,j);

}
//7 yen ngua

//8.....
void sapxep(int a[50][50], int m, int n)
{
	int k=m*n, tam;
	for (int i=0; i<k-1;i++)
		for(int j=i+1; j<k;j++)
			if(a[i/n][i%n]>a[j/n][j%n])
				{
					tam=a[i/n][i%n];
					a[i/n][i%n]=a[j/n][j%n];
					a[j/n][j%n]=tam;
				}
}
//9
int tongduongcheo(int a[50][50], int m, int n)
{
	int sum=0;
	for (int i = 0; i < m; i++)
	 {
      for (int j = 0; j < n; j++) 
	  {
         if (i == j)
            sum = sum + a[i][j];
      }
   }
   printf("\nTong duong cheo chinh cua ma tran la: %d", sum);
}
//10
int demsochanTGT(int a[50][50],int m, int n)
{
	for (int i = 0; i < n-1; i++) 
      for (int j = i+1; j < n; j++) 
         if (a[i][j]%2==0 && i<j)
         	dem=dem+1;
	  printf("\nSo cac phan tu la so chan o tam giac tren cua ma tran la: %d\n", dem);
}
//11
int timle(int a[50][50],int m, int n)
{
	for (int i = 0; i < n; i++) 
      for (int j = 0; j < n; j++) 
               if (a[i][j]%2!=0 && i>=j)
     			 printf("So le o tam giac duoi la %d\n",a[i][j]);
}
//12 tinh tong, tich ma tran

		


		
