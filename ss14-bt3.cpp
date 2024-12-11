#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, 100, stdin);
    int length = strlen(str);
    printf("Chuoi ban dau la: %s\n", str);

    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
