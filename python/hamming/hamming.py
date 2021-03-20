def distance(strand_a, strand_b):
    distance = 0

    # the two strands must be the same length
    if( len(strand_a) != len(strand_b) ):
        raise ValueError("The two strands must be the same length")

    for i in range(len(strand_a)):
        if(strand_a[i] != strand_b[i]):
            distance += 1
        
    return distance
