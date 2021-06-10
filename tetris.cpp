#include <iostream>
#include "game.h"

int main()
{
    game obj1;
    obj1.play();
    system("PAUSE");
}

/*
Plan:
1) tablica 

2) rysowanie tabeli
3) ustawienie jednego pkt i próba sterowania nim
4) 
    a) wpadanie na ściany
    b) stwrzenie 1 elementu > losowego
    b) blokada elemntu jak dotrze do końca tabeli i podanie następnego klocka
5) powolne opadanie samemu jeśli nie będzie odczytywania klawisza (pytanie jak to rozwiązać skryptowo)
6) 
    a) stworzenie dodatkowych elementów
    b) ewentualna rotacja elementów

PKT dodatowy
    okienko ? -> pkt dodatkowy nie wymagany, na później



2) elementy
zrobić wstępnie 2 elementy przetesować i zobaczyć jak działa
3) spadanie elementów
    sterowanie strzałkami/WSAD 
    pętla która obsługuje spadanie i czytanie ruchów
    pytanie jak rozwiązać czytanie ruchów if i sleep
4) rotacja spacją 
5) eliminacja lvl + wynik
6) 

Klasy:
cell - komórka, 
    przechowuje prawda fałsz - true jeśli element zajmuje pole
board - tablica, wymiary 
gra - uruchomienie i obsługa gry, 
    rysowanie tabeli
    losowanie elemntu do ułożenia
main - uruchomienie programu
*/