//
// Created by marti on 16/11/2022.
//

#ifndef GENERATEURPHRASES_ARBRES_H
#define GENERATEURPHRASES_ARBRES_H
#define ALPHABET_SIZE 26


struct s_letter_node // structure contenant la lettre dans le noeud
{
    char letter;
    struct s_letter_node *child, *sibling;
};
typedef struct s_letter_node t_letter_node, *p_letter_node;

typedef struct{  // structure de l'arbre
    int sizeInfo;
    p_letter_node root;
}nAryTree;


typedef struct base_name{  // structure qui contient le mot en forme de base
    char word[ALPHABET_SIZE];
    struct base_name *next;
}t_base_name,*p_base_name;


int isEmptyNAry(nAryTree); // fonction qui verifie si un arbre n aire est vide
p_letter_node createNode(char ); // creer un nouveau noeud dans l'arbre
void createTree(char *,nAryTree*); // creer un arbre n aire



#endif //GENERATEURPHRASES_ARBRES_H
