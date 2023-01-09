#include <stdio.h>

#define GODZINA 40
#define NADGODZINY 40
#define PODATEK1200 0.15
#define PODATEK_RESZTA 0.25

int main(void)
{
    float liczba_godzin;
    float wynik1, wynik2, wynik3, wynik4;
    float wynagrodzenie_brutto, wynagrodzenie_netto, podatek;
    wynagrodzenie_brutto = wynagrodzenie_netto = podatek = 0;

    printf("Podaj liczbe przepracowanych godzin: ");
    scanf("%f", &liczba_godzin);

    if (liczba_godzin <= NADGODZINY){
        wynik1 = liczba_godzin * GODZINA;
        if (wynik1 >=1200){
            wynik2=wynik1-(1200*PODATEK1200);
            printf("%1.0f\n", wynik2);
        }
        else{
            printf("%1.0f\n", wynik1);
        }

    }

    else{
        int netto = liczba_godzin * GODZINA;
        if (netto >= 1800){
            int wynik1=15*netto+5*(netto-1200)*(netto>=1200)+5*(netto-1800)*(netto>=1800);
            float wynik3 = ((netto*100)-wynik1)/100;
            printf("%1.0f\n", wynik3);
        }
        else{
            wynik1 = liczba_godzin * GODZINA;
            wynik2=wynik1-((1200*PODATEK1200)+((wynik1-1200)*PODATEK_RESZTA));
            printf("%1.0f\n", wynik2);
        }
    }
    return 0;

}
