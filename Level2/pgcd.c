#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int ac, char *av[])
{
	if(ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		if (a > 0 &&  b > 0)
		{
			while(a != b)
			{
				if (a > b)
					a = a - b;
				else
					b = b - a;
			}
			printf("%d", a);
		}
	}
	write(1, "\n", 1);
}