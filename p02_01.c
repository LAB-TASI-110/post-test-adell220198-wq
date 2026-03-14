//
#include <stdio.h>
#include <string.h>

int main() {

    char kota[10];
    float beratButet, beratUcok, totalBerat;
    int tarif;
    float totalOngkos, diskon;

    while (1) {

        printf("\nMasukkan kode kota (MDN/BLG/JKT/SBY) atau END untuk selesai: ");
        scanf("%s", kota);

        if (strcmp(kota, "END") == 0) {
            break;
        }

        printf("Masukkan berat paket Butet (kg): ");
        scanf("%f", &beratButet);

        beratUcok = 1.5 * beratButet;
        totalBerat = beratButet + beratUcok;

        if (strcmp(kota, "MDN") == 0) {
            tarif = 8000;
        }
        else if (strcmp(kota, "BLG") == 0) {
            tarif = 5000;
        }
        else if (strcmp(kota, "JKT") == 0) {
            tarif = 12000;
        }
        else if (strcmp(kota, "SBY") == 0) {
            tarif = 13000;
        }
        else {
            printf("Kode kota tidak valid\n");
            continue;
        }

        totalOngkos = totalBerat * tarif;

        diskon = 0;
        if (totalBerat > 10) {
            diskon = 0.10 * totalOngkos;
        }

        totalOngkos = totalOngkos - diskon;

        printf("\n===== STRUK DEL-EXPRESS =====\n");
        printf("Kota Tujuan       : %s\n", kota);
        printf("Berat Butet       : %.2f kg\n", beratButet);
        printf("Berat Ucok        : %.2f kg\n", beratUcok);
        printf("Total Berat       : %.2f kg\n", totalBerat);
        printf("Total Ongkos      : Rp %.2f\n", totalOngkos);

        if (totalBerat > 10) {
            printf("Promo             : Diskon Lebaran 10%%\n");
        }

        if (strcmp(kota, "JKT") == 0 || strcmp(kota, "SBY") == 0) {
            printf("Bonus             : Asuransi Gratis\n");
        }

        printf("=============================\n");

    }

    printf("\nProgram selesai\n");

    return 0;
}