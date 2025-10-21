#include<stdio.h>

// contoh dengan mencari hasil dari bilangan faktorial

int faktorial(int n) {
    if (n == 1) { // kondisi paling kecil (berhenti di sini)
        return 1;
    } else {
        return n * faktorial(n - 1); // memanggil dirinya sendiri
    }
}


int main(){
	
	printf("%d\n", faktorial(20)); // hasilnya 120
    return 0;

}

// sketsanya seperti ini

//- faktorial (5)
	//	return 5 * faktorial(5-1)
	//		- faktorial (4)
	//			return 4 * faktorial (4-1)
	//				- faktorial (3)
	//					return 3 * faktorial(3-1)
	//						- faktorial (2)
	//							return 2 * faktorial (2-1)
	//								- faktorial (1)
	//									n == 1 --> perkondisian memenuhi
	//									return 1
	//								- faktorial (1) ---> 1
	//							return 2 * 1
	//							return 2
	//						- faktorial (2) ---> 2
	//					return 3 * 2
	//					return 6
	//				- faktorial (3) ---> 6
	//			return 4 * 6
	//			return 24
	//		- faktorial (4) ---> 24
	//	return 5 * 24
	//	return 120
//- faktorial (5) ---> 120
