#include "Joueur.h"
#include "Plateau.h"
#include <iostream>
using namespace std;
///choix de nom de joueur///
std::string Joueur::setNom()
{
    do{
    cout<<"entrer le nom de joueur:";
    cin>>nom;
    }while(nom.size()>=10);

   return nom;
}
///choix de couleur de joueur///
void Joueur::setCouleur()
{   int clr ;

do{
    cout<<"choix de couleur : taper 0 pour Noir [X] ou 1 pour Blanc [O]"<<endl;
    cin>>clr;
    }while (!((clr==1)||(clr==0)));

    switch(clr)
    {
        case 0 : cout<<"vous avez choisie les pions Noirs [X]"<<endl;break;
        case 1 : cout<<"vous avez choisie les pions Blanc [O]"<<endl;break;
    }
 couleur=clr;

}
///retouner le couleur de joueur///
int Joueur::getCouleur()
{
    return couleur;
}
///constructeur & destructeur///
Joueur::Joueur()
{
    setNom();
    setCouleur();
}
Joueur::~Joueur()
{

}
///deplacement des pieces de joueur///
void Joueur::deplacer(Plateau *p)
{
     int coor;//nombre saisie par l'utilisateur
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
   if ((p->Damier[l][c]!=NULL)&&(p->Damier[Dl][Dc]==NULL))
{
    p->Damier[Dl][Dc]=p->Damier[l][c];//deplacer la piece vers la case desiré
    p->Damier[l][c]=NULL;
}
}

///DEPLACER///
/*void deplacer(int l, int c , int Dl , int Dc , Plateau *p )
{
     if ((p->Damier[l][c]!=NULL)&&(p->Damier[Dl][Dc]==NULL))
{
    p->Damier[Dl][Dc]=p->Damier[l][c];//deplacer la piece vers la case desiré
    p->Damier[l][c]=NULL;
}
}
*/
