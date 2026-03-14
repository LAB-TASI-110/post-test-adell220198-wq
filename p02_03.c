//
#include <stdio.h>

int main()
{
    int kode, jumlah;
    int harga[5] = {15000,12000,18000,5000,10000};
    char menu[5][20] = {"Nasi Goreng","Mie Goreng","Ayam Geprek","Es Teh","Jus Alpukat"};
    int subtotal;
    int total = 0;
    char lagi;

    printf("Menu Kafetaria IT Del\n");
    for(int i=0;i<5;i++)
    {
        printf("%d. %s %d\n", i+1, menu[i], harga[i]);
    }

    do
    {
        printf("Masukkan kode menu: ");
        scanf("%d", &kode);

        printf("Masukkan jumlah: ");
        scanf("%d", &jumlah);

        subtotal = harga[kode-1] * jumlah;
        printf("%s %d = %d\n", menu[kode-1], jumlah, subtotal);

        total = total + subtotal;

        printf("Tambah pesanan (y/t): ");
        scanf(" %c", &lagi);

    } while(lagi=='y' || lagi=='Y');

    printf("Total bayar: %d\n", total);

    return 0;
}