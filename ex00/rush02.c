#include "ft_putchar.c"
void	printer(int i, int j, int a, int b);

void	rush(int a, int b)
{
	int i;
	int j;
	j = 0;
	if ( a>0 && b>0)
	{
	while (j<b)
	{
		i = 0;
		while (i<a)
		{
			printer(i,j,a,b);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
else{
	write(1, &"enter a valid integer", 21);
}
}

void	printer(int i, int j, int a, int b)
{
	if ((i==0 || i==a-1) && j==0)
		ft_putchar('A');
	else if ((i==0 || i==a-1) && j==b-1)
		ft_putchar('C');
	else if ( 0<i<a-1 && (j==0 || j==b-1))
		ft_putchar('B');
	else if((i==0 || i==a-1) && 0<j<b-1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}