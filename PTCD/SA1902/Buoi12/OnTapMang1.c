#include <stdio.h>

int main() {
    float luong[4];

    int i;
    // Vong for nhap vao cac phan tu trong mang
    for(i = 0; i < 4; i++) {
        printf("Vui long nhap luong thu %d: ", i + 1);
        scanf("%f", &luong[i]);
    }

    // Vong for in ra cac phan tu trong mang
    int j;
    for(j = 0; j < 4; j++) {
        printf("Phan tu thu %d co gia tri la: %f \n", j + 1, luong[j]);
    }
}