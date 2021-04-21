class SpaceAge:
    def __init__(self, seconds):
        self.time_in_seconds = seconds

    def on_earth(self):
        return round((self.time_in_seconds/(31557600.0))*100) / 100

    def on_mercury(self):
        return round((self.time_in_seconds/(7600543.81992))*100) / 100
    
    def on_venus(self):
        return round((self.time_in_seconds/(19414149.052176))*100) / 100

    def on_mars(self):
        return round((self.time_in_seconds/(59354032.69008))*100) / 100

    def on_jupiter(self):
        return round((self.time_in_seconds/(374355659.124))*100) / 100

    def on_saturn(self):
        return round((self.time_in_seconds/(929292362.8848))*100) / 100

    def on_uranus(self):
        return round((self.time_in_seconds/(2651370019.3296))*100) / 100

    def on_neptune(self):
        return round((self.time_in_seconds/(5200418560.032))*100) / 100