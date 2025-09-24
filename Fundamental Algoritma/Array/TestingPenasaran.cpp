#include<stdio.h>

/// disini cuma testing, sekedar penasaran
int main () {
	
	char kotak_1[20];
	char kotak_2[20];
	char kotak_3[20];
	char kotak_4[20];
	
	scanf("%[^\n]", kotak_1);
	getchar();
	scanf("%[^\n]", kotak_2);
	scanf("%[^\n]", kotak_3);
	scanf("%[^\n]", kotak_4);
	
	printf("ini kotak 1: %d \n", kotak_1);
	printf("ini kotak 2: %d \n", kotak_2);
	printf("ini kotak 3: %s \n", kotak_3);
	printf("ini kotak 4: %s \n", kotak_4);
	
}
