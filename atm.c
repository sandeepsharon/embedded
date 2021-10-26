#include <stdio.h>
#include <stdlib.h>

void login(int, int);
void options(int);
int id;
int pwd;
    // customer 1 details
    int customer1_id = 1;
    int customer1_pwd = 1234;
    int balance1 = 1500;

    //customer 2 details
    int cusotmer2_id = 2;
    int customer2_pwd = 4321;
    int balance2 = 1000;

int main() {
    

    printf("You have reached the ATM. Please insert your card\n");
    printf("Please enter the customer id\n");
    scanf("%d", &id);
    printf("Please enter your password\n");
    scanf("%d", &pwd);
    login(id, pwd);


}

void login(int id, int pwd) {
    if ((id == customer1_id) && (pwd == customer1_pwd))
    {
        printf("Sandeep successfully logged in\n");
        options(balance1);
        
    }
    else if ((id == cusotmer2_id) && (pwd == customer2_pwd))
    {
        printf("Sharon succesfully logged in\n");
        options(balance2);
    }
    else {
        printf("ID or password not recognized. Exiting\n");
    }
    
    

}

void options(int balance) {
    int choice;
    int transaction;
    printf("Enter 1 for checking balance\n");
    printf("Enter 2 for transaction\n");
    printf("Enter 3 to Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: 
        printf("Checking your balance\n");
        printf("Your available balance is %d\n", balance);
        
        break;
    case 2:
        printf("Money transaction\n");
        printf("How much money you like to transact? ");
        scanf("%d",  &transaction);
        if (transaction > balance) 
        {
            printf("Not enough balance! Sorry\n");
        }
        else {
            printf("Sending the amount %d to other customer\n", transaction);
            printf("The current balance is %d\n", balance - transaction);
        }
        break;
    case 3:
        printf("Exiting Please remove your card\n");
        exit(0);
        
    
    default:
        break;
    }
}






