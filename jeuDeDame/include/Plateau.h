#ifndef PLATEAU_H
#define PLATEAU_H
#include <iostream>
using namespace std;
#include "Rafle.h"
#include "Piece.h"
#include "Case.h"
#include "Joueur.h"
#define CB   0 //CASE_BLANC
#define CN   1 //CASE_NOIRE
#define PN   2 //pion noir
#define PB  -2 //pion blanc
#define DN   3 //DAME_NOIR
#define DB  -3  //DAME_BLANC
///  DEFINITION DE LA CLASSE Plateau///
//class Joueur;
class Rafle;
class Plateau
{
private:
    //Case_noire Case_a_selectionne;
    //Piece piece_selectionne;

    Piece* Damier [8][8] =
    {
        {NULL, new Pion(8,2,1),NULL,new Pion(8,4,1),NULL,new Pion(8,6,1),NULL,new Pion(8,8,1)},
        { new Pion(7,1,1),NULL,new Pion(7,3,1),NULL,new Pion(7,5,1),NULL,new Pion(7,7,1),NULL},
        {NULL,new Pion(6,2,1),NULL,new Pion(6,4,1),NULL,new Pion(6,6,1),NULL,new Pion(6,8,1)},
        {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
        {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
        {new Pion(3,1,0),NULL,new Pion(3,3,0),NULL,new Pion(3,5,0),NULL,new Pion(3,7,0),NULL},
        {NULL,new Pion(2,2,0),NULL,new Pion(2,4,0),NULL,new Pion(2,6,0),NULL,new Pion(2,8,0)},
        {new Pion(1,1,0),NULL,new Pion(1,3,0),NULL,new Pion(1,5,0),NULL,new Pion(1,7,0),NULL}
    };
public:
    Plateau();
    ~Plateau();
    void affichePlateau(void);
    void initPlateau();
    void caseSelect();// pion à deplacer et case à selectionner
  friend class Joueur;
  friend class Rafle;


};


#endif // PLATEAU_H
