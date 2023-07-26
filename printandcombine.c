#include<stdio.h>
#include"printandcombine.h"

/* Returns a string representation of a term*/
char * term_to_string(term_t * term){
    char * char_ptr;
    char_ptr = (* char)malloc(sizeof(char));
    if(char_ptr->exponent == 0){

    }
    else if(char_ptr->exponent == 1){

    }
    else{
        
    }

}
/*Prints a linkedlist*/
void print_linklist(node_t * curr){
    while(curr!=null){
        printf("%d", curr->data);
        curr = curr.next;
    }
}
/*Returns a new linkedlist that is the result of combining the like terms*/
node_t * combine_like_terms(const node_t * current_node_ptr){

}

