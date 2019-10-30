struct song_node {
  char name[100];
  char artist[100];
  int i;
  struct song_node * next;
};

void print_list(struct song_node * n);
struct song_node * insert_front(struct song_node * n, char *artist, char *name);
struct song_node * insert_order(struct song_node * n, int k);
struct song_node * free_list(struct song_node * n);
struct song_node * remove_song_node(struct song_node * front, int data);
