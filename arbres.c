//
// Created by marti on 16/11/2022.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "arbres.h"
#define SUCCESS 1
#define ERROR 0

/*
void displayTree(p_letter_node root){

    if(root->sons.head!=NULL){
        printf("\n|");
        printf("%s",root->letter);
        displayTree((p_letter_node) root->sons.head->sons);
    }
    if(root->sons.head->next!=NULL){
        printf("--");
        p_letter_node tmp= root->sons.head->sons;
        printf("%s",tmp->letter);
        displayTree((p_letter_node) root->sons.head->next);
    }
}
 */

nAryTree createEmptyTree(){
    nAryTree tree;
    tree.root = NULL;
    //tree.root->sons->head = NULL;
    return tree;
}


int isEmptyNAry(nAryTree tree){
    if(tree.root == NULL){
        //printf("test");
        return 1;
    }
    return 0;
}

p_letter_node createNode(char word){
    p_letter_node pn;
    pn = (p_letter_node)malloc(sizeof(t_letter_node));
    pn->letter = word;
    pn->child = NULL;
    pn->sibling = NULL;
    return pn;
}

void addNode(nAryTree* tree,p_letter_node pn, char letter){
    p_letter_node new_pn;
    new_pn = createNode(letter);
    if (isEmptyNAry(*tree)){
        pn = new_pn ;
    }
}

/*
p_letter_node addNodeTree(char word, p_letter_node current_node){
    if(current_node->letter == word){
        current_node = createNode(word);
        current_node = current_node->sons.head->sibling->child;
        return current_node;
    }
    else{
        current_node = createNode(word);
        current_node = current_node->sons.head->child;
        return current_node;
    }
}
 */

void createTree(char* word,nAryTree *tree) {

    char *start = "#";
    if (tree->root == NULL) {
        p_letter_node pn = createNode(*start);
        tree->root = pn;

        for (int i = 0; i < strlen(word); i++) {
            p_letter_node pn_new = createNode(word[i]);
            p_letter_node tmp = pn;
            while (tmp->child != NULL) {
                tmp = tmp->child;

            }
            tmp = pn_new;
            //printf("%c\n", tmp->letter);
            pn->child = tmp;
            pn = pn->child;

        }


    } else {

        p_letter_node root = tree->root;

        for (int i = 0; i < strlen(word); i++) {
            if(tree->root->child->letter == word[i]){
                p_letter_node pn_new = createNode(word[i]);
                p_letter_node tmp = root;
                while (tmp->sibling != NULL) {
                    tmp = tmp->sibling;
                }
                tmp = pn_new;
                root->sibling = tmp;
                root = root->sibling;
                //printf("%c\n", tmp->letter);

            }else{

                p_letter_node pn_new = createNode(word[i]);
                p_letter_node tmp = root;
                while (tmp->child != NULL) {
                    tmp = tmp->child;

                }
                tmp = pn_new;
                root->child = tmp;
                root = root->child;
                printf("%c\n", tmp->letter);
            }

        }

    }

}



