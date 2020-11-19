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

t_personne saisirPersonne();

void afficherPersonne(t_personne p);

void saisirGrille(int tableau[], int taille);

void afficherGrille(int tableau[], int taille);

bool estPresent(int tableau[], int taille, int valeur);

void estPresentBis(int tableau[], int taille, int valeur);
