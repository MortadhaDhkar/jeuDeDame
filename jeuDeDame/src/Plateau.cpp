#include "Plateau.h"
#include "Piece.h"
#include<cstring>
//void color(int k);
#include <windows.h>
using namespace std;
Plateau::Plateau()
{

}

Plateau::~Plateau()
{
    //dtor
}

void Plateau::affichePlateau()
{

    int k=0;
std::string T;
cout<<"\n";
    cout<<"  0   1   2   3   4   5   6   7       \n" ;
    //cout<<"---------------------------------"<<endl;
    cout<<endl;
        //cout<<Damier[1][1]->getType();
    for (int i =0 ; i<8;i++)
    { cout<<"---------------------------------"<<endl;
        for(int j =0 ;j<8;j++)
        {
            if (Damier[i][j]!=NULL)


           switch(Damier[i][j]->getType())
            {
                case PN :
                cout<<"| O " ;
                break ;
                case PB :
                cout<<"| X " ;
                break ;
                case DB :
                cout<<"| [X] " ;
                break ;
                case DN :
                cout<<"| [O] " ;
                break ;
                default :
                cout<<"|   " ;
                break ;
            }
            if (Damier[i][j]==NULL)
                cout<<"|   " ;
        }

        cout<<"  "<<k++<<endl;}
         cout<<"---------------------------------"<<endl;
    }



void Plateau::initPlateau()
{
 /*   for (int i =0;i<4;i++)
   {
       for (int j =0;i<8;i++)
        {
              if (damier[i][j]==2)
              Damier[i][j]= new Pion(i,j,0);
              else Damier[i][j]=NULL;
        }
   }
   for (int i =4;i<8;i++)
   {
       for (int j =0;i<8;i++)
        {
              if (damier[i][j]==-2)
              Damier[i][j]= new Pion(i,j,1);
              else Damier[i][j]=NULL;
        }
   }*/
}


void Plateau::caseSelect()//deplacer la piece
{
   /* int coor;//nombre saisie par l'utilisateur
    int Dl,Dc;//ligne et colonne de damier
    int l,c;//ligne et colonne de la piece
   cout<<"piece à deplacer (lignecolonne) = ";
   cin>>coor;
   l=coor/10;
   c=coor%10;
   cout<<endl;
   cout<<"case où vous voulez mettre (lignecolonne) = ";
   cin>>coor;
   Dl=coor/10;
   Dc=coor%10;
   if ((Damier[l][c]!=NULL)&&(Damier[Dl][Dc]==NULL))
{
    Damier[Dl][Dc]=Damier[l][c];//deplacer la piece vers la case desiré
    Damier[l][c]=NULL;



}*/



}


