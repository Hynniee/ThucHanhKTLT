#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chon1(int a[50][50]);
void nhapmang(int a[50][50],int m, int n);
void xuatmang(int a[50][50],int m, int n);
void sapxep(int a[50][50], int m, int n);
void chon2(int a[50][50]);
int main()
{ int a[50][50], m, n,key;
  
   while(true)
	{
        system("cls");
        printf("***********************************************************\n");
        printf("**           THAO TAC TREN CHUOI           	         **\n");
        printf("**         1. Nhap/xuat mang 2 chieu          	         **\n");
        printf("**         2. Sap xep mang tang dan           		 **\n");
        printf("**         3. Tinh tong cac phan tu la so nguyen         **\n");
        printf("**         0. Thoat                            		 **\n");
        printf("***********************************************************\n");
       fflush(stdin);
	    printf("\n   \t\t    AN PHIM CHON: ");
        scanf("%d",&key);
        switch(key)
			{
            case 1:
            	fflush(stdin);
    			chon1(a);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
               fflush(stdin);
				chon2(a);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
               fflush(stdin);
			 
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
                break;
        
            case 0:
                exit(1);
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }

}
void chon1(int a[50][50])
{
	int m,n;
	printf("Nhap so dong: ");scanf("%d",&m);
	printf("Nhap so cot: ");scanf("%d",&n);
	nhapmang(a,m,n);
	printf("\n Mang vua nhap la:\n");
	xuatmang(a,m,n);
}
void nhapmang(int a[50][50],int m, int n)
{
	for (int i =0; i<m;i++)
		for(int j=0;j<n;j++)
			{
				printf("Nhap phan tu thu a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
				
			}
}
void xuatmang(int a[50][50],int m, int n)
{
		for (int i =0; i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("\t%d\t",a[i][j]);
			}
		printf("\n");
		}
}
void chon2(int a[50][50])
{
	int m,n;
//	printf("Nhap so dong: ");scanf("%d",&m);
//	printf("Nhap so cot: ");scanf("%d",&n);
	sapxep(a,m,n);
}
void sapxep(int a[50][50], int m, int n)
{
	int k=m*n, tam;
	for (int i=0;i<k-1;i++)
		for(int j=i+1;j<k;j++)
			if(a[i/n][i%n]>a[j/n][j%n])
			{
				tam=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=tam;
			}
}

