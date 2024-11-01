#include <stdio.h>
int main (){
	int angka;
	// input dari pengguna
	printf("masukan bilangan bulat positif : ");
	scanf("%d", &angka);
	//cek apakah bilangan posistif
	if(angka < 0 ){
		printf("silahkan masukan bilangan bulat positi.\n");
		return 1;//menggantikan program jika input tidak valid
	}
	//cek apakah bilangan genap atau ganjil
	if (angka%2 == 0){
		printf("%d adalah GENAP.\n", angka);
	}else{
		printf("%d adalah GANJIL.\n", angka);
	}
	return 0;
	
}
