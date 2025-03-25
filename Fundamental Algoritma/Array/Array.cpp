#include <stdio.h>

int main () {
//	pembahasan mengenai Array 1 Dimensi
	/// pertama dengan angka 
	
	int listAngka[20]; // ibaratkan sebuah loker, dan ini ada 20 tempat loker berderet untuk listAngka ini
						// karena ini pemrograman, suatu deret angka dimulai dari 0, jadi kalau 20 tempat loker.....
						// -> 0, 1, 2, 3, 4, 5, 6, ....... sampai 20
	
//	// coba di isi loker yang diinginkan
//	listAngka[0] = 1; // <- loker no 0 akan diisi angka ber nomor 1
//	printf("%d\n", listAngka[0]); // <- dicetak untuk pengecekan
//	
//	listAngka[3] = 34; // <- loker no 3 akan diisi angka ber nomor 34
//	printf("%d\n", listAngka[3]); //

	/// Kedua dengan string, char didalam array
	
	char str [20];
	scanf ("%s", str); // scanf disamping berfungsi untuk membuat inputan untuk user saat di eksekusi
			/// untuk cara kerja dari array char, 
			// untuk konsepnya sama dengan array pada umumnya yaitu penggunaan index index, yaitu tempat dimana data dimasukkan, dan index dimulai dari 0
					// kalau di integer contoh index 		0  1  2  3  4  5  6
					// berisi hanya data angka seperti ini 23 45 67 31 98 88 100
					// istilah simpel nya index ialah tempat penampungan
					
			/// untuk char sama konsep nya, bedanya tempat index nya di isi dengan karakter, karakter disini tidak serta merta huruf saja, definisi dengan karakter itu sendiri
					// bisa huruf, angka, simbol seperti -> #, %, @, ^, &
			
			/// semisal ambil contoh diatas, sudah ada scanf fungsi nya membuat inputan untuk user setelah program di eksekusi, ambil contoh kata hello
					// printf dibawah akan meng-print hello tersebut
					// dan kalau dibedah array nya seperti ini
					// ini index -------> 0  1  2  3  4
					// kata yang diinput  h  e  l  l  o
					// str adalah nama tempat untuk menampung index nya
	printf("%s\n", str);
	
		/// untuk membuktikan itu adalah array coba untuk membuat perubahan pada salah satu index nya, seperti ini
		/// buat tempat index yg baru dulu
	
	char str_kedua[20];
	scanf ("%s", str_kedua);
	
	/// setelah diinput user dengan scanf coba ubah salah satu index nya
	str_kedua[3] = 'p'; // coba ubah index 3 ke huruf p
	
	printf ("%s\n", str_kedua);
	
	/// hasilnya akan seperti ini
			// contoh user input hello
			// awalnya akan seperti ini
				// index --------> 0  1  2  3  4
				// kata yg diinput h  e  l  l  o
			// setelah melewati str_kedua[3] = 'p'; menjadi
				// index --------> 0  1  2  3  4
				// berubah         h  e  l  p  o
	
	
	
	return 0;
}
