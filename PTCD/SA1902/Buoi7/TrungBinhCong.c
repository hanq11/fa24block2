#include <stdio.h>

int main() {
    int dem = 0;
    int i = 3;
    int tong = 0;
    while(i < 21) {
        if(i % 3 == 0) {
            dem++;
            tong = tong + i;
        }
        i += 3;
    }
    printf("Ket qua la: %f", (float) tong/dem);
}