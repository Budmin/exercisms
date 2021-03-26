#include "raindrops.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *convert(char result[], int drops){

	char * output =  malloc(sizeof(char) * 15);

	strcpy(output, "");

	if(drops % 3 == 0){
		strcat(output, "Pling");
	}

	if(drops % 5 == 0){
		strcat(output, "Plang");
	}

	if(drops % 7 == 0){
		strcat(output, "Plong");
	}

	if(strcmp(output, "") == 0){
		strcat(output, )
	}

	printf("%s %d\n", result, drops);


	return result;
}