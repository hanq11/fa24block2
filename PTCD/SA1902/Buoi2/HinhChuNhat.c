#include <stdio.h>

int main() {
    int chieuDai = 0;
    int chieuRong = 0;
    printf("Vui long nhap vao Chieu dai: ");
    scanf("%d", &chieuDai);
    printf("Vui long nhap vao Chieu rong: ");
    scanf("%d", &chieuRong);
    // Cach 1
    int chuVi = (chieuDai + chieuRong) * 2;
    printf("Chu vi hinh chu nhat la: %d \n", chuVi);
    // Cach 2
    printf("Dien tich hinh chu nhat la: %d", chieuDai * chieuRong);
}