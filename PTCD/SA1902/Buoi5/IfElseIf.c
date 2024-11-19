#include <stdio.h>

int main() {
    printf("Vui long nhap vao diem cua ban: ");
    int diem = 0;
    scanf("%d", &diem);

    if(diem >= 9) {
        printf("Xuat xac");
    } else if(9 > diem && diem >= 8) {
        printf("Gioi");
    } else if(8 > diem && diem >= 5) {
        printf("Kha");
    } else {
        printf("Yeu");
    }
}