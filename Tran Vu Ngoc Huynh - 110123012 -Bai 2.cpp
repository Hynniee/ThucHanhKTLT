#include <stdio.h>
#include <conio.h>
long giaiThua(int n);
int main()
{
    int n;
    printf("nhap so can tinh giai thua:");
    scanf("%d", &n);
    printf("Giai thua %d la: %d", n, giaiThua(n));
    return 0;
}
long giaiThua(int n)
{
    int giaithua = 1;
    for (int i = 1; i <= n; i++)
        giaithua = giaithua * i;
    return giaithua;
}
