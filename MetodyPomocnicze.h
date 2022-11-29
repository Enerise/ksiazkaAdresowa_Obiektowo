#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze{
public:
     string konwerjsaIntNaString(int liczba);
     static string wczytajLinie();
     string pobierzLiczbe(string tekst, int pozycjaZnaku);
     string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
     bool czyPlikJestPusty(fstream &plikTekstowy);
     int konwersjaStringNaInt(string liczba);
};

#endif
