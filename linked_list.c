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

struct song_node * find_random(struct song_node * n){
  int length = len(n);
  if (length > 0){
    int i = rand() % length;
    for (; i > 0; i--){
      n = n->next;
    }
  }
  return n;
}

int len(struct song_node *n){
  int i = 0;
  while (n != NULL){
    i++;
    n = n->next;
  }
  return i;
}

struct song_node * find_artist(struct song_node * node, char * a){
  struct song_node * current = node;
  while (current != NULL){
    if (strcmp(current->artist, a) == 0){
      break;
    }
    current = current->next;
  }
  return current;
}

struct song_node * find_node(struct song_node * node, char * n, char * a) {
  struct song_node *current = find_artist(node, a);
  if (current == NULL){
    printf("Song_node not found");
    return NULL;
  }
  while (current != NULL && strcmp(current->artist, a) == 0){
    if (strcmp(current->name, n) == 0){
      printf("node found: ");
      return current;
    }
    current = current->next;
  }
  printf("Song_node not found");
  return NULL;
}
