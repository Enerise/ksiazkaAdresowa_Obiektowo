#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze{
public:
     static string konwerjsaIntNaString(int liczba);
     static string wczytajLinie();
     static string pobierzLiczbe(string tekst, int pozycjaZnaku);
     static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
     static bool czyPlikJestPusty(fstream &plikTekstowy);
     static int konwersjaStringNaInt(string liczba);
     static int wczytajLiczbeCalkowita();
     static char wczytajZnak();
};

#endif
