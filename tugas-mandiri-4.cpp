#include <stdio.h>

int main() {
    int kecepatan = 2; // Kecepatan dalam meter per detik
    int waktu = 100;   // Waktu dalam detik
    int jarak = kecepatan * waktu; // Menghitung jarak yang ditempuh
    
    printf("Jarak yang ditempuh: %d meter\n", jarak);
    return 0;
}
