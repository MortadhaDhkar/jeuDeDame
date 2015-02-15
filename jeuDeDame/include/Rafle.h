#ifndef RAFLE_H
#define RAFLE_H
//#include <vector>
#include"Case.h"
#include"Joueur.h"
#include"piece.h"
#include"Plateau.h"
class Plateau;
class Rafle
{
private:
   Case   caseDebut;
   Case   caseFin;
   // Rafle     [100];
  // Joueur joueur;
   int couleur;
   int nbr_prise;

  // Piece piece_prise;
public:
   Rafle CalculRafleMaximal();
   int calculRaflesPossible(Plateau P, Rafle* cases_suivantes);
   Rafle(int clr_joueur , int np);
   ~Rafle();
};
#endif // RAFLE_H
