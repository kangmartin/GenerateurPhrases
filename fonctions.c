//
// Created by marti on 03/11/2022.
//

#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void menu(void) // le menu
{
    int selection;
    printf("\nQuel voulez-vous choisir ?\n");
    printf("\n=======================================================================================\n1. Afficher les adverbes\n2. Afficher les adjectifs\n3. Afficher les verbes\n4. Afficher les noms\n5. Affichage d'une phrase\n=======================================================================================");
    printf("\nVotre choix:");
    scanf("%d",&selection);
    if(selection == 1 || selection == 2 || selection==3 || selection==4)
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
            default:
                printf("Erreur");
        }

    }
    else{
        menu();
    }
}

void lire_fichier_adjectif() //fonction qui extrait que les adjectif et qui les affiche
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


















