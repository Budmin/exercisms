#include "gigasecond.h"

#include <iostream>

using namespace boost::posix_time;


namespace gigasecond {

	ptime advance (ptime initial_time){
		return initial_time + seconds(1000000000);
	}


}  // namespace gigasecond
