#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
#define BUFFSIZ 1024
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void cp(char *, char *);

#endif /* end #ifndef MAIN_H */
