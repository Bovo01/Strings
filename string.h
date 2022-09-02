#define size_t unsigned int

// Takes input string from the user
char *str_input();
// Returns the size of the string
size_t str_len(const char *s);
// Copies src into dest
void str_cpy(char *dest, const char *src);
// Copies a maximum of len characters from src into dest
void str_lcpy(char *dest, const char *src, size_t max_len);
// Concats two strings into a third one
void str_concat(char *s, const char *s1, const char *s2);
// Concats two strings into a third one with a maximum of characters
void str_lconcat(char *s, const char *s1, const char *s2, size_t max_len);
// Compares two strings
int str_cmp(const char *s1, const char *s2);
// Converts a string to lowercase
void str_lwr(char *s);
// Converts a string to uppercase
void str_upr(char *s);
// Inverts the string
void str_rev(char *s);