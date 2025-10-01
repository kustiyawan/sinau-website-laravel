#include <stdio.h>

int main (){
	//pointer
	// pointer simpelnya, tempat untuk mewakili sebuah variabel yang ingin dipanggil, atau value dari variabel tersebut bisa digunakan
					/// tanpa memanggil nama variable itu sendiri
	int a = 3;
	
	// untuk pointer ditulis seperti ini
	// tambahkan bintang dibelakang huruf
	int *p; // konsep sederhananya, pada variabel *p isinya/valuenya akan diisi dengan alamat variabel yang ingin dimasukkan
			// cara memasukkannya disini
	p = &a; // dalam C "&" maksudnya seperti alamat untuk menanandai variabel nya
	
	// ketika ingin buat pointer dari sebuah pointer
	int **p2;
	p2 = &p;
	
	printf("%d\n", a); //ketika ini di print, akan menampilkan valuenya yaitu 3
	printf("%d\n", &a); // untuk membuktikan kalau kalau yang diisi pada variabel p itu adalah alamat dari variabel a, bisa menggunakan &
	printf("%d\n", p); // nah coba langsung dengan P, yang ditampilkan pasti seperti sebuah angka deret random, seperti contoh 6487572
										// itu adalah alamat dari variabel a
	
	printf("\n");									
	// untuk bisa menampilkan value dari variabel a melalui alamatnya, yaitu seperti ini
	printf("%d\n", *p); // 
	
	printf("\n");
	// untuk membuktikan kalau p2 itu isinya ialah alamat dari p
	printf("%d\n", &p);
	printf("%d\n", p2);
	
	// kalau ingin mencetak value dari variabel a dari p2
	printf("\n");
	printf("%d\n", **p2);
	
	// semisal kalau bintangnya cuma 1
	printf("\n");
	printf("%d\n", *p2); // yang muncul ialah alamat dari variabel a
							// sama seperti contoh dari *p, yang saat print nya menggunakan *p, yang muncul ialah value dari variabel a
						// disini juga sama, pointer p2 ngambil dari alamat p, dengan memakai print *p2 berarti menampilkan isi value dari
														// variabel p, yang dimana pointer p isi valuenya ialah alamat dari variabel a
														// yang muncul saat menggunakan print *p2 ialah alamat dari variabel a
	
	return 0;
}
