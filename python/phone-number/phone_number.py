class PhoneNumber:
    def __init__(self, number):
        self.number = list(''.join([digit if digit.isdigit() else '' for digit in number]))

        numberlength = len(self.number)
        # checking to see if we have enough numbers
        if(numberlength  != 10):
            # if there's a +1 just remove it and keep going
            if(numberlength == 11 and self.number[0] == '1'):
                self.number.pop(0)
            else:
                raise ValueError('Needs to be the right length')

        # check for proper area code
        if(self.number[0] == '0' or self.number[0] == '1'):
            raise ValueError('Invalid area code')

        # checking for proper exchange code
        if(self.number[3] == '0' or self.number[3] == '1'):
            raise ValueError('Invalid exhange code')

        self.number = ''.join(self.number)
        self.area_code = self.number[0:3]


    def pretty(self):
        return "({})-{}-{}".format(self.area_code, self.number[3:6], self.number[6:])