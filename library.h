struct song_node * table[27];

void add_song(char *n, char *a);
void print_letter(char a);
void print_artist(char *a);
void print_library();
struct song_node * find(char *n, char *a);
struct song_node * find_artist(char *a);
void shuffle();
void clear_library();
void delete(char *n, char *a);
