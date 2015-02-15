#include "Case.h"
#include "Piece.h"
Case::Case(int l=0, int c=0)
{
    setcoord(l,c);
}
Case::Case(Case &C)
{
    ligne=C.ligne;
    colonne=C.colonne;
}
Case_noire::Case_noire(int l, int c):Case(l,c)
{
    p_piece=new Piece(l,c);
}
Case_blanc::Case_blanc(int l, int c):Case(l,c)
{

}
Case::~Case()
{
    //dtor
}
void Case::setcoord(int l , int c)
{
     ligne=l;
    colonne=c;
}
