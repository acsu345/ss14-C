#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100], ky_tu;
    int count = 0;
    printf("Nhap mot chuoi: ");
    fgets(chuoi, 100, stdin);
    int n = sizeof(chuoi)/sizeof(char); 
    printf("Nhap ky tu can tim: ");
    scanf(" %c", &ky_tu);
    for (int i = 0; i<n ; i++) {
        if (chuoi[i] == ky_tu) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi\n", ky_tu, count);

    return 0;
}
