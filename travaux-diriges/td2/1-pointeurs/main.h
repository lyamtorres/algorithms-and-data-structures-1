/* 
            Structures
*/

struct deuxSymb {
    char symb;
    char *adrLettre;
};

/*
            Prototypes des fonctions
*/

// Echange les valeurs entre symb et adrLettre avec une procédure
void permuter(deuxSymb &ds);

// Echange les valeurs entre symb et adrLettre en utilisant une fonction
deuxSymb permuterBis(deuxSymb &ds);

// Saisit un deuxSymb auprès de l'utilisateur avec une procédure
void saisir(deuxSymb &ds);

// Saisit un deuxSymb auprès de l'utilisateur en utilisant une fonction
deuxSymb saisirBis();

// Fait une copie d'un deuxSymb dans un autre
deuxSymb cloner(deuxSymb ds, deuxSymb copieDs);