#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi: ");
    fgets(str, 100, stdin);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }
    
	return 0;
}