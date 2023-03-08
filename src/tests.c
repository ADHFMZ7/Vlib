#include "hashtable.h"
#include <stdio.h>

#define BUFF_LEN 256

int main()
{

	FILE *wordlist = fopen("words.txt", "r");
	char buffer[BUFF_LEN];


	while (fgets(buffer, BUFF_LEN, wordlist))
	{
		printf("%ld\n", hash(buffer, 100));
	}
}
