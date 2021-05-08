# {
#   team_name: {
#   matches played: int
#   wins: int
#   draws: int
#   losses: int
#   points: int
# }
# }


def tally(rows):

    stats = {}

    for game in rows:
        details = game.split(';')

        if(not details[0] in stats):
            stats[details[0]] = {
                'matches_played': 0,
                'win': 0,
                'draw': 0,
                'loss': 0,
                'points': 0
            }

        if(not details[1] in stats):
            stats[details[1]] = {
                'matches_played': 0,
                'win': 0,
                'draw': 0,
                'loss': 0,
                'points': 0
            }
        


        if(details[2] == 'win'):
            # team one beats team two
            stats[details[0]]['win'] += 1
            stats[details[1]]['loss'] += 1

        elif(details[2] == 'loss'):
            # team one lost to team two
            stats[details[0]]['loss'] += 1
            stats[details[1]]['win'] += 1

        else:
            # there's a draw
            stats[details[0]]['draw'] += 1
            stats[details[1]]['draw'] += 1
        
        stats[details[0]]['matches_played'] += 1
        stats[details[1]]['matches_played'] += 1
        



    output = ["Team                           | MP |  W |  D |  L |  P"]

    for team in sorted(stats):
        # calculate points
        stats[team]['points'] = (stats[team]['draw']) + (stats[team]['win'] * 3)

        # add team to output
        output.append( "{}{}|  {} |  {} |  {} |  {} |  {}".format( team, (" " * (31 - len(team))), stats[team]['matches_played'], stats[team]['win'], stats[team]['draw'], stats[team]['loss'], stats[team]['points'] ) )


    print(output)
    return output
