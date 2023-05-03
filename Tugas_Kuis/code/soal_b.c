#include <stdio.h>

void main() {
    float prob_hujan = 1.0/3.0;
    float prob_tidak_hujan = 2.0/3.0;
    float prob_lalin_padat_given_hujan = 1.0/2.0;
    float prob_lalin_padat_given_tidak_hujan = 1.0/4.0;
    float prob_terlambat_given_hujan_dan_padat = 1.0/2.0;
    float prob_terlambat_given_hujan_dan_tidak_padat = 1.0/4.0;
    float prob_terlambat_given_tidak_hujan_dan_padat = 1.0/4.0;
    float prob_terlambat_given_tidak_hujan_dan_tidak_padat = 1.0/8.0;

    float prob_terlambat = prob_terlambat_given_hujan_dan_padat*prob_lalin_padat_given_hujan*prob_hujan
               + prob_terlambat_given_hujan_dan_tidak_padat*(1-prob_lalin_padat_given_hujan)*prob_hujan
               + prob_terlambat_given_tidak_hujan_dan_padat*prob_lalin_padat_given_tidak_hujan*prob_tidak_hujan
               + prob_terlambat_given_tidak_hujan_dan_tidak_padat*(1-prob_lalin_padat_given_tidak_hujan)*prob_tidak_hujan;

    printf("Peluang Andi terlambat = %f", prob_terlambat);

}
