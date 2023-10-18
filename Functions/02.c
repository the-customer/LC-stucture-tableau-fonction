#include <stdio.h>
#define VIDER fflush(stdin);
#define MAX_PROD 10
#define SCREEN_LENGTH 50
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
typedef struct{
    char nom[20], adresse[30];
    PRODUIT tabProd[MAX_PROD];
    int nbProd; //le nombre reel de produits dans l'entrepot
}ENTREPOT;
//================LES PROTOTYPES=====================
DATE saisieDate(char[]);
// void afficheDate(DATE d);
void afficheDate(DATE,char);// parametre : une date et un separateur.

PRODUIT saisieProduit(void);
void afficheProduit(PRODUIT);
//
ENTREPOT saisieEntrepot(void);
void afficheEntrepot(ENTREPOT);
//
void remplirTabProduits(PRODUIT[],int);
void afficheTabProduits(PRODUIT[],int);
//
int saisieEntier(int,int,char[]);
void ligne(char, int);
void titre(char, int,char[]);


int main(){
    //Appel de Fonction:
    // DATE date;
    // date = saisieDate();
    // afficheDate(date);
    // afficheDate(saisieDate(),'/');
    // afficheDate(saisieDate(),'-');
    // afficheDate(saisieDate(),' ');
    // afficheEntrepot(saisieEntrepot());
    ligne('+',SCREEN_LENGTH);
    puts("----------> BIENVENUE CHEZ CHEF BREUKH <----------");
    ligne('+',SCREEN_LENGTH);

    afficheProduit(saisieProduit());

    ligne('+',SCREEN_LENGTH);

    return 0;
}
//================CORPS DE FONCTIONS==================
//Implementation des fonctions (corps de fonction)
DATE saisieDate(char msg[]){
   DATE d;
   do{
    puts(msg);
    scanf("%d%d%d",&d.j,&d.m,&d.a);
   }while(d.j <= 0 || d.j > 31 || d.m <=0 || d.m > 12 || d.a <=0);
   
   return d;
}
//
void afficheDate(DATE d,char sep){
    printf("%d%c%d%c%d\n",d.j,sep,d.m,sep,d.a);
}
//
void ligne(char motif, int longueur){
    for (int i = 0; i < longueur; i++)
    {
        printf("%c",motif);
    }
    puts("");
}
//
PRODUIT saisieProduit(void){
    PRODUIT p;
    VIDER
    puts("Entrer le libelle du produit:");
    gets(p.libelle);
    p.prix = saisieEntier(1,1,"Entrer le prix du produit");
    p.qte = saisieEntier(0,0,"Entrer la quantite du produit");
    p.dp = saisieDate("Entrer la date de peremption: ");
    return p;
}
//
void afficheProduit(PRODUIT p){
    printf("%15s%10s%10s %10s\n","LIBELLE","PRIX","QUANTITE","DATE");
    ligne('*',46);

    printf("%15s%10d%10d ",p.libelle,p.prix,p.qte);
    afficheDate(p.dp,'/');
    ligne('*',46);
}
//
ENTREPOT saisieEntrepot(void){
    ENTREPOT e;
    int i;
    VIDER
    puts("Entrer le nom de l'entrepot:");
    gets(e.nom);
    puts("Entrer l'adresse de l'entrepot:");
    gets(e.adresse);
    e.nbProd = saisieEntier(1,MAX_PROD+1,"Entrer le nombre de produits de l'entrepot:");
    remplirTabProduits(e.tabProd,e.nbProd);
    return e;
}
//
void afficheEntrepot(ENTREPOT e){
    printf("NOM : %s\n",e.nom);
    printf("ADRESSE : %s\n",e.adresse);
    afficheTabProduits(e.tabProd,e.nbProd);
}
//
void remplirTabProduits(PRODUIT T[],int taille){
    for (int i = 0; i < taille; i++)
    {
        printf("Saisie du produit %d\n",i+1);
        printf("--------------------\n");
        T[i] = saisieProduit();
    }
}
//
int saisieEntier(int min,int max, char msg[]){
    int e;
    if(min < max){
        do{
            puts(msg);
            scanf("%d",&e);
        }while(e < min || e >= max);
    }else{
        do{
            puts(msg);
            scanf("%d",&e);
        }while(e < min);
    }
    
    return e;
}

void afficheTabProduits(PRODUIT T[],int taille){
    printf("---La liste de produits (%d)----\n",taille);
    for (int i = 0; i < taille; i++)
    {
        afficheProduit(T[i]);
        puts("________________________");
    }
}