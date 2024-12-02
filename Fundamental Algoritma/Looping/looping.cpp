#include <stdio.h>

int main (){
//	repition/looping
	// for, while, do while
	
// break continue
	
	// 1. pertama for
	// dalam for ada 3 statemen atau dengan kata lain didalamnya ada 3 urutan langkah dalam menjalankan looping
//	for (int i = 0; i < 10; i++){
//	
//	// int i = 0, ini sebagai tempat inisialisasi pertama, simple nya looping akan dilakukan mulai angka berapa
//				// dari contoh dari 0, jadi 0 menjadi awal memulai nya looping
//	// i < 10; , bisa disebut sebagai batas looping yang digunakan, setelah mengecek awal untuk memulai adalah 0
//				// berlanjut ke statement selanjutanya yaitu i < 10, ada angka 10 disitu dan simbol "kurang dari"
//				// statement ini akan mengecek inisialisasi nya berapa, awalan kan 0, disini akan mengecek 0 kurang dari 10 apa tidak
//				// jika memenuhi, codingan yang ada didalam for akan dijalankan yaitu di dalam kurung {.....}
//	// i++,  setelah mengecek apakah inisialisasi atau isi dari int i angkanya kurang dari 10 "i < 10", 
//				// program code yang ada didalam for akan di jalankan, yang kemudian akan berlanjut ke statement berikutnya
//				// yang dimana int i, angka yang dimasukkan ke i akan ditambahkan 1, awalnya kan 0 masuk ke statement i++, 0 tadi akan ditambahkan 1 => 0+1
//				// i yang sekarang menjadi 1, kembali ke awal statement dan i menjadi 1, dicek kembali apakah kurang dari 10
//				// kalau iya codingan yang ada di dalam for akan di jalankan kembali, setelah selesai angka dari int i yg dah jadi 1 di tambah 1 lagi menjadi 2
//				// looping akan dijalankan terus sampai syarat yang ditentukan yaitu i < 10 , sampai i berangka 9, looping akan di hentikan
//	
//	// yang kemudian beberapa codingan di bawah "for" beserta tanda kurungnya akan di eksekusi 
//	// dieksekusi setelah statement i < 10 dilakukan
//		printf("%d \n", i);
//	}
	
//	printf("\n\n\n");
//	
//	for (int j = 1; j <= 10; j++) { // semisal jika ingin angka mulai ndak dari 0 tapi bisa langsung 1 dan tetep angka akhir nya di 10, 
//							// bisa inisialisasinya mulai 1 dan statement yang di tengah diganti <= 10, jadi maksudnya, kurang tapi tetep 10 nya ngikut 
//							// kurang dengan sama dengan 10
//							// jadi akan di cetak 1, 2, 3, 4, 5, ...... sampai seterusnya mentok di 10
//		printf("%d \n", j); 
//	}
	
//	printf ("\n\n");
//	
//	// contoh juga jika ingin semisal menampilkan urutan angka yang lompat 2 angka, seperti 1, 3, 5, 7, 9, ........ dan seterusnya sesuai batas yang ingin ditentukan
//	for (int k = 1; k <= 10; k+=2) { // awalnya yang biasanya k++ diubah menjadi k+=2, ini sama dengan maksud k = k + 2
//		printf ("%d \n", k);
//	}
//	
//	printf("%d \n\n");
	
	// lanjut dengan maksud penggunaan Break dan Continue
//	for (int l = 1; l <= 10; l++) { 
//	//	if (l == 5 ) break; // semisal jikalau kita ingin l saat proses looping/pengulangan nambah, saat pengulangan nambah mencapai angka 5
//							// maka pengulangan berhenti, maka dari itu fungsi "break" ada disini
//							// saat l sudah di angka 5 looping akan berhenti dan code di dalam kurung {....} tidak akan di jalankan lagi
//							
//		if (l == 5) continue; // beda dengan break kalau kita ingin melewati angka yang di inginkan, semisal contoh 5 disini, looping penambahan terjadi 
//							// angka dari l ditambah 1 terus menerus, ketika kondisi l udang pada di angka 5, codingan dibawahnya yaitu "printf ("%d \n", l);"
//							// akan diabaikan dan langsung lanjut proses looping jadi terkesannya no 5 dilewati, hanya sekedar angka 5 ini tidak di print oleh codingan "printf ("%d \n", l);"
//		printf ("%d \n", l);
//	}
	
	
// 2. While
//	int m = 0;
//	printf("INI WHILE : \n");
//	while (m <= 10) {
//		printf("%d \n", m); // untuk logika sederhana nya, dengan penggunaan perulangan while, while dalam bahasa indonesianya ialaha "ketika", jadi maksudnya
//						// kalau contoh yang dibuat, "ketika" isi m kurang dari sama dengan 10, eksekusi printf, diulang kembali.
//						// yang ada di while akan diulang lagi, balik akan dicek, diulang lagi, begitu terus menerus
//						// sehingga timbul kekurangannya disini
//						// ketika ini diprint pengulangan akan terus dilakukan sampai infinite, karena while nya terus menerus memenuhi syarat
//						
//	//	printf("%d \n", m++); // atau bisa dengan cara, m++ nya langsung diletakkan kedalam pencetakkan
//					// masukkan kedalam syntax coding yang menurut kalian codingan terakhir
//						
//	
//	m++; // maka dari itu, akhir dari isi while, dituliskan juga isi m akan ditambah 1 tiap 1 eksekusi perulangan
//		// dan ketika m sudah diangka 11, maka syarat while tidak memenuhi dan perulangan akan dihentikan
//	}
//	
//	printf ("\n\n");
	
// 3. Do While
//	berbeda dengan While
//	kalau pada while sistem perulangannya, dicek dulu memenuhi syarat atau tidak baru eksekusi syntax didalamnya
//	sedangkan Do While, isi dari do while dijalankan terlebih dahulu baru dicek memenuhi syarat atau tidak untuk melakukan perulangan atau perulangan kembali

//	printf ("ini do - while: \n");
//	int n = 1;
//	do {
//		printf ("%d \n", n);
//		n++;
//	} while (n <= 10); // jadi formatnya seperti dibalik, do - melakukan pengeksekusian dulu untuk pertama kali
//				// setelah selesai while (ketika), mengecek apakah memenuhi syarat untuk melakukan pengulangan kembali
//				// kembali ke do
	
	
	// 4. NESTED LOOP
	// ada istilah lagi dalam perulangan yaitu nested, sesuai dengan artinya yaitu "bersarang" yang maksudnya ada loop lagi didalam loop
	// untuk contoh akan mencoba membuat kotak yang dibuat dengan bintang, tapi ditengahnya kosong, dan dicoba juga tergantung user yang input
	
	int ukuran;
	printf("Masukkan ukuran: "); scanf("%d", &ukuran);
	
	for (int p =0; p<ukuran; p++){
		for (int q=0; q<ukuran; q++) {
			if (p ==0 || p ==ukuran-1 || q ==0|| q ==ukuran-1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf ("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
