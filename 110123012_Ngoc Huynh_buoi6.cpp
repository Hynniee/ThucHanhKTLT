#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct SinhVien
{
	char Masv[10];
	char HotenSv[30];
	int Namsinh;
	char Phai[10];
	char Nganhhoc[30];
	float KQCuoikhoa;
	char Xeploai[30];
	char Quequan[30];
};
typedef struct SinhVien SV;
void TimSV(SV a[], int n);
void InDSGioi(SV a[], int n);
void Sapxep(SV a[], int n);
void NhapSV(SV &x);
void NhapSVN(SV a[], int n);
void XuatSV(SV);
void XuatSVN(SV a[], int n);

int main()
{
	int n, key;
	SV x, a[10];
	while(true)
	{
		system("cls");
		printf("**************************************************************\n");
		printf("**		    1.Nhap DS Sinh Vien  		    **\n");
		printf("**	            2.In DS Sinh Vien  	 	            **\n");
		printf("**		    3.Sap xep theo KQ cuoi khoa             **\n");
		printf("**	            4.In SV Gioi, xuat sac                  **\n");
		printf("**		    5.Tim kiem Sv theo MaSV                 **\n");
		printf("**		    0.Thoat                                 **\n");
		printf("**************************************************************\n");
		printf("\n \t\t AN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
		{
			case 1:
				do
				{
					printf("\nNHAP SO LUONG SINH VIEN: "); scanf("%d",&n);
				} while(n <= 0);
			//	NhapSVN(a,n);
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
			case 2:
			//	XuatSVN(a,n);
				printf("\n Bam phim bat ki de tiep tuc!");
				getch();
				break;
			case 3:
			//	Sapxep(a,n);
			//	XuatSVN(a,n);
				getch();
				break;
			case 4:
				printf("\n Bam phim bat ki de tiep tuc!");
			//	InDSGioi(a,n);
				getch();
				break;
			case 5:
				printf("\n bam phim bat ki de tiep tuc!");
		//		TimSV(a,n);
				getch();
				break;
			case 0:
				exit(1);
			default:
				printf("\n khong co chuc nang nay!");
				printf("\n bam phim bat ki de tiep tuc!");
				getch();
				break;
		}
	}
	
}
