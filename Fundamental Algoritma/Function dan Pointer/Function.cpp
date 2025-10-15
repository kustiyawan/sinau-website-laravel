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
	
	// PASSING BY REFERENCE
	int sumContohPointer (int *ambilOngko1, int *ambilOngko2) {
		printf ("CEK ALAMAT VARIABEL ongko1 dan ongko2 (ini didalam function sumContohPointer) = %d  %d \n\n", ambilOngko1, ambilOngko2);
		int total = *ambilOngko1 + *ambilOngko2;
		return total;
//		printf("%d\n", total);
	}
	// masih didalam PASSING BY REFERENCE
	// ini contoh untuk membuktikan karakteristik dari function dan pointer
	int pembuktian (int variabelSiji)
	

int main(){
	
	// untuk memanggilnya tinggal ketik nama fungsinya
//	printHelloWorld();

	int a = getNumber();
	
	printf("%d\n", a);
	
	// langsung dengan mencantumkan nama fungsi nya seperti ini juga bisa
	printf("%d\n", getNumber());
	
	printf("\n");
	/// PASSING BY VALUE
//	int hasilSum = sum(4, 8); // angka no 4 -> int first
							  // angka no 8 -> int second
//	printf("%d\n", hasilSum); 
	
	/// dibuat seperti ini juga bisa dengan menggunakan variabel yang namanya sama dengan parameter int sum, untuk memudahkan
	/// karena memang sudah diranah function yang berbeda, disini masih kedalam function int main, jadi memakai nama yg sama didalam function
												/// yang lain tidak akan mempengaruhi apapun
	int first = 8;
	int second = 10;
	int hasilSum_bagian2 = sum(first, second);
	
	printf("%d\n", hasilSum_bagian2);
	
	/// bisa langsung memakai hasil angka yang diolah atau dikembalikan dari function lain
	/// ambil contoh dari int getNumber()
	
	int third = 20;
	int hasilSum_bagian3 = sum(getNumber(), third);
	
	printf("%d\n", hasilSum_bagian3);
	
	/// PASSING BY REFERENCE
	// untuk yg konsep ini, penggunaannya memakai pointer
	int ongko1 = 25;
	int ongko2 = 25;
	
	int memakaiPointer = sumContohPointer(&ongko1, &ongko2); /// kasih tanda & didepan untuk memberikan alamat, bagian function int sum akan menangkapnya
														// dengan pointer *
	printf("ini hasil penjumlahan yang diolah di sumContohPointer (didalam function int main) = %d\n", memakaiPointer);
	int *cekAlamat1 = &ongko1;
	int *cekAlamat2 = &ongko2;
	
	printf("cek alamat ongko1 dan ongko2 (di function int main) = %d  %d\n\n", cekAlamat1, cekAlamat2);
	
	printf("Dibawah sini adalah contoh lain \n\n");
	int variabelSiji = 10;
	
	
	
	
	return 0;
}
