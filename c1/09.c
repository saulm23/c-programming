#include <stdio.h>

int main()
{
	int c;
	int nb = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			nb++;
			if(nb == 1) putchar(c);

		}
		else
		{
			putchar(c);	
			nb = 0;
		}
	}
	return 0;
}
