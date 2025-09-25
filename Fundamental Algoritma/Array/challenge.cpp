#include<stdio.h>
#include<string.h> // yang dipake di CARA KETIGA, dari librarynya

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

	int panjang = strlen(str); // untuk mengetahui jumlah karakter yang diinputkan oleh user yang dimasukkan pada variabel str
	
//	for (int i = 0; i < panjang; i++) {
//		if(str[i] >= 97 && str[i] <= 122) { /// metode yang digunakan untuk mengubah huruf kecil ke besar melalui konsep ASCII,
//			str[i] -= 32;					/// ASCII simpelnya model standar cara komputer dalam menerjemahkan karakter yang diinput pada keyboard menggunakan angka
											/// jadi a kalau dalam kode ASCII itu 97, a sampai z itu 92 sampai 122
//		}									/// nah didalam huruf besar yaitu A sampai Z, diawali angka 65 sampai 90
//	}										/// jadi logikanya a = 97, A = 65, versi huruf besarnya kudu dikurangi 32, 
											/// mangkanya ketika karakter semua yang dicek dari variabel str kode ascii antara 95 sampai 122, 
											/// kode ASCII nya akan dikurang 32 agar menenumkan versi huruf besarnya melalui kode ASCII yang dikurangi tersebut
											
	/// CARA KEDUA
	for (int i = 0; i < panjang; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') { /// bisa mengggunakan abjad nya itu sendiri, program tetep akan bisa mengenalnya sebagai kode ASCII
			str[i] -= 32;					/// jadi baris coding berikutnya masih sama dikurangi 32
		}
	}
	
//	printf("%s", str);
	/// CARA KETIGA
//	printf("%s", strupr(str)); // Menggunakan library dari string.h, strupr untuk menjadikan huruf kapital semua
	printf("%s", strlwr(str)); // strlwr untuk mengubahnya ke huruf kecil semua
	

	return 0;
}
