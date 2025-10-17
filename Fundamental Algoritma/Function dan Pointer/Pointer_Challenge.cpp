#include<stdio.h>

int main(){
	int arr[10];
	
	for (int i = 0; i < 10; i++) {
		arr[i] = 0; // semua array dari variabel arr, akan diberi value 0 semua terlebih dahulu
		printf("%d = %d\n", i, &arr[i]); // cetak masing masing array karena looping sampe < 10 jadi 0, 1, 2, 3, ...... 9
								// dan cetak juga alamat dari masing masing array tersebut
	}
	
	int *a; // variabel pointer untuk menangkap alamat dari variabel array arr
	int b; // tempat untuk mengisi value ke alamat array variabel arr
	
	printf("\nIsikan alamat diatas yang ingin diubah valuenya: "); scanf("%d", &a);
	printf("Masukkan value yang diinginkan, ke alamat yang sudah diinput: "); scanf("%d", &b);
	
	*a = b;
	
	for (int i = 0; i < 10; i++)
		printf("%d = %d\n", i, arr[i]);
	
	return 0;
}
