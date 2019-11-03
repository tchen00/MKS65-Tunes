#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_node(struct song_node *n){
  printf("%s: %s | ", n -> name, n -> artist);
}

void print_list(struct song_node * n){
  //struct song_node *current = n;
  //printf("");
  while (n != NULL){
    print_node(n);
    n = n -> next;
  }
  printf("\n");
}

struct song_node * insert_front(struct song_node * node, char n[100], char a[100]){
  struct song_node *new = malloc(sizeof(struct song_node));
  strcpy(new->name, n);
  strcpy(new->artist, a);
  new->next = node;
  return new;
}

struct song_node * free_list(struct song_node * n){
  struct song_node *current = n;
  //struct song_node *holder = n;
  while ( n != NULL ){
    current = n -> next;
    free(n);
    n = current;
  }
  // TESTING PURPOSES -- printf("a");
  return current;
}
