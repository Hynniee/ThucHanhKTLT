#include<stdio.h>
#include<math.h>
void nhapmang(int a[5][5], int m, int n);
void xuatmang(int a[5][5], int m, int n);
bool kt(int a);
int DemSNT(int a[5][5],int m, int n);
void tong(int a[5][5],int m, int n);
void sapxep(int a[5][5], int m, int n);
int main()
{
	int a[5][5],n,m,max=0,min=0,sum=0,dem=0,tongle=0;
	printf("nhap so dong ");scanf("%d",&m);
	printf("nhap so cot ");scanf("%d",&n);
	nhapmang(a,m,n);
	printf("\nmang vua nhap la\n");
	xuatmang(a,m,n);
		for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>=max)
			max=a[i][j];
		}
	printf("\nphan tu lon nhat la %d \n",max);
			for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			min=a[i][j];
		}
	printf("phan tu nho nhat la %d \n",min);
	printf("mang co %d so nguyen to\n",DemSNT(a, m, n));
	tong(a,m,n);
	int x;
	printf("nhap phan tu x:"); scanf("%d",&x);
	for (int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		if(a[i][j]==x)	
			printf("phan tu trung voi x co vi tri la a[%d][%d]\n",i,j);
		//7
		//8
	for (int i = 0; i < m; i++) 
	{
      for (int j = 0; j < n; j++)
	   {
         if (i == j)
            sum = sum + a[i][j];
       }
   }
   printf("\nTong duong cheo chinh cua ma tran la: %d", sum);
   for (int i = 0; i < n-1; i++) 
      for (int j = i+1; j < n; j++) 
         if (a[i][j]%2==0 && i<j)
         	dem=dem+1;
	  printf("\nSo cac phan tu la so chan o tam giac tren cua ma tran la: %d\n", dem);
	  printf("so le cua tam giac duoi la:\n");
	for (int i = 0; i < n; i++) 
      for (int j = 0; j < n; j++) 
         if (a[i][j]%2!=0 && i>=j)
         	printf("%d\t",a[i][j]);
	  //12	
}
void nhapmang(int a[5][5], int m, int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nnhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
}
void xuatmang(int a[5][5], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		printf("\n");
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
}
bool kt(int a)
{
	if(a<2) return false;
	for(int i=2;i<=sqrt(a);++i)
	{
		if(a%i==0) return false;
	}
	return true;
}
int DemSNT(int a[5][5],int m,int n)
{
	int h=0;
		for(int i=0;i <m;i++)
		for(int j=0;j<n;j++)
	{
	 		if(kt(a[i][j]))
	 			h++;
	}
	return h;
}
void tong(int a[5][5],int m, int n)
{
	int tong=0;
	for(int i=0;i <m;i++)
		for(int j=0;j<n;j++)
			tong=tong+a[i][j];
	printf("\ntong cac phan tu trong ma tran la %d\n",tong);
}

