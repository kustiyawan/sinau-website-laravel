#include<stdio.h>

// Masuk ke pembahasan fibonacci
// konsep fibonacci simpelnya ialah, langsung contoh di bawah ae
// angka biasa		n ->	0	1	2	3	4	5	6
//			fibonassi ->	0	1	1	2	3	5	8
// 
// intinya angka fibonacci di tiap angka biasa, ialah hasil jumlah dari 2 angka fibonaci sebelumnya

void helloworld(int i) { // ini int i anggap saja maksudnya di fibonacci ke berapa gitu
	if(i == 5) return;
	
	helloWorld(i+1);
	printf("%d\n", i);
}

int fibonacci(int i) {
	
}

int main(){
//	helloWorld(0);

	fibonacci(0);
	
	return 0;
}
