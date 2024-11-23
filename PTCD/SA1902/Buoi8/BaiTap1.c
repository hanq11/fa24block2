#include <stdio.h>
// Tính tổng các số lẻ từ 23 đến 90 và in ra màn hình

int main() {
    int i;
    int tong = 0;
    for(i = 23; i < 91; i++) {
        if(i % 2 != 0) {
            tong = tong + i;
        }
    }
    printf("Ket qua la: %d", tong);
}