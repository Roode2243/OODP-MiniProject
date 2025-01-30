#include<stdio.h>

// Define a structure to represent a bank account
struct bank
{
    int accountno; // Account number of the bank account
    char name[20]; // Name of the account holder
    int balance; // Current balance in the account

};

// Function to display accounts with a balance less than or equal to 100
void balanceless(struct bank A[],int i){
    // Iterate through the array of bank accounts
    for(i=0;i<200;i++){
        // Check if the account balance is less than or equal to 100
        if(A[i].balance<=100){
            // Print account details for accounts with low balance
            printf("Account No:%d\n",A[i].accountno);
            printf("Name of the Account Holder:%s",A[i].name);
        }
    }
}

// Function to handle withdrawal transactions
void withdrawal(struct bank A[],int i){
    int n=1;// Variable to control the loop for multiple transactions
    while(n!=0){
        // Iterate through the array of bank accounts
        for(i=0;i<200;i++){
            int amount,accountno,option;  // Variables for transaction details
            printf("Enter the Account Number:");
            scanf("%d",&accountno);  // Get the account number for withdrawal
            printf("Enter the amount to be withdrawal");
            scanf("%d",&amount); // Get the amount to withdraw

            // Check if the entered account number matches
            if(A[i].accountno==accountno){
                // Check if the balance is sufficient for the withdrawal
                if(A[i].balance<=amount||A[i].balance-amount<=100){
                    printf("Balance is not sufficent");  // Insufficient funds message
                }
                else{
                    // Print account details and updated balance after withdrawal
                    printf("Account no:%d\n",A[i].accountno);
                    printf("Name of the Account Holder\n:%s",A[i].name);
                    printf("Balance Remains After the withdrawal:%d\n",A[i].balance-amount);
                    printf("do you want more deposite\nenter 1 for yes or enter 0 for no");
                    scanf("%d",&option); // Ask if the user wants to continue
                }
                n=option;  // Update the control variable based on user input
                if(option==0){
                    printf("\nThank you for visiting");  // Exit message
                    break;  // Exit the loop if the user chooses not to continue
                }
                printf("\n");  // Print a newline for better readability
            }
        }  
    } 
}

 // Function to handle deposit transactions
void deposit(struct bank A[],int i){
   int n=1;// Variable to control the loop for multiple transactions
    while(n!=0){
        // Iterate through the array of bank accounts
        for(i=0;i<200;i++){
            int option; // Variable to control continuation of transactions
            int amount,accountno;  // Variables for transaction details
            printf("Enter the Account Number:");
            scanf("%d",&accountno);  // Get the account number for deposit
            printf("Enter the amount to be deposit");
            scanf("%d",&amount);  // Get the amount to deposit

            // Check if the entered account number matches
            if(A[i].accountno==accountno){
                // Print account details and updated balance after deposit
                printf("Account no: %d\n",A[i].accountno);
                printf("Name of the Account Holder\n:%s",A[i].name);
                printf("Balance Remains After the withdral:%d\n",A[i].balance+amount);
                printf("do you want more deposite\nenter 1 for yes or enter 0 for no");
                scanf("%d",&option);  // Ask if the user wants to continue
            }
            n=option;  // Update the control variable based on user input
            if(option==0){
                printf("\nThank you for visiting");  // Exit message
                break;  // Exit the loop if the user chooses not to continue
            }
            printf("\n");  // Print a newline for better readability
        }
    }
}

// Main function to execute the banking system
int main(){
    struct bank A[200];  // Array to hold up to 200 bank accounts
    int i;

    // Loop to fetch account details from the user
    for (i=0;i<200;i++){//Fetching values from the user
        printf("\n");
        printf("Enter the Account Number: ");
        scanf("%d",&A[i].accountno);  // Get the account number
        fflush(stdin);  // Clear the input buffer (not recommended, see notes)
        printf("Enter the name of the Account holder: ");
        gets(A[i].name);  // Get the name of the account holder
        printf("Enter the balance: ");
        scanf("%d",&A[i].balance);  // Get the initial balance
       
    }

    // Display accounts with a balance less than or equal to 100
    printf("\nThe detalis of the Account Holders whoes balance is less than 100:\n");
    balanceless(A,i);// Calling the function for balanceless

    int option;
    printf("\n1 for deposit, 0 for withdrawal\n");
    scanf("%d",&option);
    //Creating the "if-else_if-else" for deposite and withdrawal.
    if(option==1){
        deposit(A,i);//Calling the function Deposite.
    }
    else if (option==0)
    {
        withdrawal(A,i);//Calling the function For Withdrawal.
    }
    else{
        printf("Wrong inpunt for withdrawal and deposite");
    }

    return 0;

}
