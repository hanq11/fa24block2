#include <stdio.h>

int main() {
    int a, b;
    printf("Vui long nhap vao a: ");
    scanf("%d", &a);
    printf("Vui long nhap vao b: ");
    scanf("%d", &b);
    // Cach 1
    int c = a + b;
    printf("a + b = %d \n", c);
    // Cach 2
    printf("5 %% 6 = %d \n", 5 % 6);
    printf("a++ + b++ = %d", a++ + ++b);
}