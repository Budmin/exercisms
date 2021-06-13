class SpaceAge{
	seconds: number;

	constructor(timeInSeconds: number){
		this.seconds = timeInSeconds;
	}

	onEarth(): number{
		return Math.round( this.seconds / (31557600) * 100 ) / 100;
	}

	onMercury(): number{
		return Math.round( this.seconds / (7600543.81992) * 100 ) / 100;
	}

	onVenus(): number{
		return Math.round( this.seconds / (19414149.052176) * 100 ) / 100;
	}

	onMars(): number{
		return Math.round( this.seconds / (59354032.69008) * 100 ) / 100;
	}

	onJupiter(): number{
		return Math.round( this.seconds / (374355659.124) * 100 ) / 100;
	}

	onSaturn(): number{
		return Math.round( this.seconds / (929292362.8848) * 100 ) / 100;
	}

	onUranus(): number{
		return Math.round( this.seconds / (2651370019.3296) * 100 ) / 100;
	}

	onNeptune(): number{
		return Math.round( this.seconds / (5200418560.032) * 100 ) / 100;
	}

}


export default SpaceAge