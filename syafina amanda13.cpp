#include <stdio.h>

int main() {
	int N;
	// input dari pengguna 
	printf("masukan sebuah bilangan : ");
	scanf("%d , &N");
	//cek kondisi
	if (N > 50) {
		N = N - 25;
		N = N + 10;
	} else {
		N = N + 10;
	}
	// output hasil =
	printf(" N = %d\n", N);
	
	return 0;
}

