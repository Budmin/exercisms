days = ['first', 'second', 'third', 'fourth', 'fifth', 'sixth', 'seventh', 'eighth', 'ninth', 'tenth', 'eleventh', 'twelfth']


verses = {
    1: 'a Partridge in a Pear Tree.',
    2: 'two Turtle Doves, ',
    3: 'three French Hens, ',
    4: 'four Calling Birds, ',
    5: 'five Gold Rings, ',
    6: 'six Geese-a-Laying, ',
    7: 'seven Swans-a-Swimming, ', 
    8: 'eight Maids-a-Milking, ',
    9: 'nine Ladies Dancing, ',
    10: 'ten Lords-a-Leaping, ',
    11: 'eleven Pipers Piping, ',
    12: 'twelve Drummers Drumming, '
}



def recite(start_verse, end_verse):
    output = ["On the " + days[start_verse - 1] + " day of Christmas my true love gave to me: "]


    for verse in range(end_verse, start_verse if start_verse != end_verse else 1, -1):
        output.append(verses[verse])

    # check for only one day


    if(start_verse > 1):
        output.append( 'and ' + verses[1] )
    else:
        output.append(verses[1])

    if(start_verse == end_verse):
        output = [''.join(output)]
    
    return output


expected = [recite(n, n)[0] for n in range(1, 4)]

print(expected)

# print( recite(5, 5) )

