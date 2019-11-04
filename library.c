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
