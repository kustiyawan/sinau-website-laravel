#include <stdio.h>

int arr[] = {12, 44, 23, 15, 15, 6};
int panjangArray = 5;

void bubbleSort() {
	
}

void print() {
	for (int i = 0; i < panjangArray; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	/// dalam sorting ada 2 konsep, ascening dan descending
	// ascending, berarti dari yang terkecil ke terbesar
	// descending, berarti dari terbesar ke terkecil
	
	// disorting ada beberapa cara dalam mengurutkan, dicontoh ini akan menggunakan 2 cara
	// bubble sort dan selection sort
	
	// pertama
	// mencoba ascending dengan bubble sort
	
	// KONSEP BUBBLE SORT
	// AMBIL CONTOH DENGAN MENGURUTKAN DARI KECIL KE BESAR
	// bubble sort bahasa sederhananya, mengecek bilangan sebelumnya (dikiri) dengan bilangan selanjutnya (dikanan), jikalau bilangan sebelumnya
		// lebih besar dengan bilangan selanjutnya, bilangan sebelumnya akan dipindah kekanan, bilangan selanjutnya yang tadi dikanan dipindah juga kekiri
		// --> 			29			10			14			37			14
		// -->			[29]  ->	10			14			37			14
		// -->		mengecek dulu dibilangan pertama, dan terdeteksi bilangan kiri lebih besar
		
		// -->			[10]  ->	29			14			37			14
		// -->			10			[29]		14			37			14
		// -->		angka 29 dipindah kekanan, angka 10 dipindah kekiri, pengecekan berlanjut ke bilangan kedua yang sudah berubah jadi 29
	bubbleSort();
	print();
	
	return 0;
}
