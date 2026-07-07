#include <stdio.h>

int main(void)
{
	int c;
	long nb, nt, nl;
	nb = nt = nl = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ') ++nb;
		if(c == '\t') ++nt;
		if(c == '\n') ++nl;
	}
	printf("%ld\t%ld\t%ld\n", nb, nt, nl);
	return 0;
}
