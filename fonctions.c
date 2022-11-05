//
// Created by marti on 03/11/2022.
//

#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void)
{
    int selection;
    printf("\n"
           "  ____  _      _   _                                       __  __             \n"
           " |  _ \\(_) ___| |_(_) ___  _ __  _ __   __ _ _ __ _   _   |  \\/  | __ _ _ __  \n"
           " | | | | |/ __| __| |/ _ \\| '_ \\| '_ \\ / _` | '__| | | |  | |\\/| |/ _` | '_ \\ \n"
           " | |_| | | (__| |_| | (_) | | | | | | | (_| | |  | |_| |  | |  | | (_| | | | |\n"
           " |____/|_|\\___|\\__|_|\\___/|_| |_|_| |_|\\__,_|_|   \\__, |  |_|  |_|\\__,_|_| |_|\n"
           "                                                  |___/                       ");
    printf("\n=======================================================================================\n1. Lancer le programme\n2. xxxx\n3. xxxx\n=======================================================================================");
    printf("\nVotre choix:");
    scanf("%d",&selection);
    if(selection == 1 || selection == 2 || selection==3)
    {
        switch (selection) {
            case 1:
                printf("Vous etes dans le programme 1");
                break;
            case 2:
                printf("Vous etes dans le programme 2");
                break;
            case 3:
                printf("Vous etes dans le programme 3");
                break;
        }

    }
    else{
        menu();
    }
}

void extraction_fichier()
{
    char forme_base[255];
    char forme_flechie[255];
    char categorie[255];
    int nombre_ligne = 0;
    char *tableau_forme_base = NULL;
    char ligne_texte[255];


    FILE *fic = fopen("../dictionnaire.txt","r");
    if(fic == NULL)
    {
        printf("Le fichier n'a pas ete lu !\n");
        exit(1);

    }
    printf("Le fichier a bien ete lu !\n");



    while(fgets(ligne_texte,255,fic) != NULL)
    {
        nombre_ligne++;
    }
    fclose(fic);

    FILE *fic2 = fopen("../dictionnaire.txt","r");
    tableau_forme_base = malloc(nombre_ligne * sizeof(char));

    if(tableau_forme_base == NULL)
    {
        exit(2);
    }
    printf("La memoire a bien ete allouee !");



    for(int i=0;i<nombre_ligne;i++)
    {
        fscanf(fic2, "%s\t%s\t%s",&forme_flechie,&forme_base,&categorie);
        strcpy(&tableau_forme_base[i],forme_base);
        printf("%s\n",&tableau_forme_base[i]);
    }

    free(tableau_forme_base);
    fclose(fic2);

}


















