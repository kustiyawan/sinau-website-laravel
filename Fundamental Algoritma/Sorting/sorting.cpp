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
		
		// -->			10			[29]	->	14			37			14
		// -->			10			[14]		29			37			14
		// -->			10			14			[29]		37			14
		// -->		langkahnya sama seperti saat merubah bilangan 10, bilangan yang kiri yang ditutup kurung terindikasi lebih besar ketimbang yang dikanan
		// -->		jadi angka 29 juga dipindah ke kanan angka 14 dipindah kekiri, pemeriksaan berlanjut ke bilangan ketiga, yang sama sama masih dipegang 29
		
		// -->			10			14			[29]		37			14
		// -->			10			14			[29]	->	37			14
		// -->			10			14			29			[37]		14
		// -->		ketika bilangan yang kiri (didalam kurung) lebih kecil yang ada didalam kanan, perubahan tidak akan terjadi, dan pemeriksaan akan berlanjut
		// -->		menuju ke bilangan keempat yaitu bilangan 37
		
		// -->			10			14			29			[37]		14
		// -->			10			14			29			[37]	->	14
		// -->			10			14			29			[14]		37
		// -->			10			14			29			14			[37]
		// -->		masih sama langkahnya seperti biasa, setelah pada bilangan terakhir, akan diulang kembali dari awal bilangan, melakukan langkah sebelumnya
		// -->		sampai terurut dari kecil kebesar
		
		// -->			[10]		14			29			14			37
		// -->			10			[14]		29			14			37
		// -->			10			14			[29]		14			37
		// -->			10			14			[14]		29			37
		// -->			10			14			14			[29]		37
		// -->			10			14			14			29			[37]
	bubbleSort();
	print();
	
	return 0;
}
