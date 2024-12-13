#include <stdio.h>

int main () {
//	pembahasan mengenai Array 1 Dimensi
	/// pertama dengan angka 
	
	int listAngka[20]; // ibaratkan sebuah loker, dan ini ada 20 tempat loker berderet untuk listAngka ini
						// karena ini pemrograman, suatu deret angka dimulai dari 0, jadi kalau 20 tempat loker.....
						// -> 0, 1, 2, 3, 4, 5, 6, ....... sampai 20
	
	// coba di isi loker yang diinginkan
	listAngka[0] = 1; // <- loker no 0 akan diisi angka ber nomor 1
	printf("%d\n", listAngka[0]); // <- dicetak untuk pengecekan
	
	listAngka[3] = 34; // <- loker no 3 akan diisi angka ber nomor 34
	printf("%d\n", listAngka[3]); //
	
	
	return 0;
}
