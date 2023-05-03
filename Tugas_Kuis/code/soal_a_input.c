#include <stdio.h>

int main() {
    float pH, pTH, pPH, pPnH, pTnHP, pTHnP, pNTnHPnPH;
    // Input peluang dari user
    printf("Masukkan peluang hujan: ");
    scanf("%f", &pH);
    pTH = 1.0 - pH;
    printf("Masukkan peluang lalu lintas padat jika hujan: ");
    scanf("%f", &pPH);
    printf("Masukkan peluang lalu lintas padat jika tidak hujan: ");
    scanf("%f", &pPnH);
    printf("Masukkan peluang terlambat jika tidak hujan dan padat: ");
    scanf("%f", &pTnHP);
    printf("Masukkan peluang terlambat jika hujan dan tidak padat: ");
    scanf("%f", &pTHnP);
    // Menghitung peluang
    float pTT_TH_P = 1.0 - pTHnP;
    pNTnHPnPH = pTT_TH_P / (pTT_TH_P + pTHnP);
    printf("Peluang tidak terlambat jika tidak hujan dan padat: %f", pNTnHPnPH);

    return 0;
}
