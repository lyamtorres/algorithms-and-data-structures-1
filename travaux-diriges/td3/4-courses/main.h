int const nombreCases(100);

struct Article {
    std::string nom;
    bool estCoche; 
};

struct ListeDeCourses {
    Article articles[nombreCases];
    int casesOccupees; 
};

void afficherListe(ListeDeCourses l);

// Précondition : La liste doit être initialisée
void decocherArticles(ListeDeCourses &l);

// Précondition : liste.nb_items < NB_ARTICLE
void ajouterArticle(Article tab[], int taille, int &occupees, Article p);

// Précondition : Il existe bien un article de ce nom dans la liste 
void supprimerArticle(Article tab[], int taille, int pos);

void cocherDecocher(Article tab[], int taille, int occupees, int k);