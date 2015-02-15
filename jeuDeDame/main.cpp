#include <fstream>
#include <iostream>
#include <string>
#include "Plateau.h"
#include "Joueur.h"
#include <cstdlib>
#include <windows.h>
#include "Piece.h"
#include "Rafle.h"
#include "Arbitre.h"
int help();
int main()
{
    while(1)
    {
         int x,choix;
         cout<<endl;
         cout<<endl;
         cout<<endl;
        cout<<"   ******************************************"<<endl;
        cout<<"   *                                        *"<<endl;
        cout<<"   *                                        *"<<endl;
        cout<<"   *            Bienvenu                    *"<<endl;
        cout<<"   *                                        *"<<endl;
        cout<<"   *      ----------------------            *\n";
        cout<<"   *         * Jeu De Dames *               *\n";
        cout<<"   *      ----------------------            *\n";
        cout<<"   *                                        *"<<endl;
        cout<<"   *                                        *"<<endl;
        cout<<"   *    \t 1-Nouvelle partie          *\n";
        cout<<"   *     \t 2-Help                     *\n";
        cout<<"   *     \t 3-Quitter                  *\n";
        cout<<"   *       votre choix:                     *\n";
        cout<<"   *                                        *"<<endl;
        cout<<"   *                                        *"<<endl;
        cout<<"   *                                        *"<<endl;
         cout<<"   ******************************************"<<endl;
        cin>>choix;
          switch (choix)
          {
          case 1:{
             x=0;
              Arbitre A;
              do{

            A.plateau.affichePlateau();
            Rafle* R= new Rafle(A.joueur1.getCouleur(),0);
            //A.calculCoupObligatoire();
            A.joueur1.deplacer(&A.plateau);
            A.plateau.affichePlateau();
            A.joueur2.deplacer(&A.plateau);
            A.plateau.affichePlateau();
            cout<<endl;
            cout<<endl;
              }while(x==0);


            break;}
          case 2:
              help();
              break;
          case 3:
              exit(0);
          }
          }



}
