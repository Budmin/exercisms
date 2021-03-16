export class Clock {

  constructor(hours, minutes=0) {
    this.hours = this.parseHours(hours);
    this.minutes = this.parseMinutes(minutes);
  }


  parseHours = (hoursInput) => {
    return (hoursInput < 0) ? (24 + (hoursInput % 24)) : hoursInput % 24;
  }

  
  parseMinutes = (minutesInput) => {

    while(minutesInput < 0){
      this.hours = this.parseHours(this.hours - 1);
      minutesInput += 60;
    }

    if(minutesInput >= 60){
      let addedHours = Math.floor(minutesInput / 60);
      this.hours = this.parseHours(this.hours + (addedHours));
    }

    return minutesInput % 60;
  }


  toString() {
    return(`${(this.hours < 10 ? `0${this.hours}` : this.hours)}:${(this.minutes < 10 ? `0${this.minutes}` : this.minutes)}`);
  }

  plus(addedMinutes) {
    return new Clock(this.hours, this.minutes + addedMinutes);
  }

  minus(subtractedMinutes) {
    return new Clock(this.hours, this.minutes - subtractedMinutes);
  }

  equals(clockObject) {
    return (this.hours === clockObject.hours && this.minutes === clockObject.minutes)
  }
}
