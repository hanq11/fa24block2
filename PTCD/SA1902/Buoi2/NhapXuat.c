#include <stdio.h>

int main() {
    int tuoi = 0;
    printf("Vui long nhap tuoi cua ban: ");
    scanf("%d", &tuoi);
    tuoi = tuoi + 10;
    tuoi = tuoi * tuoi;
    
    printf("Tuoi cua ban la: %d", tuoi);
}