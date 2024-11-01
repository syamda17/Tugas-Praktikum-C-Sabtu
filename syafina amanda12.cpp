#include <stdio.h>

int main () {
	int N;
	
	// input dari pengguna
	printf("masukan sebuah bilangan: ");
	scanf("%d", &N);
	
	// cek kondisi
	if (N > 50) {
		N = N - 25;
	} else {
		N = N + 10;
	}
	
	// menampilkan hasil akhir
	printf("N = %d\n", N);
	
	return 0;
}

