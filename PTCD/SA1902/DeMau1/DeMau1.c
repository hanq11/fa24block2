#include <stdio.h>

int main() {
    printf("+--------------------------Menu------------------------+ \n");
    printf("1. Nhập thông tin cá nhân \n");
    printf("2. Tính tổng  \n");
    printf("3. Thông tin sinh viên các lớp \n");
    printf("0.Thoát \n");
    printf("+------------------------------------------------------+ \n");

    int luaChon = 1;

    while(luaChon != 0) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();
        switch(luaChon) {
            case 1: {
                // tên, tuổi, địa chỉ, kỳ học, chuyên ngành
                char ten[50];
                int tuoi;
                char diaChi[100];
                int kyHoc;
                char chuyenNganh[100];

                printf("Vui long nhap vao ten: ");
                gets(ten);
                printf("Vui long nhap vao tuoi: ");
                scanf("%d", &tuoi);
                getchar();
                printf("Vui long nhap vao diaChi: ");
                gets(diaChi);
                printf("Vui long nhap vao kyHoc: ");
                scanf("%d", &kyHoc);
                getchar();
                printf("Vui long nhap vao chuyenNganh: ");
                gets(chuyenNganh);

                printf("Ten ban la: %s \n", ten);
                printf("tuoi ban la: %d \n", tuoi);
                printf("diaChi ban la: %s \n", diaChi);
                printf("kyHoc ban la: %d \n", kyHoc);
                printf("chuyenNganh ban la: %s \n", chuyenNganh);
                break;
            }
            case 2: {
                printf("Nhap mot so nguyen tu ban phim: ");
                int n;
                scanf("%d", &n);
                int i, tong = 0;
                for(i = 1; i <= n; i++) {
                    tong += i;
                }
                printf("Ket qua la: %d \n", tong);
                break;
            }
            case 3: {
                int soLop; 
                printf("Moi nhap tong so lop: ");
                scanf("%d", &soLop);
                int danhSachLop[soLop];
                int i;
                for(i = 0; i < soLop; i++) {
                    printf("Vui long nhap so luong sinh vien cua lop so %d: ", i + 1);
                    scanf("%d", &danhSachLop[i]);
                }

                printf("So luong cac lop la: %d \n", soLop);

                for(i = 0; i < soLop; i++) {
                    if(danhSachLop[i] < 30) {
                        printf("Lop so %d co so luong sinh vien nho hon 30 \n", i + 1);
                    }
                }

                // Tim so nho nhat
                int min = danhSachLop[0];
                int viTriBeNhat = 0;
                for(i = 0; i < soLop; i++) {
                    if(min > danhSachLop[i]) {
                        min = danhSachLop[i];
                        viTriBeNhat = i;
                    }
                }
                printf("Vi tri be nhat la: %d, gia tri be nhat la: %d \n", viTriBeNhat + 1, min);
                break;
            }
            case 0: {
                printf("Thoat");
                break;
            }
        }
    }
}