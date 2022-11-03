//
// Created by marti on 03/11/2022.
//

#include "fonctions.h"
#include <stdio.h>

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