#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);
void ghep(char s[50], char s2[50]);
void demchuoi(char s[50],char s2[50]);
int main()
{
    char s[50], s2[50];
    printf("\n Nhap chuoi:");
    gets(s);
    //xoakt(s);
    chuanhoa(s);
    printf("\n Chuoi chuan hoa:");
	puts(s);
	demtu(s);
	demkt(s);
	ghep(s,s2);
	demchuoi(s,s2);
	getch();
}
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
int  xoakt(char s[50])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
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
{ int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' '&& s[i+1]!=' ')
		    s[i+1]=s[i+1]-32;
		}
}

int demtu(char s[50])
{ int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' ')
		     demtu++;
		}
		printf("\n so tu %d",demtu);
}
int demkt(char s[50])
{ int demkytu=0;
  char c,c1;
	printf("\n Nhap mot ky tu:= ");
	scanf("%c",&c);
		fflush(stdin);
  	strupr(s);
    for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==toupper(c))
		     demkytu++;
		}
		printf("\n So ky tu %d",demkytu);
}

void ghep(char s[50], char s2[50])
{
  int i, j, size, size1, size2;
    fflush(stdin);
	printf("\n Nhap chuoi S2:");
    gets(s2); 
    chuanhoa(s2);
   size1 = strlen(s);
   size2 = strlen(s2);
   size = size1 + size2;
   j=0; 

   for(i = size1; i<size; i++ )
    {
      s[i] = s2[j];
      		j++;
   }
        s[i] = '\0';
   printf("\nKet qua sau khi noi chuoi la:\n");
   printf("%s", s);
}
void demchuoi(char s[50],char s2[50])
 {    int i,j,ok=1,dem=0;
           fflush(stdin);
          printf("\n chuoi S2: %s ",s2);
  //          gets(s2);
           
		   for(i=0; i<strlen(s); i++)
			 {   if(s[i] == s2[0]) 
			 		{ ok = 1;
                         for(j=0; j<strlen(s2); j++)
						  {
                               if(s2[j] != s[i+j])
							    {  ok = 0;
                                      break;
                                 }
                         }
                     if(ok == 1)
                        dem++;
                     }
             }
             printf("\n So chuoi s2 co trong s1 la: %d",dem);
}
