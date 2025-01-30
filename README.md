---

# Bank Management System (OODP Mini Project)  

## Project Overview
This project is a simple **Bank Management System** implemented in C using Object-Oriented Design Principles (OODP). It allows users to perform essential banking operations such as:  

- Checking account balances  
- Depositing money  
- Withdrawing money (with a minimum balance restriction)  
- Listing accounts with low balances  

## Features  
✅ Store and manage up to 200 bank accounts  
✅ Prevent withdrawals that bring balance below ₹100  
✅ Allow multiple transactions for deposits and withdrawals  
✅ Display account details for those with low balance  

## How It Works  

1. Initialize Accounts:  
   - The program takes input for 200 bank accounts (Account Number, Name, and Balance).  

2. Check Low Balance Accounts:  
   - It displays details of accounts with a balance of ₹100 or less.  

3. Deposit Money:  
   - Users can enter their account number and deposit money into their account.  

4. Withdraw Money:  
   - Users can enter their account number and withdraw money if they have sufficient balance (above ₹100 after withdrawal).  

5. User Selection:
   - The user chooses between deposit (1) or withdrawal (0) after viewing low-balance accounts.  

## Issues & Improvements  
⚠️ Potential Improvements:  
- Replace `gets()` with `fgets()` to avoid buffer overflow.  
- Optimize search for account numbers to improve efficiency.  
- Allow dynamic account addition instead of a fixed 200 accounts.  

