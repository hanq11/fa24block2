#include <stdio.h>

int main() {
    printf("Viet Nam co bao nhieu dan toc anh em: \n");
    printf("a. 52 \n");
    printf("b. 53 \n");
    printf("c. 54 \n");
    printf("d. 55 \n");
    printf("Xin moi chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%c", &dapAn);
    printf("%d", dapAn);
    switch(dapAn) {
        case 'a':
            printf("Dap an sai");
            break;
        case 'b':
            printf("Dap an sai");
            break;
        case 'c':
            printf("Dap an dung");
            break;
        case 'd':
            printf("Dap an sai");
            break;
        default:
            printf("Vui long chon dap an a,b,c hoac d");
            break;
    }
}