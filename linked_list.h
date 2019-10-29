struct song_node {
  int i;
  struct song_node * next;
};

void print_list(struct song_node * n);
struct song_node * insert_front(struct song_node * n, int k);
struct song_node * free_list(struct song_node * n);
struct song_node * remove_song_node(struct song_node * front, int data);
