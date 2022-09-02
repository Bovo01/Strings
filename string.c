#include <stdio.h>
#include <stdlib.h>

#include "string.h"


char *str_input() {
    char *buffer = malloc(1024 * sizeof(char));
    scanf("%1023s", buffer);
    char *s = malloc(str_len(buffer) * sizeof(char));
    str_cpy(s, buffer);
    free(buffer);
    return s;
}

size_t str_len(const char *s) {
    size_t len = 0;
    while (*s++) len++;
    return len;
}

void str_cpy(char *dest, const char *src) {
    while (*src) *dest++ = *src++;
    *dest = '\0';
}

void str_lcpy(char *dest, const char *src, size_t max_len) {
    while (*src && max_len--) *dest++ = *src++;
    *dest = '\0';
}

void str_concat(char *s, const char *s1, const char *s2) {
    while (*s1) *s++ = *s1++;
    while (*s2) *s++ = *s2++;
    *s = '\0';
}

void str_lconcat(char *s, const char *s1, const char *s2, size_t max_len) {
    while (*s1 && max_len--) *s++ = *s1++;
    if (max_len != -1)
        while (*s2 && max_len--) *s++ = *s2++;
    *s = '\0';
}

int str_cmp(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) return *s1 - *s2;
        s1++; s2++;
    }
    if (*s1 == *s2) return 0;
    if (*s1) return *s1;
    return -*s2;
}

void str_lwr(char *s) {
    while (*s) if (*s >= 'A' && *s <= 'Z') *s++ -= 32;
}

void str_upr(char *s) {
    while (*s) if (*s >= 'a' && *s <= 'z') *s++ += 32;
}

void str_rev(char *s) {
    char *end = s + str_len(s);
    while (s < end) {
        char tmp = *s;
        *s++ = *end;
        *end-- = tmp;
    }
}
