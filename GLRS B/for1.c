#include<stdio.h>
/**
Ecrire un programme qui permet de saisir un entier.
Le programme dermine et affiche si l'entier 
est premierou pas 
**/

int main(){
    int e,i,cpt;
    printf("Entrer un entier\n");
    scanf("%d",&e);
    //
    printf("Vous avez : %d\n",e);
    //
    cpt = 0;
    for (i = 1; i <= e; i++){
        if (e % i == 0){
           cpt ++;
        //    cpt+=1;
        //    cpt=cpt+1;
        //    printf("%d est diviseur de %d\n",i,e);
        }
    }
    if(cpt == 2){
        printf("%d est premier\n",e);
    }else{
        printf("%d n'est pas premier\n",e);
    }
    return 0;
}