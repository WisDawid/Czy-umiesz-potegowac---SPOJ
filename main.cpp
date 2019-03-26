#include <iostream>

// Do wykonania zadania u¿yto równie¿ arkuszu kalkulacyjnego
// i notepada pliki znajduja sie w folderze projektu
// Zasada jest taka ¿e w zale¿noœci jaka jest cyfra jednoœci podstawy potegi
// zmienia siê liczba jednosci wyniku potegowania przykladowo
// dla potegi o podstawie 2 liczba jednosci wyniku potegowania bedzie wynosic
// 2,4,8,6
// tak same koncowki beda dla podstawy np. 12, 62, 42
// nastepnie trzeba podzielic wykladnik modulo 4 i reszta tego dzialania odpowiada
// odpowiednio cyfrze jednosci potegi

using namespace std;

int main()
{
    int koncowki[10][4] = {
    {0,0,0,0},
    {1,1,1,1},
    {6,2,4,8},
    {1,3,9,7},
    {6,4,6,4},
    {5,5,5,5},
    {6,6,6,6},
    {1,7,9,3},
    {6,8,4,2},
    {1,9,1,9}
    };

    unsigned int przypadki;
    cin >> przypadki;

    if((przypadki>=1) && (przypadki<=10))
    for(int i=0; i<przypadki;i++)
    {
        int unsigned podstawa;
        int unsigned wykladnik;
        cin >> podstawa;
        cin >> wykladnik;

        cout << koncowki[podstawa%10][wykladnik%4]<<endl; // znajdujemy cyfre jednosci podstawy i reszte z dzielenia
                                                          // wykladnika przez 4 która odpowiada liczbie jednosci danej
                                                          // podstawy
    }

    return 0;
}
