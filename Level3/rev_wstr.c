#include <unistd.h>

int main(int ac, char *av[])
{
	int end = 0;
	int start = 0;
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
				i--;
			end = i;
			while (av[1][i] != '\0' && av[1][i] != '\t'  && av[1][i] != ' ')
				i--;
			start = i + 1;
			int flag = start;
			while (start <= end)
			{
				write(1,&av[1][start],1);
				start++;
			}
			if (flag != 0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n",1);
}