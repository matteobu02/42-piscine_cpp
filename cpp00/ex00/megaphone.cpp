#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; ++i)
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)std::toupper(av[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
