def steps(number):

    # error handling
    if number <= 0:
        raise ValueError("Has to be a positive integer")

    out = 0

    while number != 1:
        out += 1

        if(number % 2 == 0):
            number /= 2
        else:
            number = 3*number + 1

    return out