#include<stdio.h>

int main(){
	int angka1, angka2, angka3;
	
	printf("Penambahan \n");
	scanf("%d %d", &angka1, &angka2);
	printf("hasil: %d \n\n", angka1+angka2);
	
	printf("Pengurangan \n");
	scanf("%d %d", &angka1, &angka2);
	printf("hasil: %d \n\n", angka1-angka2);

	printf("Perkalian \n");
	scanf("%d %d", &angka1, &angka2);
	printf("hasil: %d \n\n", angka1*angka2);	
	
	printf("Pembagian \n");
	scanf("%d %d", &angka1, &angka2);
	printf("hasil: %d \n\n", angka1/angka2);
	
	printf("Modulus \n");
	scanf("%d %d", &angka1, &angka2);
	printf("hasil: %d \n\n", angka1%angka2);
	
	return 0;
	
}
