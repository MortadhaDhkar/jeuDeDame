#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
int help()
{
   /* ifstream fichier("help.txt", ios::in);  // on ouvre en lecture
    if(fichier)  // si l'ouverture a fonctionné

    {

        fichier.seekg(0,ios::beg); // curseur au début

        int compteur = 0;
        int valeur = 0;
        int pos = 0;               // variable qui stocke la position du curseur
        fichier.seekg(0,ios::end); // curseur a la fin
        int pos_fin = fichier.tellg();     // variable affectée de la position de fin
        fichier.seekg(0,ios::beg); // curseur au début
        string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
        int tableau[valeur];
        while(getline(fichier, contenu))  // tant que l'on peut mettre      la ligne dans "contenu"
        {
            tableau[valeur] = compteur;

            getline(fichier, contenu);
            cout << contenu << endl;  // on affiche contenu
            cout << fichier.tellg() << endl;  // position du curseur
            fichier.seekg(0,ios::end); // curseur à la fin
            compteur++;                // incrémentatiion compteur
            cout << compteur << endl;  // on affiche compteur
            cout << fichier.tellg() << endl;  // position du curseur

            for( compteur = 0; valeur < compteur; compteur++ )

            {
                cout << tableau[valeur] << endl;  // position du curseur

            }

            fichier.close();
        }

    }


    else

    {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;*/
    {
   FILE * pFile;
   char buffer [100];

   pFile = fopen ("help.txt" , "r");
   if (pFile == NULL) perror ("Error opening file");
   else
   {
     while ( ! feof (pFile) )
     {
       if ( fgets (buffer , 100 , pFile) == NULL ) break;
       fputs (buffer , stdout);
     }
     fclose (pFile);
   }
   return 0;
}
}
