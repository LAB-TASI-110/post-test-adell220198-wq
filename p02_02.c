//
#include <stdio.h>

int main() {
    int N;
    int kategori;
    int stok;
    int kodeCari;
    int total = 0;

    printf("Masukkan jumlah data:");
    scanf("%d", &N);

    printf("Pilih kategori yang ingin dicari\n");
    printf("1 = dasiSD\n");
    printf("2 =Gula\n");
    printf("3 = Rok Pramuka\n");
    printf("4 = Minyak\n");
    scanf("%d", &kodeCari);

    for(int i = 1; i <= N; i++) {
        printf("Masukkan kategori barang: ");
        scanf("%d", &kategori);

        printf("Masukkan stok barang: ");
        scanf("%d", &stok);

        if(kategori == kodeCari) {
            total = total + stok;
        }
    }

    printf("Total stok kategori yang dipilih = %d\n", total);

    return 0;
}