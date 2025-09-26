#include<stdio.h>

int main () {
	int matrix[3][3];
	int barisPertama = 0; /// di inisialisasi 0, agar tahu ini variabel sudah berisi data berupa 0
	
	
	for (int i = 0; i < 3; i++) {		/// ini seperti mengisi angka pada kotak yang berpola matrix
		for (int j = 0; j < 3; j++){	/// penggambarannya seperti ini, dengan contoh inputan 5, 4, 2, 5, 6, 2, 6, 6, 4
			scanf("%d", &matrix[i][j]); /// 			j0	j1	j2
		}								///			i0	5	4	2
	}									///			i1	5	6	2
										///			i2	6	6	4
	for (int i = 0; i < 3; i++) {		///	ibarat j itu bagian kolom, i nya baris, karena untuk contoh ini penggambarannya dibentuk seperti matrix
		for (int j = 0; j < 3; j++){	/// agar mudah dalam memahami pola array 2 dimensi 
			printf("%d ", matrix[i][j]);/// dan untuk inputnya seperti sebelumnya, untuk mengakhiri jumlah berapa yang diinput, bisa menggunakan spasi atau enter,
		}								/// untuk inputan ke data berikutnya, disini ada total 9 inputan
		printf("\n");
	}
	
//	buat contoh dimana mencoba menambahkan angka angka yang ada dibaris pertama
	for (int j = 0; j < 3; j++) {		/// perulangan disini untuk mengecek semua kolom pada baris, jadi perulangannya menggunakan dimensi kedua,
		barisPertama += matrix[0][j];	/// yang disini menggunakan huruf j
																/// ambil contoh dari atas
	}															///						j0	j1	j2
	printf("Hasil Tambah baris pertama = %d", barisPertama);	///					i0	5	4	2	<- dan bagian ini yang akan ditambah
																///					i1	5	6	2
																///					i2	6	6	4
																/// karena tujuannya di baris pertama tok, dibuat perulangan pada bagian kolom saja 
																/// matrix[0][j], 0 -nya indikasi baris pertama, [j] -nya looping untuk mengecek kolom sembari 
																											/// ditambahkan data tersebut mangkanya ada 
	
	return 0;
}
