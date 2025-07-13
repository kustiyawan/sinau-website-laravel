#include<stdio.h>
#include<string.h>

int main() {


// coba masuk string 2 dimensi
	char str[20][100];

// penjelasannya seperti ini, yang [20] sebut saja index lah kayak penjelasan array sebelumnya, 
//   index atau urutan lah, nah yang [100] ialah, jumlah char maksimal yang bisa dimasukkan ke dalam index/urutan total [20] tadi, 
//		[100] ini bisa disebut juga jumlah index, yang didalam index [20] 
//		penggambarannya seperti ini
//			index total [20]
//				-> 0,	1,	2,	3,	4,	5,	6,....... sampai 20

//		untuk yang [100] seperti ini
//	ambil contoh index/urutan 0 dari [20]
//		ini index dari [20] ------------------> 0
//			ini index dari [100]           -->> 0,		1,		2,		3,		4,		5, ........ sampai 100

//	ambil contoh index/urutan 1 dari [20]
//		ini index dari [20] ------------------> 1
//			ini index dari [100]           -->> 0,		1,		2,		3,		4,		5, ........ sampai 100

// jadi tiap index pada [20] berisi index juga, dengan masing masing maksimal 100 --> karena ya [100]
// karena ini char jadi [100] tidak sekedar hanya bisa di isi angka saja, char -> berarti semua karakter entah huruf atau simbol

// jadi contoh nya seperti membuat kalimat
// contohnya "Aku adalah Jawir Sejati"

// kalau di bedah dengan konsep array seperti ini dengan [20][100], sesuai contoh kali ini
// ambil contoh index 2 dari [20]
// 			--> "Aku	 adalah		 Jawir		 Sejati"
//			-->	  0,		1,			2,			3
//			--> index 2 berarti "Jawir"
//				--> dibedah lagi -> 
//								-> index 2 
//									berisi ->> J, a, w, i, r --> konteksnya di [100]

// coba di realisasikan
	scanf("%s", str[0]); // isi kata apapun
//	strcpy(str[0], "Hallo");
	printf("%s \n", str[0]);  //-> ini nge-print index/urutan ke - 0
	
	scanf("%s", str[1]);
	printf("%s ", str[0]); printf("%s ", str[1]);
}
