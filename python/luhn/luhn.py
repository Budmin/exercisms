import copy

class Luhn:
    def __init__(self, card_num):
        try:
            self.numbers = [ int(num) for num in list( card_num.replace(' ', '') ) ]
        except:
            # it contains an invalid character and therefore doesn't matter
            self.numbers = None


    def valid(self):

        if( self.numbers == None or len(self.numbers) <= 1):
            return False

        numbers = copy.copy(self.numbers)
        numbers.reverse()
        
        for index, number in enumerate(numbers):
            if(index % 2 == 0):
                continue

            else:
                numbers[index] = number * 2 if number * 2 < 9 else (number * 2) - 9

        return sum(numbers) % 10 == 0

