#include<stdio.h>

int main (){
	/// buat contoh game sederhana, membuat gerakan atas bawah kanan kiri, dengan w a s d
	char map [6][6] = {
					"*****", /// ini termasuk string literal, modelnya langsung digabung semua ditengah 2 tanda petik
					"*****", /// jadi panjang array harus dilebihkan satu, karena pada bahasa C di string literal ada tambahan \0 (null terminator) diakhir yang tidak terlihat
					"*****", // kalau dimanualkan jadi seperti ini '*' '*' '*' '*' '*' '\0'
					"*****", // kalau ingin tetep panjang array yang direncanakan, pake string manual diatas
					"*****",							// seperti ini {'*','*','*','*','*'},
					};
					
	/// buat koordinat, mendatar dan meninggi
	int gerakX = 0; // mendatar
	int gerakY = 0; // meninggi
	char player = 'P';
	char input;
	
	while(true) { /// memakai while biar membuat perulangan terus menerus, dimasukkan (true) untuk syarat pemenuhan melakukan looping
		for (int i = 0; i < 5; i++){			/// untuk penggambaran pengulangan disamping
			for (int j = 0; j < 5; j++){		/// 		j0	j1	j2	j3	j4
												///		i0	*	*	*	*	*
												///		i1	*	*	*	*	*
			}									///		i2	*	*	*	*	*
		}										///		i3	*	*	*	*	*
	}											///		i4	*	*	*	*	*
	/// berlanjut di menit video 15:42 judul array 2D
	
					
	return 0;
}
