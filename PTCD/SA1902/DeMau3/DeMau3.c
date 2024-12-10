#include <stdio.h>

int main() {
    printf("+--------------------------Menu------------------------+\n");
    printf("1. Thông tin cá nhân\n");
    printf("2. Tính tổng từ 1 đến N\n");
    printf("3. Thông tin Ti vi\n");
    printf("0.Thoát\n");
    printf("+--------------------------------------------------------+\n");

    int luaChon  = 1;

    while(luaChon != 0) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();
        switch(luaChon) {
            case 3: {
                printf("Moi nhap so luong Tivi: ");
                int soLuong;
                scanf("%d", &soLuong);
                int mangKichCo[soLuong];
                int i;
                for(i = 0; i < soLuong; i++) {
                    printf("Vui long nhap kich co cho TV thu %d: ", i + 1);
                    scanf("%d", &mangKichCo[i]);
                }
                printf("So luong TV la: %d \n", soLuong);

                int dem = 0;
                for(i = 0; i < soLuong; i++) {
                    if(mangKichCo[i] > 20) {
                        dem++;
                    }
                }
                printf("So luong TV co kich co lon hon 20 la: %d \n", dem);

                int max = mangKichCo[0];
                for(i = 0; i < soLuong; i++) {
                    if(max < mangKichCo[i]) {
                        max = mangKichCo[i];
                    }
                }
                printf("Kich co lon nhat la: %d \n", max);
            }
            case 0: {
                printf("Thoat");
                break;
            }
        }
    }
}