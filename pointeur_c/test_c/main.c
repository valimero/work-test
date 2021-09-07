#include <stdio.h>

void ft_rec(char str[], int *error)
{
	if(str[0] == '\0') return;
	(*error)++;
	ft_rec(str + 1, error);
}




int main()
{
	char str[] = "hello";
	int error;
	error = 0;

	ft_rec(str, &error);

	printf("%d\n", error);
	
	//ft_rec(* (str + 1), &error);
}

