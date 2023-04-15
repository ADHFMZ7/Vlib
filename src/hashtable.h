#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>

#define MAX_LEN 2048

typedef struct {
	size_t size;
	char **buckets;
} Hashtable;

size_t vlib_hash(const char *key, size_t size);

Hashtable *vlib_create_hashtable(size_t size);

char *vlib_find(char *key);

#endif
