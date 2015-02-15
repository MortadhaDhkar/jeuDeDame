#ifndef PIECE_H
#define PIECE_H
#include <typeinfo>
#include<string>

///  DEFINITION DE LA CLASSE PIECE (ABSTRAIT)///
class Piece
{
     protected:
        int ligne;
        int colonne;
        int couleur;
     public:
        virtual void deplacer(int l, int c);
        int test_deplacement();
        Piece(int l=1 , int c=1 , int cl=1);
        virtual ~Piece();
        virtual  int getType();//pour le polymorphisme dynamique


};

///  DEFINITION DE LA CLASSE PION///

class Pion : public Piece
{
public:
    Pion (int l=1 , int c=1 , int cl=1);
     virtual ~Pion();
     virtual void deplacer(int l , int c);
  // bool test_deplacement(void);
    int getType(); // retourne 2 pour les pions noirs et -2 pour les pion blancs

};
///  DEFINITION DE LA CLASSE DAME///
class Dame : public Piece
{
public:
    virtual void deplacer(int l , int c);
    Dame(int l, int c, int cl);
   virtual ~Dame();
   bool test_deplacement(void);
    int getType();
};
#endif
