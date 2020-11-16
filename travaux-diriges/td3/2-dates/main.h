struct Date {
    int annee;
    int mois;
    int jour;
};

void saisirDate(Date &nouvelleDate);

void afficherDate(Date nouvDate, std::string tabJours[], int nbJours, std::string tabMois[], int nbMois); 