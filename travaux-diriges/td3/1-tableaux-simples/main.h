struct t_tabR {
    unsigned int capa;
    float *cases;
};

void permutation(float tab[], int taille);

void afficher(float tab[], int taille);

// Pré-conditions: desReels.cases doit être alloué et desReels.capa doit représenter sa taille
void modifierTableau(t_tabR &tableauReels);

// Pré-conditions: Le nombre de cases doit être supérieur à 0
void saisirTableau(t_tabR &nouveauTableau);
