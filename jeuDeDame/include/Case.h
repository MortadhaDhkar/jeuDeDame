#ifndef CASE_H
#define CASE_H

#include"Piece.h"

class Case
{
protected:
   int ligne;
   int colonne;

  // Plateau plateau;
  // bool Select;
public:
        Case(int l, int c);
        Case(Case &C);
        ~Case();
        void setcoord(int l , int c);
};
class Case_noire : public Case
{
  Piece* p_piece;
    public:
  // Piece getPiece();
    Case_noire(int l, int c);
    ~Case_noire();
};
class Case_blanc : public Case
{

    public:
 Case_blanc(int l, int c);
 ~Case_blanc();

};
#endif // CASE_H
