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
	
	bubbleSort();
	print();
	
	return 0;
}
