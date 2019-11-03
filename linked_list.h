struct song_node {
  char name[100];
  char artist[100];
  int i;
  struct song_node * next;
};

void print_list(struct song_node * n);
int len(struct song_node *n);
struct song_node * insert_front(struct song_node * node, char n[100], char a[100]);
struct song_node * insert_order(struct song_node * node, char * a, char * n);
struct song_node * free_list(struct song_node * n);
struct song_node * find_random(struct song_node * n);
struct song_node * find_artist(struct song_node * node, char * a);
struct song_node * find_node(struct song_node * node, char * n, char * a);
