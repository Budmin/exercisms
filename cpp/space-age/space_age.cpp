#include "space_age.h"

#include <iostream>
#include <cmath>

namespace space_age {

	// constructor
	space_age::space_age(long seconds){
		space_age::time_in_seconds = seconds;
	}

	long space_age::seconds() const{
		return time_in_seconds;
	}
	
	double space_age::on_earth() const{
		return round((float(time_in_seconds)/(31557600.0))*100) / 100;
	}
	
	double space_age::on_mercury() const{
		return round((float(time_in_seconds)/(7600543.81992))*100) / 100;
	}
	
	double space_age::on_venus() const{
		return round((float(time_in_seconds)/(19414149.052176))*100) / 100;
	}
	
	double space_age::on_mars() const{
		return round((float(time_in_seconds)/(59354032.69008))*100) / 100;
	}
	
	double space_age::on_jupiter() const{
		return round((float(time_in_seconds)/(374355659.124))*100) / 100;
	}
	
	double space_age::on_saturn() const{
		return round((float(time_in_seconds)/(929292362.8848))*100) / 100;
	}
	
	double space_age::on_uranus() const{
		return round((float(time_in_seconds)/(2651370019.3296))*100) / 100;
	}
	
	double space_age::on_neptune() const{
		return round((float(time_in_seconds)/(5200418560.032))*100) / 100;
	}

}  // namespace space_age




