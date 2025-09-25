#include<stdio.h>
#include<string.h>

int main (){
//	mencoba sebuah contoh latihan
/// ubah kata yang ada huruf kecil dan besar seperti ini hELlo WoRld
//  				menjadi huruf besar semua seperti ini HELLO WORLD tanpa menggunakan library dari <string.h>
/// dan disini hanya memakai 1 library dari string.h yaitu strlen, karena ini bagian dari belajar array dulu
//		BERLANJUT PADA VIDEO JUDUL ARRAY DIMENIT 14:52

	char str [30];
	char str_kedua[10];
	scanf("%[^\n]", str);
//	scanf("%", str);
			/// maksud [^\n] ini fungsinya seperti perkondisian, semua karakter yang diinput oleh baru dimasukkan ke variabel str,
			/// ketika sudah klik "enter", karena enter ini masih dikategorikan sebagai char, baris baru atau newline \n
			/// ketika udah ada "enter", kemudian akan mengeksekusi baris coding berikutnya, nah disini getchar() melakukan tugasnya
			/// karena newline (\n) atau "enter" tadi masih berjalan di input stream
	getchar();
		/// getchar disini berfungsi untuk mengambil newline (\n) yg dari hasil klik "enter", karena itu masuk kategori karakter, 
		/// agar tidak ada karakter lain selain huruf yang bakal dimasukkan
//	scanf("%[^\n]", str_kedua);

	int panjang = strlen(str);
	
	for (int i = 0; i < panjang; i++) {
		
	}
	

	
}
