/*
** EPITECH PROJECT, 2024
** my
** File description:
** task02
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strdup(char const *);
char **my_str_to_word_array(char const *);
int my_exponent(int, int);
int my_show_word_array(char *const *);
char *my_slice(char const *, int, int);
int my_str_include(char *, char);
char *my_strip(char *, char);
char *my_left_strip(char *, char);
char *my_right_strip(char *, char);
int my_str_get_index(char *str, char c);
int my_str_get_nindex(char *str, char c, int occurence);
void my_sort_str_array(char **array, int size);
void my_check_malloc(void *value);
char *my_strconcat(char *a, char *b);
char *my_int_to_str(int nb);
int my_arrlen(void **arr);
int my_strarr_include(char **arr, char *str);
int my_strarr_get_index(char **arr, char *str);
int my_strarr_get_nindex(char **arr, char *str, int occurence);
void my_puterr(char const *str);
char **my_str_split(char *str, char separator);
int my_str_to_int(char *str);

#endif /* !MY_H_ */
