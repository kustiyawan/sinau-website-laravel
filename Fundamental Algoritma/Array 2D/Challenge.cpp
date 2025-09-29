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
		for (int i = 0; i < 5; i++){	/// perulangan disini terlihat seperti meninggi		
			for (int j = 0; j < 5; j++){ /// perulangan disini terlihat seperti mendatar
			/// untuk menandai player, manipulasi if dibagian ini
			/// ketika angka di variabel gerakX dan gerakY sama dengan i dan j, akan mengprint huruf yg ada pada variabel player
				if (gerakX == j && gerakY == i){
					printf("%c", player);
				} else		
					printf("*");														
			}
			printf("\n");						
		}
		scanf("%c", &input);
		getchar();
		/// ditambah mekanisme validasi disini, untuk membuat inputan seolah saat klik w, a, s, d akan menggerakkan huruf dari char player
		// w -> atas
		// a -> kiri
		// s -> bawah
		// d -> kanan
		switch(input){ // switch simpelnya fungsinya, saat variabel input diisi yang sesuai hal yang ditentukan didalam switch itu sendiri, 
			case 'w':			// akan mengeksekusi pilihan yang ada didalam sesuai hal yang diinputkan tadi, 
								// seperti ada sebuah pilihan, pilihan ini akan mengeksekusi ini, piliha itu akan mengeksekusi itu
								// BERLANJUT PADA VIDEO DI MENIT 17:34
			
		}
										
	}											
	/// 
	
					
	return 0;
	
	/// untuk penggambaran pengulangannya seperti ini
	/// 		j0	j1	j2	j3	j4
	///		i0	*	*	*	*	*
	///		i1	*	*	*	*	*
	///		i2	*	*	*	*	*
	///		i3	*	*	*	*	*
	///		i4	*	*	*	*	*
	
	
}
