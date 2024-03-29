#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "library.h"
#include "linked_list.h"

void add_song(char *n, char *a) {
  int idx = a[0] - 'a';
  if (idx < 0) {
     idx = 26;
  }
  table[idx] = insert_order(table[idx], n, a);
}

void print_lib() {
  for(int i = 0; i < sizeof(table)/sizeof(table[0]) - 1;i++) {
    if (table[i] != NULL){
      printf("%c list\n", (table[i]->artist)[0]);
      print_list(table[i]);
    }
  }
}

void print_letter(char c){
  int i = c - 'a';
  if (i < 0 || i >= 26){
    i = 26;
  }
  print_list(table[i]);
}

void print_artist(char *a) {
  struct song_node *current = find_artist(a);
  struct song_node *nex = current;
  struct song_node *prev = NULL;
  while(nex != NULL) {
    if(strcmp(current->artist,nex->artist) != 0) {
      current = remove_node(current, nex->name, nex->artist);
    }
    prev = nex;
    nex = nex->next;
  }
  print_list(current);
}

struct song_node * find(char *n, char *a) {
  int idx = a[0] - 'a';
  if(idx < 0) {
    idx = 26;
  }
  printf("looking for [%s: %s] \n", a,n);
  if(find_node(table[idx], n, a) != NULL) {
    printf("artist found! \n");
    print_list(find_node(table[idx], n, a));
    printf("\n");
  }
  else {
    printf("artist not found.\n");
  }
  return find_node(table[idx], n, a);
}

struct song_node * find_artist(char *a) {
  int idx = a[0] - 'a';
  if(idx < 0) {
    idx = 26;
  }
  printf("looking for [%s]\n", a);
  if(find_art(table[idx], a) != NULL) {
    printf("artist found! \n");
    print_node(find_art(table[idx], a));
    printf("\n");
  }
  else {
    printf("artist not found.\n");
  }
  return find_art(table[idx], a);
}


void shuffle(){
  int randy = rand() % 27;
  int i = 3;
  while (i > 0){
    if (table[randy] != NULL){
      print_node(find_random(table[randy]));
      i--;
    }
    randy = rand() % 27;
  }
}

void delete(char *n, char *a){
  int idx = a[0] - 'a';
  if(idx < 0) {
    idx = 26;
  }
  struct song_node *p = table[idx];
  table[idx] = remove_node(p,n,a);
}


void clear() {
  int i;
  for(i = 0; i < sizeof(table)/sizeof(table[0]); i++) {
    table[i] =  free_list(table[i]);
  }
}
