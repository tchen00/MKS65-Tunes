#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct song_node * n){
  struct song_node *current = n;
  printf("[ ");
  while (current != NULL){
    printf("%d ", current -> i);
    current = current -> next;
  }
  printf("]\n");
}

struct song_node * insert_front(struct song_node * n, int k){
  struct song_node *new = malloc(sizeof(struct song_node));
  new -> i = k;
  new -> next = n;
  return new;
}

struct song_node * free_list(struct song_node * n){
  struct song_node *current = n;
  struct song_node *holder = n;
  while (current){
    current = current -> next;
    free(holder);
    holder = current;
  }
  return current;
}

struct song_node * remove_song_node(struct song_node * front, int i){
  struct song_node *temp = front;
  struct song_node *prev = temp;
  if(temp != NULL && temp->i == i) {
    temp = temp->next;
    free(temp);
    front = temp->next;
    return front;
  }
  while(temp != NULL && temp->i != i) {
    prev = temp;
    temp = temp->next;
  }
  if(temp == NULL) {
    return front;
  }
  prev->next = temp->next;
  free(temp);
  return front;
}
