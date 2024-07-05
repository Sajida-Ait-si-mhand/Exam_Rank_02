#include <unistd.h>

// int main(int ac , char *av[])
// {
//     int i = 0;
//     if (ac == 2)
//     {
//         while (av[1][i] == ' ' || av[1][i] == '\t')
//             i++;
//         while ((av[1][i] != ' ' || av[1][i] != '\t') && av[1][i])
//             write(1, &av[1][i++], 1);
//     }
//     write(1, "\n", 1);
// }
// int main(int ac, char *av[])
// {
// int i = 0;
// 	if(ac == 2)
// 	{
// 		while (av[1][i] == 32 || av[1][i] == 9)
// 			i++;
// 		while ((av[1][i] != 32 || av[1][i] != 9) && av[1][i])
// 			write(1, &av[1][i++],1);
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }
// int main(int ac, char *av[])
// {
// int i = 0;
// 	if(ac == 2)
// 	{
// 		while (av[1][i] == 32 || av[1][i] == 9)
// 			i++;
// 		while ((av[1][i] != 32 || av[1][i] != 9) && av[1][i])
// 			write(1, &av[1][i++],1);
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }
#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}