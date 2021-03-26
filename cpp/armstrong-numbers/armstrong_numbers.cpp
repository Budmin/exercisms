#include "armstrong_numbers.h"

namespace armstrong_numbers {

	bool is_armstrong_number(int candidate){

		int copy_candidate = candidate;

		int sum_of_digits = 0;

		// how many digits are there?
		int num_of_digits = 0;
		while(copy_candidate)
		{
			num_of_digits++;
			copy_candidate /= 10;
		}

		copy_candidate = candidate;


		int swp_num = 0;
		while(copy_candidate)
		{

			swp_num = copy_candidate % 10;
			sum_of_digits += pow(swp_num, num_of_digits);
			copy_candidate /= 10;
		}
		

		return (sum_of_digits == candidate);
	}

}