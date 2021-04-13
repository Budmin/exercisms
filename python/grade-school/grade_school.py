class School:
    def __init__(self):
        self.student_roster = {}

    def add_student(self, name, grade):

        if grade in self.student_roster:
            self.student_roster[grade].append(name)
        else:
            self.student_roster[grade] = [name]

        # sort the array after insertion
        self.student_roster[grade] = sorted(self.student_roster[grade])

        # sort the dictionary
        self.student_roster = dict(sorted(self.student_roster.items(), key=lambda item: item[0]))


    def roster(self):
        output = []

        for grade, students in self.student_roster.items():
            print(students)
            output += students

        return output

    def grade(self, grade_number):
        if grade_number in self.student_roster:
            return self.student_roster[grade_number]
        else:
            return []

