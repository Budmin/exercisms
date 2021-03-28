






def get_verse(n):
    days = [
        'first', 
        'second', 
        'third', 
        'fourth', 
        'fifth', 
        'sixth', 
        'seventh', 
        'eighth', 
        'ninth', 
        'tenth', 
        'eleventh', 
        'twelfth'
    ]


    verses = [
        '{}a Partridge in a Pear Tree.'.format('' if n == 1 else 'and '),
        'two Turtle Doves, ',
        'three French Hens, ',
        'four Calling Birds, ',
        'five Gold Rings, ',
        'six Geese-a-Laying, ',
        'seven Swans-a-Swimming, ', 
        'eight Maids-a-Milking, ',
        'nine Ladies Dancing, ',
        'ten Lords-a-Leaping, ',
        'eleven Pipers Piping, ',
        'twelve Drummers Drumming, '
    ]

    return 'On the {} day of Christmas my true love gave to me: '.format(days[n-1]) + ''.join(verses[n-1::-1])



def recite(start_verse, end_verse):
    return [get_verse(i) for i in range(start_verse, end_verse + 1)]

