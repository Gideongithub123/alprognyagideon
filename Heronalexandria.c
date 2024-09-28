#include <stdio.h>
#include <math.h>

float mencariAkar(float angka, float tebakan) {
    printf("\nTebakan: %f", tebakan);
    
    // Menggunakan toleransi untuk memeriksa kedekatan
    if (fabs(tebakan * tebakan - angka) < 0.0001) // Toleransi 0.0001
        return tebakan;

    float temp = (tebakan + angka / tebakan) / 2.0;
    return mencariAkar(angka, temp);
}

int main() {
    float angka, tebakan;

    printf("Masukkan angka: ");
    scanf("%f", &angka);

    printf("Masukkan Tebakan: ");
    scanf("%f", &tebakan);

    float hasil = mencariAkar(angka, tebakan); // Gunakan tebakan dari pengguna
    printf("\nAkar mendekati: %f\n", hasil);

    return 0;
}
