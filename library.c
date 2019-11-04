#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "library.h"
#include "linked_list.h"

void add_song(char *n, char *a) {
  int idx = a[0] - 'a';
  if (idx < 0) idx = 26;
  table[idx] = insert_order(table[idx], n, a);
}

void print_all() {
  int i;
  for (i = 0; i < sizeof(table)/sizeof(table[0]) - 1; i++) {
    print_list(table[i]);
  }
}

void print_letter(char a) {
  int idx = a - 'a';
  if (idx < 0) {
    idx = 26;
  }
  printf("Print_letter for %c: ", a);
  print_list(table[idx]);
}

void print_artist(char *a) {
  struct song_node *current = find_artist(a);
  struct song_node *nex = current;
  struct song_node *prev = NULL;
  while(iterator != NULL) {
    if(strcmp(current->artist,nex->artist) != 0) {
      current = remove_node(current, nex->name, nex->artist);
    }
    prev = iterator;
    iterator = iterator->next;
  }
  print_list(current);
}

void shuffle(){
  int randy = rand() % 27;
  int i = 3;
  while (i > 0){
    if (table[randy] != NULL){
      print_node(random_node(table[randy]));
      i--;
    }
    randy = rand() % 27;
  }
}

void clear() {
  int i;
  for(i = 0; i < sizeof(table)/sizeof(table[0]); i++) {
    table[i] =  free_list(table[i]);
  }
}
