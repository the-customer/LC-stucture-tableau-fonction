#include <stdio.h>
/**
Faire un programme qui permet de saisir une suite de N
entiers positfs.
Le programme affiche la somme de tous les entiers
premiers et le nombre d'entiers parfaits
**/

int main(){
    int n; //la quantite de nombres
    int e; //les valeurs a saisir
    int somPrem=0; //la somme des nombres premiers
    int cptParf=0;// le compteur de nombre parfait
    int cpt;//le compteur de diviseurs de chaque nombre e
    int som; //la somme des diviseurs de chaque nombre e
    int i,j;
    //
    do{
        puts("Entre la quantite de nombre a saisir:");
        scanf("%d",&n);
    }while(n <= 0);
    //
    for (i = 0; i < n; i++){ //Faire ce qui suit n fois
        do{
            puts("Entrer un entier positif:");
            scanf("%d",&e);
        }while(e<=0);
        cpt = 0;
        for(j=1;j<=e;j++){
            if(e % j == 0){
                cpt++;
            }
        }
        if(cpt == 2){
            somPrem += e;
        }
        //
        som = 0;
        for(j=1;j<e;j++){
            if(e % j == 0){
                som+=j;
            }
        }
        if(som == e){
            cptParf += 1;
        }
    }
    //
    printf("La somme des nombres premiers est : %d\n",somPrem);
    printf("Le nombre de nombres parfaits est : %d\n",cptParf);

    return 0;
}