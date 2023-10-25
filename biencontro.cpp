#include<stdio.h>
int sapxep(int a[],int n);
int xoaphantu(int a[],int n, int x);
int n,c;
int main()
{
	int a[100],max=0,i,tich=1,tam,j,h,k;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			printf("nhap phan tu thu %d=",i);
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for (i=0;i<n;i++)
		{
			if(a[i]>=max)
			max=a[i];
		}
	printf("\nphan tu lon nhat la %d \n",max);
	for (i=0;i<n;i++)
		tich=tich*a[i];
	printf("tich cac phan tu trong mang la %d\n",tich);
	//6
	int x;
	printf("nhap phan tu x:"); scanf("%d",&x);
	for (i=0;i<n;i++)
	{
		if(a[i]==x)
			printf("phan tu trung voi x co vi tri la %d\n",i);
		else
		printf("gia tri a[%d] khong bang x\n",i);
	}
	sapxep(a,n);
	printf("vi tri cac phan tang dan la\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\ngia tri x can chen la:"); scanf("%d",&h);
	printf("vi tri can chen la:"); scanf("%d",&k);
	for(i=n-1;i>=k;i--)
		a[i+1]=a[i];
	a[k]=h;
	++n;
	printf("mang sau khi chen la:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\ngia tri can xoa la:"); scanf("%d",&c);
	xoaphantu(a,n,c);
	printf("mang sau khi xoa la:");

} 
int sapxep(int a[], int n)
{
	int tam=0;
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (a[i]>a[j])
				{
					tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
}
/*int xoaphantu(int a[],int n,int x)
{
	int c,i,j;
	for(i=0,i<n,i++)
		if(a[i]=c)
		{
			for(int j=i,j<n;j++)
			a[j]=a[j+1];
		n--;
		i--;
		}
}
*/
