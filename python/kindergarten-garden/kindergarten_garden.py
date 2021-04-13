
    # Alice, Bob, Charlie, David,
    # Eve, Fred, Ginny, Harriet,
    # Ileana, Joseph, Kincaid, and Larry.


#  grass, clover, radishes, and violets.

class Garden:
    def __init__(self, diagram, students = None):

        self.plant_diagram = diagram.split('\n')

        self.students = {}

        if(students == None):
            # default students
            self.students = {
                'Alice': [],
                'Bob': [],
                'Charlie': [],
                'David': [],
                'Eve': [],
                'Fred': [],
                'Ginny': [],
                'Harriet': [],
                'Ileana': [],
                'Joseph': [],
                'Larry': []
            }
        
        else:
            # sort students and then they are the the students
            print('sort students and then they are the students')
            

        i = 0



        for student in self.students.items():
            self.students[student[0]].append( self.parse_veggie(self.plant_diagram[0][i] ))
            self.students[student[0]].append( self.parse_veggie(self.plant_diagram[0][i+1] ))
            self.students[student[0]].append( self.parse_veggie(self.plant_diagram[1][i] ))
            self.students[student[0]].append( self.parse_veggie(self.plant_diagram[1][i+1] ))
            i += 2


    def parse_veggie(self, veggie_letter):
        output = ''
        if(veggie_letter == 'G'):
            output = 'Grass'
        elif(veggie_letter == 'C'):
            output = 'Clover'
        elif(veggie_letter == 'R'):
            output = 'Radishes'
        elif(veggie_letter == 'V'):
            output = 'Violets'
        
        return output


    def plants(self, childName):
        return self.students[childName]



g = Garden('VVCG\nVVRC')

print(g.plants('Bob'))