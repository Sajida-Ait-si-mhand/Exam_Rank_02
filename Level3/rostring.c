#include <unistd.h>
void ft_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
	
}
int main(int ac, char *av[])
{
	if (ac > 1)
	{
		char *str = av[1];
		char *fist_word_start;
		char *fist_word_end;

		while (*str == ' ' || *str == '\t')
			str++;
		fist_word_start = str;
		while (*str && (*str != ' ' || *str != '\t'))
			str++;
		fist_word_end = str;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ' || *str == '\t')
						str++;
					if (*str)
						write(1, " ", 1);
				}
				else
				{
					write(1, str, 1);
					str++;
				}
			}
			write(1, " ", 1);
		}
	ft_word(fist_word_start, fist_word_end);
	}
	write(1, "\n", 1);
}