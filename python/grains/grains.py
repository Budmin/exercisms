
def square(number):

    if (number < 1 or number > 64):
        # throw
        raise ValueError("Number must be between 1 and 64 inclusive")
    
    else:
        return pow(2, number - 1)


def total():
    return 18446744073709551615