#include <stdio.h>

// lorqu'on define une fonction, il faut distinguer 3 parties:
// - l'entete ou prototype de fonction
// - le corps de la fonction (implementation)
// - l'appel de la fonction
// Exemple: faire meme exo sur les structures
//=============STRUCTURES & VAR GLOBALES===============
typedef struct{
    int j,m,a; 
}DATE;
typedef struct {
    char libelle[25];
    int prix,qte;
    DATE dp;
}PRODUIT;
//================LES PROTOTYPES=====================
DATE saisieDate(void);
// void afficheDate(DATE d);
void afficheDate(DATE,char);// parametre : une date et un separateur.

PRODUIT saisieProduit(void);
void afficheProduit(PRODUIT);


int main(){
    //Appel de Fonction:
    // DATE date;
    // date = saisieDate();
    // afficheDate(date);
    afficheDate(saisieDate(),'/');
    afficheDate(saisieDate(),'-');
    afficheDate(saisieDate(),' ');
    return 0;
}
//================CORPS DE FONCTIONS==================
//Implementation des fonctions (corps de fonction)
DATE saisieDate(void){
   DATE d;
   do{
    puts("Entrer la date : ");
    scanf("%d%d%d",&d.j,&d.m,&d.a);
   }while(d.j <= 0 || d.j > 31 || d.m <=0 || d.m > 12 || d.a <=0);
   
   return d;
}
//
void afficheDate(DATE d,char sep){
    printf("Date : %d%c%d%c%d\n",d.j,sep,d.m,sep,d.a);
}
