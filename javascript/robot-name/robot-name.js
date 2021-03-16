// This is only a SKELETON file for the 'Robot Name' exercise. It's been
// provided as a convenience to get your started writing code faster.


let TESTING = 0;


let robotNames = [];

export class Robot {
// class Robot{

	constructor(){
		this.name = this.makeName();
		robotNames.push(this.name);
	}


	// handles the other logic (unique name and stuff like that)
	makeName = () => {
		let potentialName = this.generateName();

		while(robotNames.includes(potentialName)){
			potentialName = this.generateName();
		}

		return potentialName;
	}

	// just does the name gen
	generateName = () => {

		let firstLetter = String.fromCharCode(Math.round(Math.random()*(90-65) + 65));
		let secondLetter = String.fromCharCode(Math.round(Math.random()*(90-65) + 65));

		let firstNumber = Math.round(Math.random()*9);
		let secondNumber = Math.round(Math.random()*9);
		let thirdNumber = Math.round(Math.random()*9);

		return [firstLetter, secondLetter, firstNumber, secondNumber, thirdNumber].join('');
	}


	reset = () => {
		let newName = this.generateName();

		while(newName == this.name || robotNames.includes(newName)){
			newName = this.generateName();
		}

		// remove the old name from the list?
		// are we supposed to free unused names or are we supposed to never use it again?

		this.name = newName;

	}

}

Robot.releaseNames = () => {};


if(TESTING){

	let robot = new Robot();

	console.log(robot.name)

}