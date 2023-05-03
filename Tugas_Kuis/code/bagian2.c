#include <stdio.h>

int main()
{
    float prob30min = 0.95;
    float prob1min = prob30min / 30;
    float prob10min = prob1min * 10;

    printf("Peluang melihat mobil dalam 10 menit adalah %.2f%%", prob10min * 100);

    return 0;
}