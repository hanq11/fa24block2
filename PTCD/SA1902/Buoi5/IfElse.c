#include<stdio.h>

int main() {
    printf("Vui long nhap vao diem cua ban: ");
    int a = 0;
    scanf("%d", &a);

    if(a >= 5) {
        printf("pass");
    } else {
        printf("fail");
    }
}