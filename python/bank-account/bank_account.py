import threading

class BankAccount:
    def __init__(self):
        self.isOpen = False
        self.balance = 0

    def get_balance(self):
        if(not self.isOpen):
            raise ValueError("This account is closed")

        return self.balance

    def open(self):
        if(self.isOpen):
            raise ValueError("This account is already opened")

        self.isOpen = True
        self.balance = 0

    def deposit(self, amount):
        if(not self.isOpen):
            raise ValueError("This account is closed")

        if(amount < 0):
            raise ValueError("You can't deposit a negative amount")

        threadLock.acquire()
        self.balance += amount
        threadLock.release()

    def withdraw(self, amount):
        if(amount > self.balance):
            raise ValueError("You don't have enough money to do that")

        if(amount < 0):
            raise ValueError("You can't withdraw a negative amount")

        threadLock.acquire()
        self.balance -= amount
        threadLock.release()

    def close(self):
        if(not self.isOpen):
            raise ValueError("This account is already closed")

        self.isOpen = False

threadLock = threading.Lock()