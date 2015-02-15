#include "Rafle.h"
#include"Case.h"
#include"Joueur.h"
#include"piece.h"
#include "Plateau.h"

Rafle::Rafle(int clr_joueur =0, int np =0 ):caseDebut(0,0),caseFin(0,0)
{
    couleur=clr_joueur;
    nbr_prise=np;
}

Rafle::~Rafle()
{
    //dtor
}

/*int Rafle::calculRaflesPossible(Plateau P, Rafle * coups)
{
    int nbr_prise1,nbr_prise2 ,k1=0 , k2=0 ;
    int    cases_suivantes2 [100],cases_suivantes1 [100];

    //for (int l=0 ; l<8; l++)
    //{
        //for (int c=0 ; l<8 ; l++)
        //{
        /// VALABLE POUR LES PIONS BLANCS
            ///PArt1
//repeter:
            int coord,l,c;
            cout<<"lignecolonnee";
            cin>>coord;
             l=coord/10;
             c=coord%10;


           if(P.Damier[l][c]!=NULL)
           {
               int typ= P.Damier[l+1][c+1]->getType() ;

                if (P.Damier[l+1][c+1]==NULL)
                {
                    //on peut deplacer
                    //enregistrer le deplacement possible dans le tableau
                    cases_suivantes[++k1] = (10*(l+1) + c+1 );

               /// break;
                }
                else
                    if (P.Damier[l+1][c+1]->getType()== -2)//si la ces contient un pion de l'adv
                {
                    if(P.Damier[l+2][c+2]==NULL) //si la case L+2;C+2 est vide
                        //on peut manger le pion de  l'adv
                        //enregistrer le deplacement possible dans le tableau
                       /// cases_suivantes[++k1] = (10*(l+1) + c+1 );
                        nbr_prise1++;
                }
           }
           ///Part2
           if(P.Damier[l][c]!=NULL)
           {
                if (P.Damier[l+1][c-1]==NULL)
                {
                    //on peut deplacer
                    //enregistrer le deplacement dans le tableau
                    cases_suivantes1[++k1] = (10*(l+1) + c+1 );
               /// break;
                }
                else
                    if (P.Damier[l+1][c-1]->getType()== -2)//si la ces contient un pion de l'adv
                {
                    if(P.Damier[l+2][c-2]==NULL) //si la case L+2;C+2 est vide
                        //on peut manger le pion de  l'adv
                        nbr_prise2 ++ ;
                }
                nbr_prise = ((nbr_prise1<nbr_prise2)?nbr_prise2:nbr_prise1) ;
           } //goto repeter;

      //  }
    //}
    return 0;
}
*/

int Rafle::calculRaflesPossible(Plateau P, Rafle cases_suivantes[] )
{
    Case cd() , cf();
   // Rafle cases_suivantes1[100];
    int cmp_cs = 0;
    int l=2 , c =1 ,prise=0;
    if(P.Damier[2][1]!=NULL)
    {
        if (P.Damier[l+1][c+1]==NULL)
                {
                    //deplacer

                    cases_suivantes->nbr_prise=prise;
                    cases_suivantes->caseDebut.setcoord(l,c);
                    cases_suivantes->caseDebut.setcoord(l,c+1);
                    cases_suivantes->couleur=P.Damier[l+1][c+1]->getType();

                }
                else cout<<"mouvement impossible";
    }
return 0 ;
}
