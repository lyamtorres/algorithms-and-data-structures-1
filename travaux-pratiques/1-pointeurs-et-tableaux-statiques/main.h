#include <string>

/* 

            Structures

*/

struct t_date {
    int annee;
    int mois;
    int jour;
};

struct t_personne {
    std::string nom;
    std::string prenom;
    t_date dateNaissance;
    std::string adresse[3];
};


/*

            Prototypes des fonctions

*/

t_personne saisirPersonne();

void afficherPersonne(t_personne p);
