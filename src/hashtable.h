#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>

#define MAX_LEN 2048

typedef struct {
	size_t size;
	char **buckets;
} Hashtable;

size_t hash(const char *key, size_t size);

Hashtable *create_hashtable(size_t size);

#endif
