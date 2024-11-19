#include <stdio.h>

int main() {
    // int a, b;
    // printf("Vui long nhap vao a: ");
    // scanf("%d", &a);
    // printf("Vui long nhap vao b: ");
    // scanf("%d", &b);
    // float c = (float) a / b;
    // printf("a : b = %.2f", c);
    
    float a, b;
    printf("Vui long nhap vao a: ");
    scanf("%f", &a);
    printf("Vui long nhap vao b: ");
    scanf("%f", &b);
    float c = a / b;
    printf("a : b = %.2f", c);
}