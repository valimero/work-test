#include <stdio.h>

// (int *) --> Indique que "error" est l'adresse d'un int 
void ft_rec(char str[], int *pt_error)
{
	if(str[0] == '\0') return;
	
	// pt_error 		--> Adresse du int
	// (*pt_error) 		--> permet d'accéder à la valeur pointée par "error"
	// (*pt_error)++ 	--> permet d'incrémenter la valeur pointé par "pt_error" 
	(*pt_error)++;
	ft_rec(str + 1, pt_error);
}




int main()
{
	char str[] = "hello";
	int error;
	error = 0;

	// &error 		--> Représente l'adresse de "error" (int) 
	ft_rec(str, &error);

	printf("%d\n", error);
}

