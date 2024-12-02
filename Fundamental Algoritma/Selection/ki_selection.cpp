#include<stdio.h>

int main() {
	//SELECTION
	/*
		1. If, Else If, else
		2. Switch case
		3. Ternary If
	*/
	
	int angka = 0;
	
	// contoh kondisi
	/*
		- kalau angka 0 maka print "nol" (maksudnya kata 0 ya), kalau angka ganjil print "ganjil"
		- kalau angka genap maka print "genap"
	*/
	
	// untuk contoh dibawah sudah benar tapi kurang tepat
	// if seperti ini bisa dibilang terpisah pisah
	// semisal ini dijalankan, kondisi yang "angka == 0" dan "angka %2 == 0", dua duanya akan diprint
	// karena memang perkondisian seperti ini, tidak jadi satu, tiap kondisi berditi satu satu/sendiri
	// kondisi yang emang bukan 1 kelompok, if kondisi yang masing masing baru
	
//	if (angka == 0) {
//		printf("Nol");
//	}
//	if (angka %2 == 1){
//		printf("Ganjil");
//	}
//	if (angka %2 == 0) {
//		printf("Genap");
//	}
	
	// nah dibawah, per kondisi yang menjadi satu, dan jikalau udah ada kondisi yang sudah memenuhi, kondisi yang dibawahnya lagi yang mungkin memenuhi juga tidak akan di eksekusi
	// mangkanya itu peran else if berguna disini
	
//	if (angka == 0) {
//		printf("Nol");
//	}
//	else if (angka %2 == 1){
//		printf("Ganjil");
//	}
//	else if (angka %2 == 0) { 
//		printf("Genap");
//	}
	
	// nah bisa juga untuk kondisi terakhir tidak usah memakai if, jikalau yakin sudah membuat perkondisian dan yang terakhir adalah opsi terakhir yang tidak memenuhi semua kondisi yang sudah dibuat
//	if (angka == 0) {
//		printf("Nol");
//	}
//	else if (angka %2 == 1){
//		printf("Ganjil");
//	}
//	else{
//		printf("Genap");
//	}
//	

// 2. SWITCH CASE

	// di dalam kurung switch adalah tujuan, variabel mana yang ingin kita cek
	// dan sebagai contoh, akan mencoba mengecek angka	
//	int angkaNyobaSwitch = 2;
//	switch(angkaNyobaSwitch) {  // untuk yang swich pemilihan kondisi nya lebih flat maksudnya ibaratnya kalau pakai if else, 
						// cuma modelan penggunaan == yang bisa digunakakan dan itu harus angka, seperti contoh di bawah
						// case 0, 1, 5, artinya variabel angkaNyobaSwitch masuk perkondisian jikalau isinya sesuai nomor dari case case yang dibuat
//		case 0:
//			printf ("nol");
//			break;  // ada juga break; punya fungsinya sendiri, karena jikalau isi dari variabel angkaNyobaSwitch memenuhi kondisi dari salah satu cases
				// case case yang ada dibawahnya juga akan tereksekusi sampai case terakhir, jadi break; disini diperlukan di setiap kasus/case
//		case 1:
//			printf ("Satu");
//			break;
//		case 5: 
//			printf ("Lima");
//			break;
			
		// ada juga jikalau yang mirip mirip fungsinya seperti per kondisian if else
		// seperti penggunaan else pada pengkondisian if, jikalau semua syarat yang dibuat tidak terpenuhi akan keluar apa.....
		// dan di switch case namanya ialah => default:
		// yaitu sama fungsinya, jikalau semua case yang di buat tidak memenuhi, fungsi default ini akan mengeksekusinya
		
//		default:
//			printf ("Angka yang dimasukkan tidak memenuhi syarat apapun!");


	// 3. TERNARY IF
//	fungsinya hampir mirip dengan if else bedanya, ternary if hanya bisa melakukan perkondisian atau pembandingan secara sederhanya seperti contoh
	// mencoba membuat contoh, membandingkan kondisi benar atau salah
	int angkaContoh = 3;
	int angkaContohKedua= 2;
	printf ("%s", (angkaContoh %2 == 0 ? "Genap" : "Ganjil")); // yang bagian kiri yaitu "Genap" di print jikalau hasil kondisi nya bernilai true atau benar gitu lah
														// yang kanan posisi salah/false
														// ini untuk contoh menentukan bilangan yang di inputkan genap atau ganjil
	
	// contoh lagi untuk membuat pengkondisian "lebih dari" atau "kurang dari"
	// dengan beberapa perkondisian
	
	printf ("%s", (angkaContohKedua < 2 ? "Lebih kecil dari angka 2" : 
					angkaContohKedua > 2 ? "Lebih besar dari angka 2" : "2")); // nah untuk kelemahan dari ternary, kalau perkondisian nnya banyak, jadi terkesan panjang dan kurang rapi
												// mangkanya ternary lebih cocok dalam menggunakan pengkondisian yang terkesan pendek, dan hasil akhir dari pengkondisian lebih sederhana
												// dan tetep if else masih enak digunakan untuk pengkondisian yang lebih komplek dan memiliki banyak syarat karena lebih terstruktur
	
	
	return 0;
	
	
	
	
	
}
