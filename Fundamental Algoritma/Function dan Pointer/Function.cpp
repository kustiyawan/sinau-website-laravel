#include<stdio.h>

	// pembuatan fungsi seperti ini
	void printHelloWorld() {
		printf("HELLO WORLD!!");
	}
	
	// gak harus void, bisa jadi menggunakan int, yang fungsinya juga untuk mengembalikkan sebuah angka
	// hampir seperti variabel yang berinteger biasa yang bisa mengembalikkan data berupa angka,
	// bedanya ada pengolahan/pengoperasian dulu disini
	int getNumber() {
		return 5;
	}
	
	// function ada 1 tipe, passing by value dan passing by reference
	
	// PASSING BY VALUE
	// ambil contoh dengan 2 paramater, parameter disini ialah int first dan int secon
	int sum (int first, int second) {
		int total = first + second; /// int first -> first
		return total;				/// int second -> second
								// ditotal di int total
								// return total -> hasil penjumlahan akan dikembalikan ke int hasilSum
	}

int main(){
	
	// untuk memanggilnya tinggal ketik nama fungsinya
//	printHelloWorld();

	int a = getNumber();
	
	printf("%d\n", a);
	
	// langsung dengan mencantumkan nama fungsi nya seperti ini juga bisa
	printf("%d\n", getNumber());
	
	printf("\n");
	/// PASSING BY VALUE
	int hasilSum = sum(4, 8); // angka no 4 -> int first
							  // angka no 8 -> int second
	printf("%d\n", hasilSum);
	
	return 0;
}
