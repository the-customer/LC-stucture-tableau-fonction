#include<stdio.h>
/**
Ecrire un programme qui permet de saisir un entier.
Le programme dermine et affiche si l'entier 
est parfait ou pas 
**/

int main(){
    int e,i,som;
    printf("Entrer un entier\n");
    scanf("%d",&e);
    //
    printf("Vous avez : %d\n",e);
    //
    som = 0;
    for (i = 1; i < e; i++){
        if (e % i == 0){
           som += i;
        }
    }
    if(som == e){
        printf("%d est parfait\n",e);
    }else{
        printf("%d n'est pas parfait\n",e);
    }
    return 0;
}