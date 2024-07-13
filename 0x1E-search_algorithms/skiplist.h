#ifndef SKIPLIST_H
#define SKIPLIST_H

/* Define your skiplist structure and any necessary types */
typedef struct skiplist_s {
    int value;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Function prototypes */
skiplist_t *create_skiplist(int *array, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);

#endif /* SKIPLIST_H */
