#include<stdio.h>
/**
Ecrire un programme qui permet de saisir une note d'etudiant
le programme affiche si l'etudiant a la moyenne ou pas 
**/

int main(){
    float note;
    // printf("Entrer une note:\n");
    puts("Entrer une note:\n");
    scanf("%f",&note);
    while (note<0 || note>20){
        puts("Veuillez saisir une note valide:");
        scanf("%f",&note);
    }
    // printf("Vous avez : %0.2f\n",note); //ou bien
    printf("Vous avez : %.2f\n",note);
    if(note>=10){
        puts("Vous avez la moyenne");
    }else{
        puts("Vous n'avez la moyenne");
    }
    return 0;
}