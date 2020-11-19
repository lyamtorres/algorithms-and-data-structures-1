struct Produit {
    std::string nomProduit;
    bool coche; 
};

// Permet de cocher ou decocher un element d'indice k dans la liste
void cocherDecocher(Produit tab[], int taille, int occupees, int k);

// Permet de décocher tout les éléments de la liste
void decocherTout(Produit tab[], int taille);

void afficherListe(Produit tab[], int taille);

void ajouterArticle(Produit tab[], int taille, int &occupees, Produit p);

void supprimerArticle(Produit tab[], int taille, int pos);