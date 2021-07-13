def transform(legacy_data):
    output = {}

    for i in legacy_data.items():
        for letter in i[1]:
            output[letter.lower()] = i[0]


    return output
