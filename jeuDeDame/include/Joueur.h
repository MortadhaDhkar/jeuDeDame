#ifndef Joueur_H
#define Joueur_H
#include<string>
#include"Plateau.h"
class Plateau;
class Joueur
{
private:

    std::string nom;
    int type;
    int couleur;
public:
    int getCouleur();
    void setCouleur();
    std::string setNom();
    void deplacer(Plateau *p);
    void deplacer(int l, int c , Plateau *p );
    Joueur();
    ~Joueur();

};
class Humain : public Joueur
{
public:

   int getType();
   Humain();
   ~Humain();
   void jouer();

};
class Ordinateur : public Joueur
{
public:
   int getType();
   void jouer();
};
#endif
