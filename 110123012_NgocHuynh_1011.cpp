#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctypte.h>
#include<stdlib.h>

struct Sinhvien
{
	char masv[10];
	char hotensv[30];
	char phai[10];
	float diemtoan;
	float diemvan;
	float diemAV;
	float KQHT;
	char xeploai[20];
};
typedef struct Sinhvien SV;
void nhapsv(SV &x);
void nhapSVN(SV a[],int n);
void xuatsv(SV &x);
void xuatSVN(SV a[],int n);
void inds(SV a[], int n);

int main()
{
	int n, key;
	SV x, a[10];
	while(true)
	{
		system("cls");
		printf("************************************************\n");
		printf("**               CAU TRUC SINH VIEN           **\n");
		printf("**               1.Nhap sinh vien             **\n");
		printf("**               2. In DS tang dan theo KQHT  **\n");
		printf("************************************************\n");
		fflush(stdin);
		printf("\n \t \t AN PHIM CHON: ");
	}
}

