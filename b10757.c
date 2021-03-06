#include <stdio.h>
#include <stdlib.h>

int	get_last_idx(char num[])
{
	int	i;

	i = 0;
	while (num[i])
		i++;
	return (i - 1);
}

void	set_zero(char num[])
{
	for (int i = 3; i < 10002; i++)
		num[i] = '0';
	num[10002] = '\0';
}

char	*add_big_nums(char num1[], char num2[])
{
	char	*result;
	int		temp;
	int		idx1;
	int		idx2;
	int		idx3;

	result = malloc(sizeof(char) * 10004);
	set_zero(result);
	idx1 = get_last_idx(num1);
	idx2 = get_last_idx(num2);
	idx3 = 10001;
	while (idx1 >= 0 && idx2 >= 0)
	{
		temp = (num1[idx1] - '0') + (num2[idx2] - '0');
		if (temp > 9)
		{
			result[idx3 - 1]++;
			temp -= 10;
		}
		result[idx3] += temp;
		idx1--;
		idx2--;
		idx3--;
	}
	if (idx1 == -1)
	{
		while (idx2 >= 0)
		{
			result[idx3] = result[idx3] + num2[idx2] - '0';
			if (result[idx3] > '9')
			{
				result[idx3] = '0';
				result[idx3 - 1] += 1;
			}
			idx2--;
			idx3--;
		}
	}
	else if (idx2 == -1)
	{
		while (idx1 >= 0)
		{
			result[idx3] = result[idx3] + num1[idx1] - '0';
			if (result[idx3] > '9')
			{
				result[idx3] = '0';
				result[idx3 - 1] += 1;
			}
			idx1--;
			idx3--;
		}
	}
	while (result[idx3] == '0')
		idx3++;
	if (result[idx3] == '\0')
		idx3--;
	return (result + idx3);
}

int	main(void)
{
	char	num1[10002];
	char	num2[10002];

	scanf("%s %s", num1, num2);
	printf("%s\n", add_big_nums(num1, num2));
	return (0);
}
