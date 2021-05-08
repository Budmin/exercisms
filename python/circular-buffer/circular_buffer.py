class BufferFullException(Exception):
    pass


class BufferEmptyException(Exception):
    pass


class CircularBuffer:
    def __init__(self, capacity):
        self.current_index = 0
        self.buffer = [None] * capacity
        self.is_empty = True


    def read(self):
        if(self.is_empty):
            raise BaseException('buffer is empty')
        else:
            output = ''.join(self.buffer)
            self.buffer = [None] * len(self.buffer)
            self.current_index = 0
            return output


    def write(self, data):
        index = self.current_index % len(self.buffer)
        if index >= len(self.buffer):
            print('oob')
        else:
            self.buffer[index] = data
            self.current_index += 1
            self.is_empty = False


    def overwrite(self, data):
        pass

    def clear(self):
        pass
