//
// Created by marti on 16/11/2022.
//

#ifndef GENERATEURPHRASES_ARBRES_H
#define GENERATEURPHRASES_ARBRES_H
#define ALPHABET_SIZE 26

typedef struct s_cell{
    struct s_letter_node *child;
    struct s_cell *sibling;
}t_cell, *p_cell;

typedef struct s_std_list{
    p_cell head;
}t_std_list;


struct s_letter_node
{
    char letter;
    struct s_letter_node *child, *sibling;
};
typedef struct s_letter_node t_letter_node, *p_letter_node;

typedef struct{
    int sizeInfo;
    p_letter_node root;
}nAryTree;

//pour mot fléchi

typedef struct inflected_name{
    char word_var[ALPHABET_SIZE];
    char attributes[5];
    struct inflected_name *next;
}t_inflected_name,*p_inflected_name;

typedef struct base_name{
    char word[ALPHABET_SIZE];
    p_inflected_name word_inf;
    struct base_name *next;
}t_base_name,*p_base_name;

void displayTree(p_letter_node );
nAryTree createEmptyTree();
int isEmptyNAry(nAryTree );
p_letter_node createNode(char );
void addNode(nAryTree* ,p_letter_node , char );
p_letter_node addNodeTree(char, p_letter_node );
p_letter_node addOneNodeTree(char , p_letter_node );
void createTree(char *,nAryTree*);



#endif //GENERATEURPHRASES_ARBRES_H
