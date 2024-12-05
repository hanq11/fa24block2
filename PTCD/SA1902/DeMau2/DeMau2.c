#include <stdio.h>

int main() {
    printf("+--------------------------Menu------------------------+\n");
    printf("1. Thông tin cá nhân\n");
    printf("2. Tính tổng từ 1 đến N\n");
    printf("3. Thông tin Ti vi\n");
    printf("0.Thoát\n");
    printf("+--------------------------------------------------------+\n");

    int luaChon = 1;

    while(luaChon != 0) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();

        switch(luaChon) {
            case 1: {
                // Họ Tên, Mã Số SV, Điểm.
                char hoTen[50];
                char mssv[50];
                int diem;

                printf("Vui long nhap vao hoTen: ");
                gets(hoTen);
                printf("Vui long nhap vao mssv: ");
                gets(mssv);
                printf("Vui long nhap vao diem: ");
                scanf("%d", &diem);
                getchar();

                printf("hoTen cua ban la: %s \n", hoTen);
                printf("mssv cua ban la: %s \n", mssv);
                printf("diem cua ban la: %d \n", diem);
                break;
            }
            case 2: {
                int n = 0;
                printf("Vui long nhap vao N: ");
                scanf("%d", &n);
                int i, tong = 0;
                for(i = 1; i <= n; i++) {
                    tong += i;
                }
                printf("Ket qua la: %d \n", tong);
                if(n % 2 == 0) {
                    printf("So vua nhap la so chan \n");
                } else {
                    printf("So vua nhap la so le \n");
                }
                break;
            }
            case 3: {
                int soLuongTV;
                printf("Moi nhap so luong TV: ");
                scanf("%d", &soLuongTV);
                int mangKichCo[soLuongTV];
                int i;
                for(i = 0; i < soLuongTV; i++) {
                    printf("Vui long nhap vao kich co TV so %d: ", i + 1);
                    scanf("%d", &mangKichCo[i]);
                }
                printf("So luong TV la: %d \n", soLuongTV);
                
                int tong = 0;
                for(i = 0; i < soLuongTV; i++) {
                    tong += mangKichCo[i];
                }

                printf("Kich co trung binh la: %f \n", (float) tong / soLuongTV);

                int viTriMax = 0;
                int max = mangKichCo[0];
                for(i = 0; i < soLuongTV; i++) {
                    if(max < mangKichCo[i]) {
                        max = mangKichCo[i];
                        viTriMax = i;
                    }
                }
                printf("Vi tri cua TV co kich co lon nhat la: %d \n", viTriMax + 1);
            }
        }
    }
}