struct t_tabR {
    int capa;
    float *cases;
};

void permutation(float tab[], int taille);

void afficher(float tab[], int taille);

// Pré-conditions: L'indice doit être supérieur ou égal à 0 et inferieur à la taille du tableau
void modifierTableau(t_tabR &tableauReels);

// Pré-conditions: Le nombre de cases doit être supérieur à 0
void saisirTableau(t_tabR &nouveauTableau);