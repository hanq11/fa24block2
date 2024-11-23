#include <stdio.h>

int main(){
    printf("Menu: \n");
    printf("1. Tinh cong \n");
    printf("2. Tinh hieu \n");
    printf("3. Thoat \n");

    int luaChon = 0;
    while(luaChon != 3) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
            case 1: {
                printf("Lua chon 1\n");
                break;
            }
            case 2: {
                printf("Lua chon 2\n");
                break;
            }
            case 3: {
                printf("Thoat");
                break;
            }
        }
    }
}