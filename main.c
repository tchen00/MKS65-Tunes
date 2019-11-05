#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "linked_list.h"
#include "library.h"

int main(){
  srand(time(NULL));
  struct song_node *n = NULL;
  printf("LINKED LIST TESTS\n");
  printf("====================================\n\n");
  // TESTING PRINT_LIST:
  printf("Testing print_list:\n");
  print_list(n); // should return an empty list
  /*
  n = insert_front(n, "ac/dc", "thunderstruck");
  n = insert_front(n, "pearl jam", "alive");
  n = insert_front(n, "pearl jam", "even flow");
  n = insert_front(n, "pearl jam", "yellow ledbetter");
  n = insert_front(n, "pink floyd", "time");
  n = insert_front(n, "radiohead", "paranoid android");
  n = insert_front(n, "radiohead", "street spirit (fade out)");
  print_list(n);
  */
  //free_list(n);
  n = insert_order(n, "ac/dc", "thunderstruck");
  n = insert_order(n, "pearl jam", "alive");
  n = insert_order(n, "pearl jam", "even flow");
  n = insert_order(n, "pearl jam", "yellow ledbetter");
  n = insert_order(n, "pink floyd", "time");
  n = insert_order(n, "radiohead", "paranoid android");
  n = insert_order(n, "radiohead", "street spirit (fade out)");
  print_list(n);
  printf("====================================\n\n");
  // TESTING FIND_NODE:
  printf("Testing find_node:\n");
  struct song_node * output = find_node(n, "hello", "hello");
  print_list(output);
  output = find_node(n, "ac/dc", "thunderstruck");
  print_list(output);

  printf("====================================\n\n");
  // TESTING FIND_ARTIST:
  printf("Testing find_artist:\n");
  struct node * found = find_art(n, "thunderstruck");
  print_list(found);
  found = find_art(n, "hello");
  if (found == NULL){
    printf("artist does not exist\n");
  }

  printf("====================================\n\n");
  // TESTING RANDOM:
  printf("Testing random:\n");
  print_list(find_random(n));
  print_list(find_random(n));
  print_list(find_random(n));
  printf("====================================\n\n");
  // TESTING REMOVE:
  printf("Testing remove:\n");
  print_list(n);
  n = remove_node(n, "ac/dc", "thunderstruck");
  n = remove_node(n, "radiohead", "paranoid android");
  print_list(n);
  printf("====================================\n\n");
  // TESTING FREE_LIST:
  printf("Testing free_list:\n");
  free_list(n);

  printf("====================================\n\n");
  printf("MUSIC LIBRARY TESTS\n");
  printf("====================================\n\n");
  //struct song_node * table[27] = {NULL};

  // TESTING PRINT_LIBRARY:
  printf("Testing print_library:\n");
  add_song("ac/dc","thunderstruck");
  add_song("alive","pearl jam");
  add_song("even flow","pearl jam");
  add_song("yellow ledbetter", "pearl jam");
  add_song("time","pink floyd");
  add_song("paranoid android","radiohead");
  add_song("street spirit (fade out)","radiohead");
  print_lib();
  printf("====================================\n\n");
  // TESTING PRINT_LETTER:
  printf("Testing print_letter:\n");
  print_letter("a");
  print_letter("p");

  printf("====================================\n\n");
  // TESTING FIND:
  printf("Testing find:\n");
  find("ac/dc", "thunderstruck");

  printf("====================================\n\n");
  // TESTING FIND ARTIST:
  printf("Testing find_artist:\n");
  find_artist("thunderstruck");
  find_artist("pearl jam");

  printf("====================================\n\n");
  // TESTING REMOVE SONG:
  printf("Testing remove_song -- ac/dc: thunderstruck:\n");
  delete("ac/dc", "thunderstruck");
  print_lib();
  // TESTING SHUFFLE:
  printf("====================================\n\n");
  printf("Testing shuffle:\n");
  shuffle();
  print_lib();

  // TESTING PRINT ARTIST:
  printf("====================================\n\n");
  printf("Testing print_artist:\n");
  print_artist("pearl jam");

  printf("====================================\n\n");

  // TESTING CLEAR LIBRARY:
  printf("Testing clear_library:\n");
  clear();

  // TESTING CLEAR LIBRARY:
  printf("\nLibrary after clear:\n");
  printf("====================================\n\n");
  print_lib();
  return 0;
}
