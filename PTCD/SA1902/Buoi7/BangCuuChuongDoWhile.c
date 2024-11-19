#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("9 x %d = %d \n", i, 9 * i);
        i++;
    } while(i <= 9);
}