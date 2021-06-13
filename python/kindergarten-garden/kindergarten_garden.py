
def pairwise(iterable):
    a = iter(iterable)
    return zip(a, a)


class Garden:

    def __init__(
    self, 
    diagram, 
    students=[
        'Alice', 
        'Bob', 
        'Charlie', 
        'David', 
        'Eve', 
        'Fred', 
        'Ginny', 
        'Harriet', 
        'Ileana', 
        'Joseph', 
        'Kincaid', 
        'Larry'
    ]
    ):
        self.students = sorted(students)
        plants = diagram.split('\n')
        plants[0] = pairwise(plants[0])
        plants[1] = pairwise(plants[1])

        self.plantMap = list(zip(plants[0], plants[1]))



    def plants(self, student):
        index = self.students.index(student)
        mapSlice = self.plantMap[index]
        return ( list( map( self.parsePlant, mapSlice[0] + mapSlice[1] ) ) )

    def parsePlant(self, plant):
        if plant == 'R':
            return 'Radishes'
        elif plant == 'C':
            return 'Clover'
        elif plant == 'G':
            return 'Grass'
        elif plant == 'V':
            return 'Violets'