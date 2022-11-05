#include <stdio.h>
#include "fonctions.h"
#include <stdlib.h>

int main(void)
{
// Debut du developpement
    // menu();
    extraction_fichier();
    Tree *arbre = new_tree('s');
    free(arbre);
    return 0;
}