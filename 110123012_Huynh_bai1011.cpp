#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void nhap(char s[50]);
int xoa(char s[90], int vitri);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demkt(char s[50]);
int main()
{
	char s[50],key;
	while(true)
	{
		system("cls");
		printf("*********************************************\n");
		printf("**           THAO TAC TREN CHUOI           **\n");
		printf("**        1. Nhap va chuan hoa chuoi       **\n");
		printf("**        2. Dem ki tu                     **\n");
		printf("**        0. Thoat                         **\n");
		printf("*********************************************\n");
		fflush(stdin);
		printf("\n \t \t AN PHIM CHON: "); scanf("%d",&key);
		switch(key)
		{
			case 1:
				fflush(stdin);
				nhap(s);
				printf("\nAn phim bat ki de tiep tuc!");
				getch();
				break;
			case 2:
				fflush(stdin);
				demkt(s);
				printf("\nAn phim bat ki de tiep tuc!");
				getch();
				break;
			case 0:
				exit(1);
			default:
				printf("\nKhong co chuc nang nay");
				printf("\nAn phim bat ki de tiep tuc!");
				getch();
				break;
		}
	}
}
void nhap(char s[50])
{
	printf("\nNhap chuoi :");
	gets(s);
	chuanhoa(s);
	printf("\n Chuoi da chuan hoa: ");puts(s);
}
int xoa(char s[50], int vitri)
{
	int n=strlen(s);
	for( int i=vitri;i<n;i++)
		s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&&s[i+1]==' ')
			{
				xoa(s,i);
				i--;
			}
		if(s[0]==' ')
			xoa(s,0);
		if(s[strlen(s)-1]==' ')
			xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0; i<strlen(s);i++)
		{
			if(s[i]==' '&&s[i+1]!=' ')
				s[i+1]=s[i+1]-32;
		}
}
int demkt(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n Nhap mot ki tu: "); scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
			demkytu++;
	}
	printf("\nSo ky tu co trong chuoi la: %d",demkytu);
}
