void ft_print_words_tables(char **tab);
char **ft_split_whitespaces(char *str);

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		ft_print_words_tables(ft_split_whitespaces(av[i]));
		i++;
	}
	return (0);
}
