/* Pointeurs  - Lyam Torres
 */

#include <iostream>

using namespace std;

struct deuxSymb {
    char symb;
    char *adrLettre;
};


// Echange les valeurs entre symb et adrLettre avec une procédure
void permuter(deuxSymb *ds);

// Echange les valeurs entre symb et adrLettre en utilisant une fonction
deuxSymb *permuterBis(deuxSymb *ds);

/* void saisir(); */

// Saisit un deuxSymb auprès de l'utilisateur en utilisant une fonction
deuxSymb *saisirBis();


// Fonction principale
int main() {
    deuxSymb *duo;
    deuxSymb *nouvelDuo;

/*  
        // Test pour la procédure permuter

    duo = new(deuxSymb);
    duo->symb = 'G';
    duo->adrLettre = new(char);
    *duo->adrLettre = 'Y';
    permuter(duo);

    cout << "duo->symb: " << duo->symb << endl;
    cout << "duo->adrLettre: " << duo->adrLettre << endl;

    delete duo->adrLettre;
    duo->adrLettre = nullptr;
    delete duo; 
    duo = nullptr;

    return 0;


        // Test pour la procédure permuterBis

    duo = new(deuxSymb);
    duo->symb = 'A';
    duo->adrLettre = new(char);
    *duo->adrLettre = 'B';
    nouvelDuo = permuterBis(duo);

    cout << "duo->symb: " << duo->symb << endl;
    cout << "duo->adrLettre: " << duo->adrLettre << endl;
    cout << "" << endl;
    cout << "nouvelDuo->symb: " << nouvelDuo->symb << endl;
    cout << "nouvelDuo->adrLettre: " << nouvelDuo->adrLettre << endl;

    delete duo->adrLettre;
    delete duo;  
    delete nouvelDuo->adrLettre;
    delete nouvelDuo;

    return 0;
*/

}


void permuter(deuxSymb *ds) {
    char tmp = '';
    
    tmp = ds->symb;
    ds->symb = *ds->adrLettre;
    *ds->adrLettre = tmp;
}

deuxSymb *permuterBis(deuxSymb *ds) {
    deuxSymb *nouvDs = new deuxSymb;

    nouvDs->symb = *ds->adrLettre; 
    nouvDs->adrLettre = new char;
    *nouvDs->adrLettre = ds->symb;
    return nouvDs;
}

/*

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


deuxSymb *saisirBis() {
    deuxSymb *ds;

    ds = new(deuxSymb);
    cout << "Saisir le premier symbole: " << endl;
    cin >> ds->symb;
    ds->adrLettre = new(char);
    cout << "Saisir le deuxieme symbole: " << endl;
    cin >> ds->adrLettre;
    return ds;
}

*/