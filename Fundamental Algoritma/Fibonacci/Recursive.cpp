#include<stdio.h>

void helloWorld(int i) {
	
	if (i == 5) return; // tambah kondisi untuk berhenti jikalau variabel i sudah mencapai 5, disini nanti selalu diulang pemanggilannya, karena didalam function ini
				// akan memanggil function diri sendiri, melalui helloWorld(i + 1);
	
	printf("Hello "); /// dengan contoh seperti ini tanpa kondisi diatas, hasilnya nanti akan mencetak terus berulang tanpa henti, karenan memanggil terus
					// mangkanya, didalam rekursif wajib ada perkondisian untuk menghentikan pemanggilan lagi
	helloWorld(i + 1);
}

void angkaUrut(int i) {
	
	if (i == 5) return;
	
	printf("%d\n", i);
	angkaUrut(i+1);
	/// disini akan menciptakan cetakan, 0 sampai 4
}

void angkaUrutKebalik(int i) {
	
	if (i == 5) return;
	angkaUrutKebalik(i + 1);
	
	printf("%d\n", i);
	
	/// kalau untuk ini menciptakan urutan 4 ke 0, terbalik
	// gambarannya seperti ini
//	- angkaUrutKebalik(0)
//		perkondisian tidak memenuhi
//		angkaUrutKebalik(0 + 1)
//	
//		- angkaUrutKebalik(1)
//			perkondisian tidak memenuhi
//			angkaUrutKebalik(1+1)
//	
//			- angkaUrutKebalik(2)
//				perkondisian tidak memenuhi
//				angkaUrutKebalik(2+1)
//				
//				- angkaUrutKebalik(3)
//					perkondisian tidak memenuhi
//					angkaUrutKebalik(3+1)
//					
//					- angkaUrutKebalik(4)
//						perkondisian tidak memenuhi
//						angkaUrutKebalik(4+1)
//						
//						- angkaUrutKebalik(5)
//							perkondisian memenuhi i == 5
//							langsung direturn kosongan
//						- angkaUrutKebalik(4+1) / (5) ---> 0 -> ini lebih ke kosong, tidak menghasilkan angka apapun termasuk 0
//	
//					- angkaUrutKebalik(4)
//						perkondisian tidak memenuhi
//						angkaUrutKebalik(4+1)/(5) ---> 0
//						printf("%d\n", i); ---> 4 -> i nya masih ngambil i yang ada didalam function induk yaitu angkaUrutKebalik(4)
//						
//					- angkaUrutKebalik(4) ---> 4
//	
//				- angkaUrutKebalik(3)
//					perkondisian tidak memenuhi
//					angkaUrutKebalik(3+1)/(4) ----> 4
//					printf("%d\n", i); ----> 3
//	
//				- angkaUrutKebalik(3) ----> 4
//										--> 3
//	
//			- angkaUrutKebalik(2)
//				perkondisian tidak memenuhi
//				angkaUrutKebalik(2+1)/(3) ---> 4
//										-----> 3
//				printf("%d\n", i); ---> 2
//			
//			- angkaUrutKebalik(2) ---> 4
//									-> 3
//									-> 2
//	
//		- angkaUrutKebalik(1)
//			perkondisian tidak memenuhi
//			angkaUrutKebalik(1+1)/(2) ----> 4
//									------> 3
//									------> 2
//			printf("%d\n", i); ----> 1
//		
//		- angkaUrutKebalik(1) ----> 4
//								--> 3
//								--> 2
//								--> 1
//	
//	- angkaUrutKebalik(0)
//		perkondisian tidak memenuhi
//		angkaUrutKebalik(0+1)/(1) ----> 4
//								------> 3
//								------> 2
//								------> 1
//		printf("%d\n", i); ----> 0
//	
//	- angkaUrutKebalik(0) ----> 4
//							--> 3
//							--> 2
//							--> 1
//							--> 0
				
}


int main () {
	
	angkaUrutKebalik(0);
	
//	angkaUrut(0); // mencoba untuk mencetak angka urut 0 --> 4
//	helloWorld(0);


	return 0;
}
