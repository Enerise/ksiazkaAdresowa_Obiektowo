#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <fstream>

#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer{

    PlikZAdresatami plikZAdresatami;
public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

};

#endif
