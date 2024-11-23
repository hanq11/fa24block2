#include <stdio.h>

int main() {
    int i;
    for(i = 0; i < 4; i++) {
        if(i == 2) {
            continue;
        }
        printf("%d \n", i);
    }
}