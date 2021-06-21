#include "hamming.h"


int compute(const char *lhs, const char *rhs){

	if( strlen(lhs) != strlen(rhs) ){
		return -1;
	}

	long unsigned int i = 0;
	int output = 0;

	for(i = 0; i < strlen(lhs); i++){
		if(lhs[i] != rhs[i]){
			output++;
		}
	}

	return output;
}