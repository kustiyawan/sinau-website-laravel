#include<stdio.h>

// Masuk ke pembahasan fibonacci
// konsep fibonacci simpelnya ialah, langsung contoh di bawah ae
// angka biasa		n ->	0	1	2	3	4	5	6
//			fibonassi ->	0	1	1	2	3	5	8
// 
// intinya angka fibonacci di tiap angka biasa, ialah hasil jumlah dari 2 angka fibonaci sebelumnya

int fibonacci(int i) { // ini int i anggap saja maksudnya di fibonacci ke berapa gitu
	
	
	return fibonacci(i-1) + (i-2); // karena fibonnaci itu, menambahkan hasil fibonacci di 2 bilangan sebelumnya
						// untuk mengetahui posisinya, urutannya dikurangi 1 ditambah(+) yang urutannya dikurangi 2
}

int main(){
//	helloWorld(0);

	int f = fibonacci(5);
	
	printf("hasil fibonacci-nya: %d", f);
	
	return 0;
}
