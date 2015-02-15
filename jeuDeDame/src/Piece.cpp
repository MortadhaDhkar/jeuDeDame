#include "Piece.h"
#include<iostream>
using namespace std;
Piece::Piece(int l, int c, int cl)
{
    ligne =l;
    colonne = c;
    couleur = cl;
}

  Piece::~Piece()
{

}


//int Piece::test_deplacement(int l , int c)
//{

//}
 Pion::Pion(int l, int c, int cl):Piece(l,c,cl)
{
}
 Pion::~Pion()
{

}
 Dame::Dame(int l, int c, int cl):Piece(l,c,cl)
{
}
 Dame::~Dame()
{

}
int Piece::getType()
{
    return 9;
}
int Pion::getType()
{
    if (this->couleur==0) //pion noir
        return 2;
    if (this->couleur==1) //pion blanc
        return -2;
}


int Dame::getType()
{
    if (this->couleur==0) //Dame noir
        return 3;
    if (this->couleur==1) //Dame blanc
        return -3;
}
void Piece::deplacer(int l , int c)
{
    ligne=l;
    colonne=c;
}
void Pion::deplacer(int l , int c)
{
    Piece::deplacer(l,c);
}
void Dame::deplacer(int l , int c)
{

    Piece::deplacer(l,c);
}
