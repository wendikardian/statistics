#include <stdio.h>

int main() {
    float pH = 1.0/3.0; // Peluang hujan
    float pTH = 2.0/3.0; // Peluang tidak hujan
    float pPH = 1.0/2.0; // Peluang lalu lintas padat jika hujan
    float pPnH = 1.0/2.0; // Peluang lalu lintas padat jika tidak hujan
    float pTnHP = 1.0/4.0; // Peluang terlambat jika tidak hujan dan padat
    float pTHnP = 1.0/4.0; // Peluang terlambat jika hujan dan tidak padat
    float pTnHnP = 1.0/8.0; // Peluang terlambat jika tidak hujan dan tidak padat

    // Menghitung probabilitas
    float pTT_TH_P = 1.0 - pTHnP;
    float pNTnHPnPH = pTT_TH_P / (pTT_TH_P + pTHnP);

    printf("Peluang tidak terlambat jika tidak hujan dan padat: %f", pNTnHPnPH);

    return 0;
}



