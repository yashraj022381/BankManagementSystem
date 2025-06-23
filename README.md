# BankManagementSystem in C++

ALGORITHM:-
  Step 1: Start

  Step 2: Display Menu Options

   Show the user options:-

   1. Create Account

   2. Deposit Money

   3. Withdraw Money

   4. Display Account Details

   5. Exit

  Step 3: Take User Input for Choice

   1. Read the user's choice.

  Step 4: Perform Actions Based on Choice

  Case 1: Create Account

   1. Ask the user for Name, Account Number, and Initial Balance.

   2. Create a new BankAccount object and store it in a list.

   3. Confirm account creation.

  Case 2: Deposit Money

   1. Ask the user for Account Number and Deposit Amount.

   2. Search for the account in the list.

   3. If found, add the amount to the balance and confirm the deposit.

   4. If not found, display an error message.

  Case 3: Withdraw Money

   1. Ask the user for the Account Number and Withdrawal Amount.

   2. Search for the account in the list.

   3. If found, check if the balance is sufficient.

   (If yes, deduct the amount and confirm the withdrawal.
   If no, display an insufficient balance message.)
  
   4. If the account is not found, display an error message.

  Case 4: Display Account Details

   1. Ask the user for the Account Number.

   2. Search for the account in the list.

   3. If found, display the account holder's name, account number, and balance.

   4. If not found, display an error message.

  Case 5: Exit Program

   1. Display a thank-you message.

   2. Terminate the program.

  Step 5: Repeat Until User Chooses to Exit

  Step 6: End

HOW THE CODE WORKS :-

1. Class Definition (BankAccount):

The BankAccount class is used to store account details, including:

Account holder’s name
Unique account number
Balance in the account
It contains functions like:

deposit(amount): Adds money to the balance.
withdraw(amount): Deducts money if the balance is sufficient.
displayAccount(): Shows account details.

2. Account Creation:

The user is prompted to enter their name, account number, and an initial deposit.
A new object of BankAccount is created and stored in a list (vector/array).
This allows multiple users to store their accounts in the system.

3. Depositing and Withdrawing Money:

The user enters their account number to perform transactions.
The system searches for the account in the list.
If the account exists:

Deposit: The balance increases by the entered amount.
Withdrawal: The system checks if the balance is sufficient. If yes, money is deducted; if not, an error is shown.
If the account is not found, an error message is displayed.

4. Displaying Account Details:

The user enters an account number, and the system retrieves and displays the corresponding account holder’s name and balance.

5. Menu-Driven User Interaction:

The program runs inside a loop until the user chooses Exit.
A switch-case structure processes and directs user inputs to the appropriate function (Create, Deposit, Withdraw, Display, Exit).
