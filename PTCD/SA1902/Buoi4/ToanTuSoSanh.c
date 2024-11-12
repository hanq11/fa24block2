#include <stdio.h>
int main() {
    int a, b;
    printf("Vui long nhap vao a: ");
    scanf("%d", &a);
    printf("Vui long nhap vao b: ");
    scanf("%d", &b);
    if(a > b) {
        printf("a lon hon b");
    } else {
        printf("a be hon b");
    }
}