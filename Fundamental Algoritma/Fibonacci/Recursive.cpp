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
}


int main () {
	
	angkaUrutKebalik(0);
	
//	angkaUrut(0); // mencoba untuk mencetak angka urut 0 --> 4
//	helloWorld(0);


	return 0;
}
