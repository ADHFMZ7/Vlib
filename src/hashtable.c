#include "hashtable.h"
#include <string.h>


#define A 54059 /* a prime */
#define B 76963 /* another prime */
#define C 86969 /* yet another prime */
#define FIRSTH 37 /* also prime */
size_t hash(const char *key, size_t size) 
{
	size_t hashed_value = 0;	
	for (int i = 0; i < strlen(key); i++) 
	{
		hashed_value += key[i] * (A + i) * B;
	}

	return (C * hashed_value) % size;
}


Hashtable *create_hashtable(size_t size)
{
		



}
