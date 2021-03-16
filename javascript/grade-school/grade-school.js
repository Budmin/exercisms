//
// This is only a SKELETON file for the 'Grade School' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export class GradeSchool {

  constructor(){
    this.studentRoster = {}
  }

  roster() {

    // this returns a copy of the roster so it can't be mutated directly
    return JSON.parse(JSON.stringify(this.studentRoster));

  }

  add(studentName, studentGrade) {

    // check if this student already exists in another grade (or the same grade)
    // if they do, remove them and add to current grade
    // if they already exist in target grade, return
    for(let grade in this.studentRoster){
      if(this.studentRoster.hasOwnProperty(grade)){

        // using this instead of .includes() because it also provides the index
        let studentGradeIndex = this.studentRoster[grade].indexOf(studentName)

        if(studentGradeIndex !== -1){

          if(grade !== studentGrade){
            // remove them from grade
            // removing one student shouldn't break the sorting
            this.studentRoster[grade].splice(studentGradeIndex, 1);

          }
          else{
            // they're already where they need to be, so return.
            // no need to do duplicate work
            return;
          }

        }

      }
    }


    // grade already exists, so just push to the array
    if(this.studentRoster.hasOwnProperty(studentGrade)){
      this.studentRoster[studentGrade].push(studentName);
    }
    // grade doesn't exist, so create it
    else{
      this.studentRoster[studentGrade] = [studentName];
    }

    // you could argue that doing this on insert would be faster... Too Bad!
    this.studentRoster[studentGrade].sort(function (a, b) {
      if (a < b) {
        return -1;
      }
      if (a > b) {
        return 1;
      }
      return 0;
    })

  }

  grade(studentGrade) {
    
    // remember to return copies of the array, not the array itself
    let output;

    if(this.studentRoster.hasOwnProperty(studentGrade)){
      output = this.studentRoster[studentGrade].slice();
    }
    else{
      output = [];
    }

    return output;

  }
}


