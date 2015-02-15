#include <Plateau.h>
#include "Rafle.h"
///  DEFINITION DE LA CLASSE arbitre ///
class Rafle;
class Arbitre
{
public:
    void finDePartie();
    void calculCoupObligatoire();
//    joueur joueurActif();
    friend class Rafle;
    Arbitre();
    ~Arbitre();

//private:
    Joueur joueur1;
    Joueur joueur2;
    Plateau plateau;

   /* vector Coups;
    Rafle Coup_courant;
    Rafle Coup_suivant;
    HistoriqueCoup anciens_coups;
    JeuDeDameWindow fenetre;
*/

};
