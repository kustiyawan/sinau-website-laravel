#include <stdio.h>
#include <conio.h>

int main() {
	
//	contoh penggunaan scanf("%c", &input); getchar();
    char input;

	printf("ini adalah penggunaan scanf dengan getchar: \n");
    printf("Masukkan satu huruf (lalu tekan ENTER): ");
    scanf("%c", &input);   // baca 1 huruf
    getchar();             // buang ENTER biar gak nyangkut

    printf("Huruf yang kamu masukkan adalah: %c\n", input);
    printf("\n");
//    contoh getch();
	char input_1;

	printf("ini adalah penggunaan getch: \n");
    printf("Tekan satu tombol (tidak perlu ENTER): ");
    input_1 = getch();   // baca langsung tanpa ENTER

    printf("\nHuruf yang kamu masukkan adalah: %c\n", input_1);

    return 0;
}

