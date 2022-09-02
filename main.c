#include <stdio.h>
#include <assert.h>
#include "string.h"
// #include <string.h>

#define N 10

void input_test();
void len_test();
void compare_test();
void copy_test();
void concat_test();
void lower_upper_test();
void reverse_test();

int main() {
    // input_test();
    // len_test();
    // compare_test();
    // copy_test();
    // concat_test();
    // lower_upper_test();
    reverse_test();

    return 0;
}


void input_test() {
    char *in = str_input();

    printf("string: %s, length: %zu", in, str_len(in));
}

void len_test() {
    char *s = "prova";
    assert(str_len(s) == 5);
}

void compare_test() {
    char *s1 = "prova";
    char *s2 = "prova";
    assert(str_cmp(s1, s2) == 0);
    s1 = "prova2";
    assert(str_cmp(s1, s2) > 0);
    s2 = "Prova2";
    assert(str_cmp(s2, s1) < 0);
    s1 = "Prova1";
    assert(str_cmp(s1, s2) < 0);
    s2 = "Prova1";
    assert(str_cmp(s1, s2) == 0);
}

void copy_test() {
    char *src = "c is wonderful :)";
    char dest[20];
    str_cpy(dest, src);
    assert(str_cmp(dest, src) == 0);
    str_lcpy(dest, src, 10);
    assert(str_cmp(dest, src) < 0);
    assert(str_cmp(dest, "c is wonde") == 0);
    str_lcpy(dest, src, 20);
    assert(str_cmp(dest, src) == 0);
}

void concat_test() {
    char *s1 = "prova";
    char *s2 = " del cazzo";
    char s[30];
    str_concat(s, s1, s2);
    assert(str_len(s) == str_len(s1) + str_len(s2));
    assert(str_cmp(s, "prova del cazzo") == 0);
    str_lconcat(s, s1, s2, 10);
    assert(str_len(s) == 10);
    assert(str_cmp(s, "prova del ") == 0);
    str_lconcat(s, s1, s2, 3);
    assert(str_len(s) == 3);
    assert(str_cmp(s, "pro") == 0);
}

void lower_upper_test() {
    char *s = "TeSt";
    str_lwr(s);
    assert(str_cmp(s, "test") == 0);
    s = "TeSt";
    str_upr(s);
    assert(str_cmp(s, "TEST") == 0);
}

void reverse_test() {
    char *s = "TeSt";
    str_rev(s);
    assert(str_cmp(s, "tSeT") == 0);
    s = "TeStd";
    str_rev(s);
    assert(str_cmp(s, "dtSeT") == 0);
}
