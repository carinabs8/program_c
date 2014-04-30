#include <stdio.h>

int main(int argc, char const *argv[])
{	int numeros[4] = {2};
	int i;
	int num_de_estados = 3;
	char *nome = "Carina";
	char *estados[] = {
		"Rio de Janeiro",
		"São Paulo",
		"Minas Gerais"
	};

	printf("%ld\n", sizeof(nome));
	printf("%i\n", numeros[0]);

	for(i=1; i < argc; i++){
		printf("argv: %d: %s\n", i, argv[i]);
	}

	for (i = 0; i < num_de_estados; i++)
	{
		printf("Indice: %d, Estado:%s\n", i, estados[i]);
	}
	return 0;
}