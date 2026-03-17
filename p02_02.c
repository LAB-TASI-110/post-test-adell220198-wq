#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int N;
    int stok[100];
    char kategori[100][50];
    char cari[50];
    int total = 0;

    printf("Masukkan jumlah data barang: ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("\nData barang ke-%d\n", i + 1);

        printf("Stok barang: ");
        scanf("%d", &stok[i]);

        printf("Kode kategori: ");
        scanf("%s", kategori[i]);
    }

    printf("\nMasukkan kategori yang ingin dihitung: ");
    scanf("%s", cari);

    for(int i = 0; i < N; i++) {
        if(strcmp(kategori[i], cari) == 0) {
            total += stok[i];
        }
    }

    printf("\nTotal stok untuk kategori %s adalah: %d\n", cari, total);

    return 0;
}