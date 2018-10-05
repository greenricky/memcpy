#include <stdio.h>
#include <string.h>

extern void *memcpy_handle_overlap(void *des, const void *src, unsigned int n);

int main(int argc, char *argv[])
{
	char ss[16] = "aabbccdd";
	memcpy_handle_overlap(ss+2, ss, strlen(ss));

	printf("%s\n", ss);

	return 1;
}
