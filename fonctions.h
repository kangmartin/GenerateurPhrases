//
// Created by marti on 03/11/2022.
//

#ifndef GENERATEURPHRASES_FONCTIONS_H
#define GENERATEURPHRASES_FONCTIONS_H

void menu(void);
void extraction_fichier();

typedef struct Tree
{
    char value;
    struct Tree* tleft;
    struct Tree* tright;
    struct Tree* parent;
}Tree;

Tree *new_tree(char x);
void clean_tree(Tree *tr);

#endif //GENERATEURPHRASES_FONCTIONS_H
