#include <stdio.h>

int main()
{
    float p_hujan = 1.0 / 3.0;
    float p_tidak_hujan = 2.0 / 3.0;
    float p_lintas_padat_given_hujan = 1.0 / 2.0;
    float p_lintas_padat_given_tidak_hujan = 1.0 / 4.0;
    float p_terlambat_given_hujan_dan_padat = 1.0 / 2.0;
    float p_terlambat_given_hujan_dan_tidak_padat = 1.0 / 4.0;
    float p_terlambat_given_tidak_hujan_dan_padat = 1.0 / 4.0;
    float p_terlambat_given_tidak_hujan_dan_tidak_padat = 1.0 / 8.0;

    float p_T = p_terlambat_given_hujan_dan_padat * p_lintas_padat_given_hujan * p_hujan + p_terlambat_given_hujan_dan_tidak_padat * (1 - p_lintas_padat_given_hujan) * p_hujan + p_terlambat_given_tidak_hujan_dan_padat * p_lintas_padat_given_tidak_hujan * p_tidak_hujan + p_terlambat_given_tidak_hujan_dan_tidak_padat * (1 - p_lintas_padat_given_tidak_hujan) * p_tidak_hujan;

    float p_terlambat_given_hujan = p_terlambat_given_hujan_dan_padat * p_lintas_padat_given_hujan + p_terlambat_given_hujan_dan_tidak_padat * (1 - p_lintas_padat_given_hujan);

    float p_hujan_given_T = p_terlambat_given_hujan * p_hujan / p_T;

    printf("P(Hujan|Terlambat) = %f", p_hujan_given_T);

    return 0;
}