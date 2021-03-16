

export class BankAccount {
  constructor() {
    this.isOpen = false;
    this.accountBalance = 0;
  }

  open() {
    if(this.isOpen){
      throw new ValueError();
    }

    this.isOpen = true;
    this.accountBalance = 0;

  }

  close() {
    if(!this.isOpen){
      throw new ValueError();
    }

    this.isOpen = false;
  }

  deposit(depositAmount) {
    if(!this.isOpen){
      throw new ValueError();
    }

    // can't be negative
    if(depositAmount < 0){
      throw new ValueError();
    }


    this.accountBalance += depositAmount;
  }

  withdraw(withdrawAmount) {
    // can't withdraw on a closed account
    if(!this.isOpen){
      throw new ValueError();
    }

    // can't withdraw more than what you have
    if(withdrawAmount > this.accountBalance){
      throw new ValueError();
    }

    // can't withdraw negative money
    if(withdrawAmount < 0){
      throw new ValueError();
    }

    this.accountBalance -= withdrawAmount;
  }

  get balance() {
    if(!this.isOpen){
      throw new ValueError();
    }

    return this.accountBalance;
  }

  set balance(newValue){
    this.accountBalance = newValue;
  }

}

export class ValueError extends Error {
  constructor() {
    super('Bank account error');
  }
}
