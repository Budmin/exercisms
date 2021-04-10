
    # Alice, Bob, Charlie, David,
    # Eve, Fred, Ginny, Harriet,
    # Ileana, Joseph, Kincaid, and Larry.


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
            print('sort students and then they are the students')
            

        
        # then assign plants to the studetns
        for student in self.students:
            print(student)


        print(self.plant_diagram)




g = Garden('VR\nGG')