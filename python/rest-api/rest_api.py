
class RestAPI:
    def __init__(self, database=None):
        self.database = database

    def get(self, url, payload=None):
        # the only get url we have
        if(url == '/users'):
            print users

    def post(self, url, payload=None):
        pass
