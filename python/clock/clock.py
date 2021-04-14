class Clock:
    def __init__(self, hour, minute):
        self.hour = self.parseHours(hour)
        self.minute = self.parseMinutes(minute)


    def parseHours(self, hoursInput):
        if(hoursInput < 0):
            hoursInput += 24 * abs(hoursInput // 24)

        return (24 + (hoursInput % 24)) if (hoursInput < 0) else hoursInput % 24 

    def parseMinutes(self, minutesInput):
        if(minutesInput < 0):
            neededHours = abs(minutesInput // 60)
            self.hour = self.parseHours(self.hour - neededHours)
            minutesInput += 60 * neededHours


        if(minutesInput >= 60):
            addedHours = minutesInput // 60 
            self.hour = self.parseHours(self.hour + addedHours)
        
        return minutesInput % 60



    def __repr__(self):

        formattedHour = self.hour if self.hour > 9 else "0" + str(self.hour)
        formattedMinute = self.minute if self.minute > 9 else "0" + str(self.minute)

        return str(formattedHour) + ":" + str(formattedMinute)

    def __eq__(self, other):
        hoursEqual = self.hour == other.hour
        minutesEqual = self.minute == other.minute
        return hoursEqual and minutesEqual

    def __add__(self, minutes):
        return Clock(self.hour, self.minute + minutes)

    def __sub__(self, minutes):
        return Clock(self.hour, self.minute - minutes)
