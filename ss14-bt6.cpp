#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int countAlpha = 0, i;
    printf("Nhap mot chuoi bat ki: ");
    fgets(chuoi, 100, stdin);
    int n = sizeof(chuoi)/sizeof(char) ;
    for (i = 0; i < n; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            countAlpha++;
        }
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", countAlpha);

    return 0;
}
