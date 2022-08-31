#define HSH_BUFSIZE 1024
#include <stdlib.h>
#include<stdio.h>

/**
 * _getline - read iput from stdin or file
 * 
 * Return: pointer
 */
char *_getline(void)
{
	int bufsize = HSH_BUFSIZE;
	int pos = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;
	
	if (!buffer)
	{
		fprintf(stderr, "hsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		c = getchar();
		
		if (c == EOF || c == '\n')
		{
			buffer[pos] = '\0';
			return (buffer);
		}
		else
		{
			buffer[pos] = c;
		}
		pos++;
	}
	if (pos >= bufsize)
	{
		bufsize += HSH_BUFSIZE;
		buffer = realloc(buffer, bufsize);
		if (!buffer)
		{
			fprintf(stderr, "hsh: allocation error\n");
			exit(EXIT_FAILURE);
		}
	}
}
