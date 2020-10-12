/* 1 - Pointeurs  - Lyam Torres
 */

#include <iostream>

using namespace std;

struct deuxSymb {
    char symb;
    char adrLettre;
};

void saisir();

deuxSymb saisir2();

void permuter(deuxSymb *ds);

deuxSymb permuter2 (deuxSymb *ds);

// Fonction principale
int main() {
    char *pcar;
    deuxSymb *duo;
    deuxSymb *clone;
    char tmp;
    
/*

    duo = new(deuxSymb);
    *duo = saisir2();
    cout << "duo->symb: " << duo->symb << endl;
    cout << "duo->adrLettre: " << duo->adrLettre << endl;

*/
    duo = new(deuxSymb); // Allocation dynamique
    duo->symb = 'G';
    duo->adrLettre = 'Y';
    clone = duo;
    cout << clone->symb << endl;
    cout << clone->adrLettre << endl;

}

void saisir() {
    deuxSymb *ds;

    ds = new(deuxSymb);
    cout << "Saisir le premier symbole: " << endl;
    cin >> ds->symb;
    cout << "Saisir le deuxieme symbole: " << endl;
    cin >> ds->adrLettre;
    cout << "ds->symb: " << ds->symb << endl;
    cout << "ds->adrLettre: " << ds->adrLettre << endl;
}

deuxSymb saisir2() {
    deuxSymb *ds;

    ds = new(deuxSymb);
    cout << "Saisir le premier symbole: " << endl;
    cin >> ds->symb;
    cout << "Saisir le deuxieme symbole: " << endl;
    cin >> ds->adrLettre;
    return *ds;
}

void permuter(deuxSymb *ds) {
    char tmp;
    
    tmp = ds->symb;
    ds->symb = ds->adrLettre;
    ds->adrLettre = tmp;
    cout << "ds->symb: " << ds->symb << endl;
    cout << "ds->adrLettre: " << ds->adrLettre << endl;
}

deuxSymb permuter2(deuxSymb *ds) {
    char tmp;
    
    tmp = ds->symb;
    ds->symb = ds->adrLettre;
    ds->adrLettre = tmp;
    return *ds; 
}