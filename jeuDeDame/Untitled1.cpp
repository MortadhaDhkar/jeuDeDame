int max_pion_prises(Case case_i, int couleur, damier* jeu,
listeCases* rafle_max,int* n)
{
	int prises = 0 ; //0 si on peut pas prendre en case_i, 1 sinon
	int prises_p ; //Nombre de prises max en n_case[i]
	int prises_max = 0 ; //Nombre max de prises possibles trouv�
	int np ; //Nb de possibilit� de prendre le max de pions en n_case[i]
	int nb ; //Contient le nombre de possibilit� de prises en case_i

	//Variable d�indice, de boucle
	int i,t,ind=0 ;

	//Variable servant au calcul

	Case n_case[4] ;
	deplacement d ;
	damier cjeu ;
	listeCases* r ;

	if ((nb = pion_prise(case_i.col,case_i.lig,couleur,jeu->plateau,n_case)) !=0)
	{

	//Le pions situ� en case_i peut prendre nb pions
	//On cr�� un copie du jeu qui va nous permettre de simuler les
		coups sans affecter le damier originel
		cjeu = copie_damier(jeu) ;
	//On peut prendre un pion -> prises =1
		prises++ ;
	//Pour chaque possibilit� de prises, on calcul le nombre de
		prises maximales que l�on peut faire
		for(i=0 ;i<nb ;i++)
		{
		//On initialise le nombre de fa�on de faire
			np = 1 ;
		// On alloue de la place
			r = (listeCases*) malloc(sizeof(listeCases)) ;
			r[0] = (listeCases) malloc(sizeof(struct element)) ;
		//On cr�e une variable d�placement et on effectue le deplacement
			d.case_f = n_case[i] ;
			d.case_i = case_i ;
			deplace_pion(couleur,d,1,&cjeu) ;
		//Calcul du nombre de prises max a partir de cette position
prises_p = max_pion_prises(n_case[i],couleur,&cjeu,r,&np) ;
if(prises_p == prises_max && prises_p>0) {
// Il y a d�autre possibilit� de prendre prises_max pion,
mais en passant par un autre endroit
- 8 -III. ANALYSE DU PROBL�ME. : Algorithme de recherche de la ra?e maximale.
for(t=0 ;t<np ;t++) {
// Pour chaque nouvelle possibilit� on cr�e une nouvelle cases dans rafle_max
rafle_max[ind] = (listeCases) malloc(sizeof(struct element)) ;
//On lui affecte les valeurs
rafle_max[ind]->suivante = r[t] ;
rafle_max[ind]->c = case_i ;
ind++ ;
}
// Correction de l�ind
ind-- ;
// On ajoute au nombre de possibilit� les np que l�on vient de trouver
*n=*n+np ;
}
if(prises_p == 0 && prises_max==0) {
// On ne peut plus prendre de pion
// On cr�e le dernier element de la liste
r[0]->c = n_case[i] ;
r[0]->suivante = 0 ;
// On cr�� une nouvelle case dans le tableau
rafle_max[ind] = (listeCases) malloc(sizeof(struct element)) ;
// On lui affecte les valeurs correspondante
rafle_max[ind]->suivante = r[0] ;
rafle_max[ind]->c = case_i ;
// L�indice augmente de 1 car on a trouv� un moyen de faire prises_max
ind++ ;
*n =ind ;
}
if(prises_p > prises_max) {
// On a trouv� np moyen de faire plus de prises
//Il y a np moyen
*n = np ;
prises_max = prises_p ;
//On met dans le tableau tous les possibilit�s qu�on a trouv�es
for(ind=0 ;ind<np ;ind++) {
rafle_max[ind] = (listeCases) malloc(sizeof(struct element)) ;
rafle_max[ind]->suivante = r[ind] ;
rafle_max[ind]->c = case_i ;
}
}
}
}
else {
//Si on ne peut pas prendre, on est en fin de liste, d�o� suivante pointe vers nil
for(t=0 ;t<ind ;t++)
rafle_max[t]->suivante = 0 ;
}
//On retourne le nombre de prises maximales
return prises + prises_max ;
}
