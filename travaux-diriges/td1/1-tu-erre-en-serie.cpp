/* 
            1.a - Tu erre en série
*/

#include <iostream>

using namespace std;

struct Serie {
    string nom;
    int anneeCreation;
};

struct Saison {
    Serie origine;
    int annee;
    int numero;
    int nbEpisodes;
};

struct Episode {
    Saison provenance;
    int numero;
    string titre;
};

int main() {
    // Algorithme démoun
    Serie h50, h50bis;
    int an;

    h50.nom = "Hawaii 5.0";
    an = 1968;
    h50.anneeCreation = an;
    h50bis.nom = h50.nom;
    h50.anneeCreation = an + 42;
    cout << "nouvelle serie " << h50bis.nom  << " en " << h50.anneeCreation << endl;
    return 0;

/*
    // Algorithme démodeux
    Saison ST1;

    ST1.annee = 1966;
    ST1.numero = 1;
    ST1.nbEpisodes = 29;
    ST1.origine.nom = "Star Trek";
    ST1.origine.anneeCreation = ST1.annee;
    cout << ST1.origine.nom << " saison " << ST1.numero << endl;
    return 0;
*/
}
