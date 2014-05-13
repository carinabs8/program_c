#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ages[] = { 25,27,30,60 };
	char *names[] ={
		"Carina", "Carolina", "Lucas", "Fátima"
	};

	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for(i=0; i < count; i++){
		printf("%s tem %d de idade\n", names[i], ages[i]);
	}
	printf("---\n");

	int	*cur_age = ages;
	char **cur_name = names;

	for(i=0; i < count; i++){
		printf("%s tem %d de idade\n", *(cur_name+i), *(cur_age+i) );
	} 
	printf("---\n");

	for(i = 0; i < count; ++i){
		printf("%s tem %d de idade\n", cur_name[i], cur_age[i] );
	}
	printf("---\n");

	for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
		printf("%s tem %d de idade\n", *cur_name, *cur_age );	
	}
	/* code */
	return 0;
}