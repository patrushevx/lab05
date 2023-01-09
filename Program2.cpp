// Sortowanie przez wybór (Selection sort)
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){ 
    int *tab, ilosc, min; // rezerwuje miejsce w pamięci dla tablicy oraz długość tablicy

    cout<<"(?) Podaj ilosc liczb do sortowania: ";
    cin>>ilosc;
    tab = new int [ilosc]; // tworzy tablicę w zarezerwowanym miejscu o zadanym rozmiarze
    
    srand(time(NULL)); // tworzy "pattern" dla losowanie liczb
    cout<<"(+) Tablica o dlugosci "<<ilosc<<" stworzona."<<endl;
    cout<<" | Elementy tablicy: ";
    for (int i = 0; i < ilosc; i++){ // pętla wylosowanie liczb do tablicy
        tab[i] = rand() % 10; // zapisuje do zmiennej tab[i] wylosowaną liczbę z zakresu od 0 do 90
        cout<<tab[i]<<" ";
    }cout<<endl;

    for(int i = 0; i < ilosc ; i++) {  // pętla sprawdzająca każdy element
        min = i;
        for(int j = i+1; j < ilosc; j++) // pętla która sprawdza następny element
            if(tab[j] < tab[min]) // jeżeli następny element jest mniejszy to zapisujemy jego index do zmiennej min
                min = j;
        swap(tab[i], tab[min]); // zamiana elementu większego na mniejszy
    } 
    
    cout<<"(+) Tablica posortowana!\n | ";
    for(int i=0;i<ilosc;i++)
        cout<<tab[i]<<" "; //wypisanie posortowanych elementów 
    cout<<endl;
    
    return 0;
}