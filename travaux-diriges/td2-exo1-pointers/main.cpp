/* 
            1.b - Pointeurs
*/

#include <iostream>
#include "main.h"

using namespace std;


int main() {
    deuxSymb duo, nouvelDuo;


        // Test pour la procédure permuter

    duo.symb = 'G';
    duo.adrLettre = new(char);
    *duo.adrLettre = 'Y';
    permuter(duo);

    cout << "duo.symb: " << duo.symb << endl;
    cout << "duo.adrLettre: " << duo.adrLettre << endl;

    delete duo.adrLettre;
    duo.adrLettre = nullptr;

    return 0;



        // Test pour la procédure permuterBis

/*     duo.symb = 'A';
    duo.adrLettre = new(char);
    *duo.adrLettre = 'B';
    nouvelDuo = permuterBis(duo);

    cout << "duo.symb: " << duo.symb << endl;
    cout << "duo.adrLettre: " << duo.adrLettre << endl;
    cout << "" << endl;
    cout << "nouvelDuo.symb: " << nouvelDuo.symb << endl;
    cout << "nouvelDuo.adrLettre: " << nouvelDuo.adrLettre << endl;

    delete duo.adrLettre;  
    delete nouvelDuo.adrLettre;

    return 0; */



        // Test pour la procédure saisir

/*     duo.adrLettre = new char;
    saisir(duo);

    cout << "duo.symb: " << duo.symb << endl;
    cout << "duo.adrLettre: " << duo.adrLettre << endl;
    
    delete duo.adrLettre;

    return 0; */



        // Test pour la fonction saisirBis

/*     duo = saisirBis();

    cout << "duo.symb: " << duo.symb << endl;
    cout << "duo.adrLettre: " << duo.adrLettre << endl;
    
    delete duo.adrLettre;

    return 0; */



        // Test pour la fonction cloner

/*     duo.symb = 'A';
    duo.adrLettre = new char;
    *duo.adrLettre = 'B';

    nouvelDuo.adrLettre = new char;
    
    nouvelDuo = cloner(duo, nouvelDuo);

    cout << "nouvelDuo.symb: " << nouvelDuo.symb << endl;
    cout << "nouvelDuo.adrLettre: " << nouvelDuo.adrLettre << endl;

    delete duo.adrLettre;
    delete nouvelDuo.adrLettre;

    return 0; */

    // Quel est le problème en faisant l'affectation ?

}

void permuter(deuxSymb &ds) {
    char tmp;
    
    tmp = ds.symb;
    ds.symb = *ds.adrLettre;
    *ds.adrLettre = tmp;
}

deuxSymb permuterBis(deuxSymb &ds) {
    deuxSymb nouvDs;

    nouvDs.symb = *ds.adrLettre; 
    nouvDs.adrLettre = new char;
    *nouvDs.adrLettre = ds.symb;
    return nouvDs;
}

void saisir(deuxSymb &ds) {
    cout << "Saisir le premier symbole: ";
    cin >> ds.symb;
    cout << "Saisir le deuxieme symbole: ";
    cin >> ds.adrLettre;
}

deuxSymb saisirBis() {
    deuxSymb ds;

    cout << "Saisir le premier symbole: " << endl;
    cin >> ds.symb;
    ds.adrLettre = new char;
    cout << "Saisir le deuxieme symbole: " << endl;
    cin >> *ds.adrLettre;
    return ds;
}

deuxSymb cloner(deuxSymb ds, deuxSymb copieDs) {
    copieDs.symb = ds.symb;
    *copieDs.adrLettre = *ds.adrLettre;

    return copieDs;
}

