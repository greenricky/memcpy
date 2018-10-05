#include <stdlib.h>

void *memcpy_handle_overlap(void *des, const void *src, unsigned int n)
{
	int i=0;
	char *s=(char *)src;
	char *d=(char *)des;

	if(NULL==des || NULL==src)
		return NULL;

	//not overlap 
	if( (src>des) || (src+n<des) )
	{
		for(i=0; i<n; i++)
			*d++ = *s++;
	}
	else
	{
		//overlapping
		for(i=n-1; i>=0; i--)
			*(d+i) = *(s+i);
	}

	return des;
}
