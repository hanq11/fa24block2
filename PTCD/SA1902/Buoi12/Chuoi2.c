#include <stdio.h>

int main() {
    char chuoi[100] = "Hello FPT";
    // Cach1, khong tu xuong dong
    printf("%s", chuoi);
    // Cach 2, tu xuong dong
    puts(chuoi);

    // Nhap chuoi - scanf
    char chuoiMoi[50];
    printf("Vui long nhap 1 chuoi - scanf: ");
    scanf("%s", chuoiMoi);
    printf("%s \n", chuoiMoi);
    
    getchar();
    // Nhap chuoi -- gets
    char chuoiMoiHon[100];
    printf("Vui long nhap 1 chuoi - gets: ");
    gets(chuoiMoiHon);
    puts(chuoiMoiHon);
}