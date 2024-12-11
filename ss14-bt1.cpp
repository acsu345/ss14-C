#include <stdio.h>
#include <string.h>

int main(){
	char input[100], count;
	printf("Moi ban nhap mot chuoi bat ki: ");
	fgets(input, 100, stdin);
	count = strlen(input) ;
	printf("Chuoi vua nhap la: %s\n", input);
	printf("Do dai cua chuoi la: %d\n", count);
	
	return 0; 
}
 
