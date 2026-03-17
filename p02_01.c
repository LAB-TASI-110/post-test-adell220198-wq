#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char kode[10];
    char kota[20];

    float beratButet;
    float beratUcok;
    float totalBerat;

    int ongkirPerKg;
    float totalOngkir;

    int luarPulau;

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%f", &beratButet);

        beratUcok = 1.5 * beratButet;
        totalBerat = beratButet + beratUcok;

        luarPulau = 0;

        if (strcmp(kode, "MDN") == 0) {
            strcpy(kota, "Medan");
            ongkirPerKg = 8000;
        }
        else if (strcmp(kode, "BLG") == 0) {
            strcpy(kota, "Balige");
            ongkirPerKg = 5000;
        }
        else if (strcmp(kode, "JKT") == 0) {
            strcpy(kota, "Jakarta");
            ongkirPerKg = 12000;
            luarPulau = 1;
        }
        else if (strcmp(kode, "SBY") == 0) {
            strcpy(kota, "Surabaya");
            ongkirPerKg = 13000;
            luarPulau = 1;
        }
        else {
            printf("Kode kota tidak valid\n\n");
            continue;
        }

        totalOngkir = totalBerat * ongkirPerKg;

        int dapatPromo = 0;

        if (totalBerat > 10 && luarPulau == 1) {
            dapatPromo = 1;
            totalOngkir = totalOngkir * 0.9;
        }

        printf("===== STRUK PEMBAYARAN =====\n");
        printf("Kota Tujuan        : %s\n", kota);
        printf("Berat Paket Butet  : %.2f kg\n", beratButet);
        printf("Berat Paket Ucok   : %.2f kg\n", beratUcok);
        printf("Total Berat        : %.2f kg\n", totalBerat);
        printf("Total Ongkir       : Rp %.2f\n", totalOngkir);

        if (dapatPromo) {
            printf("Promo              : Diskon 10%% + Asuransi Gratis\n");
        }
        else {
            printf("Promo              : Tidak ada promo\n");
        }

        printf("\n");
    }

    return 0;
}