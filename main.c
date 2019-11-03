#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "library.h"

int main(){
  struct song_node *n = NULL;
  printf("LINKED LIST TESTS\n");
  printf("====================================\n\n");
  // TESTING PRINT_LIST:
  printf("Testing print_list:\n");
  print_list(n); // should return an empty list
  n = insert_front(n, "ac/dc", "thunderstruck");
  n = insert_front(n, "pearl jam", "alive");
  n = insert_front(n, "pearl jam", "even flow");
  n = insert_front(n, "pearl jam", "yellow ledbetter");
  n = insert_front(n, "pink floyd", "time");
  n = insert_front(n, "radiohead", "paranoid android");
  n = insert_front(n, "radiohead", "street spirit (fade out)");
  print_list(n);
  printf("====================================\n\n");
  // TESTING FIND_NODE:
  printf("Testing find_node:\n");


  printf("====================================\n\n");
  // TESTING FIND_ARTIST:
  printf("Testing find_artist:\n");


  printf("====================================\n\n");
  // TESTING RANDOM:
  printf("Testing random:\n");
  struct song_node * random = find_random(n);
  print_list(find_random(n));

  printf("====================================\n\n");
  // TESTING REMOVE:
  printf("Testing remove:\n");


  printf("====================================\n\n");
  // TESTING FREE_LIST:
  printf("Testing free_list:\n");
  free_list(n);
  printf(n);

  printf("====================================\n\n");
  printf("MUSIC LIBRARY TESTS\n");
  printf("====================================\n\n");
  // TESTING PRINT_LIBRARY:
  printf("Testing print_library:\n");


  printf("====================================\n\n");
  // TESTING PRINT_LETTER:
  printf("Testing print_letter:\n");


  printf("====================================\n\n");
  // TESTING FIND:
  printf("Testing find:\n");


  printf("====================================\n\n");
  // TESTING FIND ARTIST:
  printf("Testing find_artist:\n");


  printf("====================================\n\n");
  // TESTING REMOVE SONG:
  printf("Testing remove_song:\n");


  printf("====================================\n\n");
  // TESTING CLEAR LIBRARY:
  printf("Testing clear_library:\n");



  // TESTING CLEAR LIBRARY:
  printf("\nLibrary after clear:\n");
  printf("====================================\n\n");
  printf("Adding songs to empty library a list:\n");

  // TESTING PRINT ARTIST:
  printf("====================================\n\n");
  printf("Testing print_artist:\n");


  // TESTING SHUFFLE:
  printf("====================================\n\n");
  printf("Testing shuffle:\n");

  printf("====================================\n\n");

  return 0;
}
