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
    printf("\n=======================================================================================\n1. Afficher les adverbes\n2. Afficher les adjectifs\n3. Afficher les verbes\n4. Afficher les noms\n(le reste des fonctionnalites sont en cours de dev.)\n=======================================================================================");
    printf("\nVotre choix:");
    scanf("%d",&selection);
    if(selection == 1 || selection == 2 || selection==3)
    {
        switch (selection) {
            case 1:
                lire_fichier_adverbe();
                break;
            case 2:
                lire_fichier_adjectif();
                break;
            case 3:
                lire_fichier_verbe();
                break;
            case 4:
                lire_fichier_nom();
                break;
        }

    }
    else{
        menu();
    }
}

void lire_fichier_adjectif()
{
    FILE *fichier = fopen("../dictionnaire.txt", "r");

    char formeFlechie[256];
    char formeDeBase[256];
    char categorie[256];


    if(fichier == NULL)
    {
        exit(1);
    }
    while(fscanf(fichier, "%s\t%s\t%s", formeFlechie, formeDeBase, categorie) != EOF)
    {

        if(categorie[0]+categorie[1]+categorie[2] == 'A'+'d'+'j')
        {
            printf("Forme de base: %s\n",formeDeBase);



        }


    }

    fclose(fichier);
}


void lire_fichier_nom()
{
    FILE *fichier = fopen("../dictionnaire.txt", "r");

    char formeFlechie[256];
    char formeDeBase[256];
    char categorie[256];


    if(fichier == NULL)
    {
        exit(1);
    }
    while(fscanf(fichier, "%s\t%s\t%s", formeFlechie, formeDeBase, categorie) != EOF)
    {


            if(categorie[0]+categorie[1]+categorie[2] == 'N'+'o'+'m')
            {
                printf("Forme de base: %s\n",formeDeBase);



            }


    }

    fclose(fichier);
}

void lire_fichier_verbe()
{
    FILE *fichier = fopen("../dictionnaire.txt", "r");

    char formeFlechie[256];
    char formeDeBase[256];
    char categorie[256];


    if(fichier == NULL)
    {
        exit(1);
    }
    while(fscanf(fichier, "%s\t%s\t%s", formeFlechie, formeDeBase, categorie) != EOF)
    {


            if( categorie[0]+categorie[1]+categorie[2] == 'V'+'e'+'r')
            {
                printf("Forme de base: %s\n",formeDeBase);



            }


    }

    fclose(fichier);
}

void lire_fichier_adverbe()
{
    FILE *fichier = fopen("../dictionnaire.txt", "r");

    char formeFlechie[256];
    char formeDeBase[256];
    char categorie[256];


    if(fichier == NULL)
    {
        exit(1);
    }
    while(fscanf(fichier, "%s\t%s\t%s", formeFlechie, formeDeBase, categorie) != EOF)
    {


            if(categorie[0]+categorie[1]+categorie[2] == 'A'+'d'+'v')


            {
                printf("Forme de base: %s\n",formeDeBase);



            }


    }

    fclose(fichier);
}





















