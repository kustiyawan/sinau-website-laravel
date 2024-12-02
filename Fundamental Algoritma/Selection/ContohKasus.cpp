#include <stdio.h>

int main () {
	
	int inputPertama;
	int batasMinimal;
	int batasMaksimal;
	
	scanf("%d", &inputPertama);
	scanf("%d %d", &batasMinimal, &batasMaksimal);
	
	if (inputPertama >= batasMinimal && inputPertama <= batasMaksimal){
		printf("angka %d diantara angka %d dengan %d", inputPertama, batasMinimal, batasMaksimal);
	} else {
		printf("angka %d tidak diantara angka %d dengan angka %d", inputPertama, batasMinimal, batasMaksimal); // disini di perkondisian bisa tanpa kurung kurawal
		// printf("ini hanya contoh");
	}																				// tapi dengan syarat dalam 1 kondisi yang dibuat hanya bisa berisi codingan 1 baris
														// semisal dalam else, untuk dan printf seterusnya ampe titik koma, itu sudah hitungannya satu baris koding
														// jikalau mencoba buat kodingan lagi entah printf atau perkondisian lagi (sebagai contoh pada else disamping), secara langsung codingan tersebut otomotis dijalankan
														// tidak peduli di pengkondisian manapun yg berhasil atau tidak ada satupun kondisi yang memenuhi
	
	
}
	
