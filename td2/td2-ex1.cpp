/* 
            1 - Pointeurs
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

// Saisit un deuxSymb auprès de l'utilisateur avec une procédure
void saisir(deuxSymb *ds);

// Saisit un deuxSymb auprès de l'utilisateur en utilisant une fonction
deuxSymb *saisirBis();

// Fait une copie d'un deuxSymb dans un autre
void cloner(deuxSymb *ds, deuxSymb *copieDs);


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


                // Test pour la procédure saisir

    duo = new deuxSymb;
    duo->adrLettre = new char;
    saisir(duo);

    cout << "duo->symb: " << duo->symb << endl;
    cout << "duo->adrLettre: " << duo->adrLettre << endl;
    
    delete duo->adrLettre;
    delete duo;

    return 0;


            // Test pour la fonction saisirBis

    duo = saisirBis();

    cout << "duo->symb: " << duo->symb << endl;
    cout << "duo->adrLettre: " << duo->adrLettre << endl;
    
    delete duo->adrLettre;
    delete duo;

    return 0;
*/

            // Test pour la fonction cloner

    duo = new deuxSymb;
    duo->symb = 'A';
    duo->adrLettre = new char;
    *duo->adrLettre = 'B';

    nouvelDuo = new deuxSymb;
    nouvelDuo->adrLettre = new char;
    
    cloner(duo, nouvelDuo);

    cout << "nouvelDuo->symb: " << nouvelDuo->symb << endl;
    cout << "nouvelDuo->adrLettre: " << nouvelDuo->adrLettre << endl;

    delete duo->adrLettre;
    delete duo;  
    delete nouvelDuo->adrLettre;
    delete nouvelDuo;
}


void permuter(deuxSymb *ds) {
    char tmp;
    
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

void saisir(deuxSymb *ds) { // Existe t-il une méthode pour passer faire l'allocation directement dans la procédure ?
    cout << "Saisir le premier symbole: ";
    cin >> ds->symb;
    cout << "Saisir le deuxieme symbole: ";
    cin >> ds->adrLettre;
}


deuxSymb *saisirBis() {
    deuxSymb *ds;

    ds = new deuxSymb ;
    cout << "Saisir le premier symbole: " << endl;
    cin >> ds->symb;
    ds->adrLettre = new char;
    cout << "Saisir le deuxieme symbole: " << endl;
    cin >> *ds->adrLettre;
    return ds;
}

void cloner(deuxSymb *ds, deuxSymb *copieDs) {
    copieDs->symb = ds->symb;
    *copieDs->adrLettre = *ds->adrLettre;
}

