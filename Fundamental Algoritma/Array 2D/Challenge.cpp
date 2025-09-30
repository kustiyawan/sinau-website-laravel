#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
		// untuk kodingan dibawah saat input kudu harus di enter dulu, ada cara lain dan gak harus di enter
//		scanf("%c", &input);
//		getchar();
		
		// memakai library dari conio.h
		// dengan memakai getch, user tidak harus mengklik enter dan huruf yg di input tidak diperlihatkan dahulu, sekali klik langsung masuk ke variabel
		input = getch();
		
		/// ditambah mekanisme validasi disini, untuk membuat inputan seolah saat klik w, a, s, d akan menggerakkan huruf dari char player
		// w -> atas
		// a -> kiri
		// s -> bawah
		// d -> kanan
		switch(input){ // switch simpelnya fungsinya, saat variabel input diisi yang sesuai hal yang ditentukan didalam switch itu sendiri, 
				// akan mengeksekusi pilihan yang ada didalam sesuai hal yang diinputkan tadi, 
				// seperti ada sebuah pilihan, pilihan ini akan mengeksekusi ini, piliha itu akan mengeksekusi itu
			case 'w':
				if (gerakY > 0)	// karena saat w dipencet bisa menjadi melewati batas dan bisa jadi variabel gerakY menjadi minus -, 
				gerakY -= 1;		// dan seolah olah abjad P dari variable input keluar map bintang2, mngkanya disini dibatesi
								// karena gerakY itu i yang bentuknya meninggi dan pencet w difungsikan ke atas, jadi index bates nya ke -0
								
			break;
			
			case 'a':
				if(gerakX > 0) // begitu juga yg pilihan tombol a, gerakX bentuknya mendatar, dan itu dari kiri, dibatasi di indeks ke -0
				gerakX -= 1;
				/// codingan diatas sama saja dengan gerakX = gerakX -1;, bedanya cuma dipersingkat
			break;
			
			case 's':
				if(gerakY < 4) 
				gerakY += 1;
			
			break;
			
			case 'd':
				if (gerakX < 4)
				gerakX += 1;
				
			break;
		}
		// karena tiap di input membuat bentuk map baru terus / bintang bintang terus, jadi kodingan dibawah diperlukan, untuk membersihkan
		// hasil print yang diulang ulang terakhir
		system("cls");
										
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
