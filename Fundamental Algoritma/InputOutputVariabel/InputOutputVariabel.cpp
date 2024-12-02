#include<stdio.h>

int main () {
	
	// int umur = 10;
	
	//printf("Hello World!\nasd"); // \n <--- fungsi tanda itu untuk menambah baris baru
	// printf lebih tepatnya fungsinya untuk mengeluarkan atau mencetak suatu inputan
	
	//scanf()
	
	// contoh dengan inputan
	// printf("Umur Kamu = %d", umur); // printf itu kepanjangan dari print format, jadi setelah sama dengan tampilkan
							// tipe data dari integer maksudnya ini tempat buat menampilkan data dari variabel integer
							// yang disini adalah %d yang merupakan format integer, dilanjutkan setelah tanda " terus tanda ',' kemudian nama variabel
							// dari integer
							
	// contoh lagi untuk melihat penggunaan variabel lainnya
	int angkaBulat = 10;
	float angkaKoma = 1.5f;
	char karakter = 'a';
	char string[100] = "hello"; // untuk string sama memakai char tapi harus di sisipkan berapa maksimal huruf
							// yang bisa di tampung
	
	// untuk format print nya
//	printf("%d\n", angkaBulat); // integer
//	printf("%f\n", angkaKoma); // float
//	printf("%.2f\n", angkaKoma); // ini contoh float yang koma itu, jika ingin menampilkan yang dibelakang
								// koma hanya 2 angka, jika ingin 3, 4 / 5 angka di belakang koma, tinggal
								// ganti saja angkanya, sesuai berapa jumlah angka dibelakang koma yang di inginkan
//	printf("%c\n", karakter); // char, karakter per karakter
//	printf("%s\n", string); // string
	
	// contoh cara penginputan
	int angkaBulatisi; // kondisi lagi jikalau variabel ini sudah di isi diawal semisal jadi int angkaBulatisi = 10; dan ada syntax scanf dibawah
					// data 10 tersebut tidak akan di eksekusi dan akan di timpa data hasil inputan scanf, berlaku juga dengan variabel yang lainnya
	float angkaKomaisi;
	
	char karakterIsi;
	
	char stringIsi[100];
	
	scanf("%d", &angkaBulatisi); // scanf maksudnya meng-scan, jadi inputan akan di isi di %d
							// dan inputan itu akan di pindah ke angkaBulatisi melalui tanda "&"
							// ibarat tanda "&" sebagai penjembatan, %d di input dengan angka, 
							// dikirim ke variabel integer angkaBulatisi melalui &
	printf("%d\n", angkaBulatisi);
	
	printf("\n");
	
	// contoh dengan inputan koma
	scanf("%f", &angkaKomaisi); 
	printf("%.3f \n", angkaKomaisi); // disini akan mencoba membuat bilangan koma dengan angka di belakang koma berjumlah 3 angka di belakang koma
	
	// contoh dengan inputan karakter
	getchar(); //untuk yang char ini ada hal khusus, ada yang namanya input stream, input stream itu seperti kurir yang mengirimkan perintah dari keyboard
			// pada keyboard kita memencet inputan keyboard tersebut akan di kirimkan yang disebut dengan input stream ke dalam program
			// dan untuk kasus char segala bentuk karakter berlaku termasuk klik enter, ambil contoh cetakan dan inputan sebelumnya yaitu inputan angka koma
			// ketika scanf di eksekusi program akan meminta inputan, pasti setelah input kemudian akan di enter, dan enter yang di klik itu masuk kategori karakter pada %c
			// setelah user meng-enter otomatis sistem akan mengira itu inputan dan langsung memasukkan klik enter tadi setelah user nginput di scanf %f, klik enter otomatis masuk pada scanf %c
			// dan ketika di compile dan run, program seakan meng-skip inputan dari karakter padahal sebenarnya sudah di masukkan oleh klik enter sebelumnyak
			// jadi seolah olah tidak di isi apapun padahal sudah terisi klik enter sesudah scanf %f meng-scan angka koma
	
	scanf("%c", &karakterIsi);
	printf("%c", karakterIsi);
	
	printf("\n");
	
	
	//scanf("%s", stringIsi); // beda dengan variabel yang lain, untuk string pakai maupun tidak pakai "&" masih bisa digunakan dan tidak mengalami error, karena string memiliki pointer nya sendiri
			// yaitu nama dari variabel nya udah menjadi wakil sebagai "&", nama variabel yang disini adalah stringIsi udah dijadikan pointer
			// untuk string disini bisa disebut array of character
			// disini "stringIsi" bisa di sebut dengan array pertama sebagai wakil untuk mengetahui karakter karakter lainnya, jadi tidak perlu perantara seperti "&"
			
			// untuk cara scanf yang hanya memakai %s ada kelemahan, jikalau user ingin menginput 2 kata atau lebih, semisal "kawan lama", print yang ditampilkan cuma di "kawan" saja
			// karena fungsi scanf dengan format "%s" hanya membaca input hingga menemukan spasi atau whitespace (spasi, tab, atau newline). 
			// Jadi, ketika kamu memasukkan "kawan lama", scanf hanya membaca "kawan" dan berhenti di spasi, sehingga hanya "kawan" yang tercetak.
	
	getchar();		
	// ada dua cara agar inputan bisa 1 kata lebih 
	// pertama
	// scanf("%[^\n]", stringIsi);
	
	// kedua 
	fgets(stringIsi, sizeof(stringIsi), stdin);
	
	// untuk perbedaannya kentaranya 
		// scanf("%[^\n]"): Tidak menyimpan newline (\n) di akhir string, jadi hasil cetakan tidak akan memiliki baris kosong tambahan setelahnya. 
		// Namun, jika ada input berikutnya menggunakan scanf, karakter newline bisa menyebabkan masalah.
		
		// fgets: Menyimpan newline (\n) di akhir string jika ada tempat yang cukup di buffer. Ini bisa menyebabkan hasil cetakan menampilkan baris kosong setelah teks, 
		// karena newline diinterpretasikan sebagai perintah untuk memindahkan kursor ke baris berikutnya.

	printf("%s", stringIsi);
	
	return 0;
}
