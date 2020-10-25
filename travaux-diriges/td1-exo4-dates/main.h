/*
            Structures
*/

struct Instant {
    int heure;
    int minutes;
    int secondes;
};

/*
            Prototypes des fonctions
*/

// Retourne un instant saisie par l'utilisateur
Instant saisirInstant();

// Affiche la somme de deux instants differents en secondes
void convertir(Instant t1, Instant t2);

// Retourne vrai si val1 < val2 et faux dans le cas contraire
bool comparer(int val1, int val2); 

// Echange l'ordre de val1 et val2 dans l'algorithme
void permuter(int &t1, int &t2, int &tmp);

// Affiche un instant dans un format hh:mm:ss
void afficher(Instant t);

// Avance d'une seconde un instant m 
void avancerUneSeconde(Instant &t);

// Avance d'une seconde un instant m en retournant un nouvel Instant
Instant avancerUneSecondeBis(Instant t);