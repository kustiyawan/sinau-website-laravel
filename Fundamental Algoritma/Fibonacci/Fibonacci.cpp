#include<stdio.h>

// Masuk ke pembahasan fibonacci
// konsep fibonacci simpelnya ialah, langsung contoh di bawah ae
// angka biasa		n ->	0	1	2	3	4	5	6
//			fibonassi ->	0	1	1	2	3	5	8
// 
// intinya angka fibonacci di tiap angka biasa, ialah hasil jumlah dari 2 angka fibonaci sebelumnya

int fibonacci(int i) { // ini int i anggap saja maksudnya di fibonacci ke berapa gitu
	if (i == 0) return 0; //ditambah perkondisian ini agar fungsi dibawah tidak memanggil fungsi nya sendiri terus menerus
	if (i == 1) return 1; // kenapa 0 dan 1, karena angka paling terakhir diawal yaitu angka angka fibonacci diawal kan 0 dan 1
	
	return fibonacci(i-1) + fibonacci(i-2); // karena fibonnaci itu, menambahkan hasil fibonacci di 2 bilangan sebelumnya
						// untuk mengetahui posisinya, urutannya dikurangi 1 ditambah(+) yang urutannya dikurangi 2
}

int main(){
//	helloWorld(0);

	int f = fibonacci(5);
	
	printf("hasil fibonacci-nya: %d", f);
	
	return 0;
}
