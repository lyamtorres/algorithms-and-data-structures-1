#include <string>

struct CategorieTVA {
    std::string nom;
    float taux;
};

struct Produit {
    std::string nom, societe;
    float prixHT;
    CategorieTVA *catTVA; 
};

float calculerTTC(Produit p);

void saisirProduit(Produit &p, CategorieTVA &catTVA);

void saisirProduitBis(Produit &p, CategorieTVA *tReduit, CategorieTVA *tIntermediaire, CategorieTVA *tNormal);