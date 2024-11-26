#include <stdio.h>

// Khong co tham so truyen vao, khong co kieu tra ve
void tinhChuVi() {
    float banKinh;
    printf("Vui long nhap ban kinh: ");
    scanf("%f", &banKinh);
    printf("Chu vi hinh tron la: %f \n", 2 * 3.14 * banKinh);
}
// Co tham so truyen vao, khong co kieu tra ve
void tinhCong(int x, int y) {
    printf("Ket qua la: %d \n", x + y);
}
// Co tham so truyen, co kieu tra ve
int tinhCong2(int x, int y) {
    return x + y;
}
// Khong co so truyen vao, co kieu tra ve
int tinhCong3() {
    int a, b;
    printf("Vui long nhap vao so a: ");
    scanf("%d", &a);
    printf("Vui long nhap vao so b: ");
    scanf("%d", &b);
    return a + b;
}

int main(){
    printf("Menu: \n");
    printf("1. Nhap ban kinh, tinh dien tich hinh tron \n");
    printf("2. Nhap ban kinh, tinh chu vi hinh tron \n");
    printf("4. Tinh cong. Co tham so truyen vao, khong co kieu tra ve\n");
    printf("5. Tinh cong. Co tham so truyen, co kieu tra ve\n");
    printf("6. Tinh cong. Khong co tham so truyen vao, co kieu tra ve\n");
    printf("3. Thoat \n");

    int luaChon = 0;
    while(luaChon != 3) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
            case 1: {
                float banKinh;
                printf("Vui long nhap ban kinh: ");
                scanf("%f", &banKinh);
                printf("Dien tich hinh tron la: %f \n", banKinh * banKinh * 3.14);
                break;
            }
            case 2: {
                // Ham khong co tham so truyen vao, khong co kieu tra ve
                tinhChuVi();
                break;
            }
            case 4: {
                int a, b;
                printf("Vui long nhap vao so a: ");
                scanf("%d", &a);
                printf("Vui long nhap vao so b: ");
                scanf("%d", &b);
                tinhCong(a, b);
                break;
            }
            case 5: {
                int a, b, tong;
                printf("Vui long nhap vao so a: ");
                scanf("%d", &a);
                printf("Vui long nhap vao so b: ");
                scanf("%d", &b);
                tong = tinhCong2(a, b);
                printf("Ket qua la: %d \n", tong);
                printf("2. Ket qua la: %d \n", tinhCong2(a, b));
                break;
            }
            case 6: {
                printf("Ket qua la: %d \n", tinhCong3());
            }
            case 3: {
                printf("Thoat");
                break;
            }
        }
    }
}