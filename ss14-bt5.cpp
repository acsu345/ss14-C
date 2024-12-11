#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int countWord = 0, i;
    printf("Nhap mot chuoi bat ki: ");
    fgets(chuoi, 100, stdin);
    int n = sizeof(chuoi)/sizeof(char); 
    for (i = 0; i< n; i++) {
        if (chuoi[i] == ' ' && chuoi[i - 1] != ' ') {
            countWord++;
        }
}
    printf("So tu trong chuoi la: %d\n", countWord);

    return 0;
}
