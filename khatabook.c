#include <stdio.h>
#include<string.h>
//isme menu loop use karna jaroori hai kyuki jo dukaan wala hoga wo multiple users ka input daalega par konsa loop so ek baar to chalna hi chahiye so we will use do while loop
struct transaction{
    char medicine[30];
    int amount;
    int paymentstatus;
};
struct customer{
char name[30];
char mobileno[11];
struct transaction transactions[20];
int transactionCount;
};

int main(){
    struct customer customers[100];
    int customerCount = 0;
    int choice;
    struct customer c1;
    do{
    printf("===================================\n");
    printf("MEDICAL KHATA MANAGER\n");
    printf("===================================\n");
    printf("1.Add Customer\n");
    printf("2.Add Transaction\n");
    printf("3.View Customer Khata\n");
    printf("4.View All Customers\n");
    printf("5.View Pending Payments\n");
    printf("6.Mark Payment\n");
    printf("7.Exit\n");

    printf("\nEnter Your Choice:");
    scanf("%d", &choice);

    printf("You selected:%d\n", choice);
    
    switch(choice){
    case 1:
    printf("Add Customer Selected\n");
    printf("Customer Name:\n");
    scanf("%s", customers[customerCount].name);
    printf("CUSTOMER ADDED SUCCESSFULLY!\n");
    printf("Mobile Number:\n");
    scanf("%s", customers[customerCount].mobileno);
    printf("MOBILE NO ADDED SUCCESSFULLY!\n");
    customerCount++;
    break;
    case 2:
    {
    char searchMobile[11];
    int found = 0;
    int customerIndex=-1;
    printf("Add Transaction Selected\n");
    printf("Mobile Number:\n");
    scanf("%s", searchMobile);
    printf("MOBILE NO ADDED SUCCESSFULLY!\n");
    for(int i=0; i<customerCount; i++){
      if(strcmp(searchMobile, customers[i].mobileno) == 0){
         found=1;
         customerIndex=i;
      }
    }
    int transactionIndex;
    if(found==1){
        printf("Customer Found\n");
        transactionIndex=customers[customerIndex].transactionCount;
    printf("Medicine Name:\n");
    scanf("%s", customers[customerIndex].transactions[transactionIndex].medicine);
    printf("MEDICINE ADDED SUCCESSFULLY!\n");
    printf("Amount:\n");
    scanf("%d", &customers[customerIndex].transactions[transactionIndex].amount);
    printf("AMOUNT ADDED SUCCESSFULLY!\n");
    printf("Payment Status:\n");
    printf("1.Paid\n");
    printf("2.Pending\n");
    printf("Enter 1 or 2\n");
    scanf("%d", &customers[customerIndex].transactions[transactionIndex].paymentstatus);
    if(customers[customerIndex].transactions[transactionIndex].paymentstatus == 1){
        printf("PAYMENT IS PAID\n");
    }
    else if (customers[customerIndex].transactions[transactionIndex].paymentstatus == 2){
        printf("PAYMENT IS PENDING\n");
            }
            customers[customerIndex].transactionCount++;
    }
    else{
        printf("Customer Not Found\n");
    }
    break;
}
    case 3:
    {
    char searchMobile[11];
    printf("View Customer Khata Selected\n");
    printf("Enter Mobile Number:\n");
    scanf("%s", searchMobile);
    int found =0;
    int customerIndex = -1;
    for(int i=0; i<customerCount;i++){
        if(strcmp(searchMobile,customers[i].mobileno)==0){
            found=1;
            customerIndex=i;
        }
    }
    if(found==1){
        printf("Customer Found!\n");
        printf("Name: %s\n", customers[customerIndex].name);
        printf("Mobile Number:%s\n", customers[customerIndex].mobileno);
        for(int i=0; i<customers[customerIndex].transactionCount; i++){
        printf("\nTransactions %d\n", i+1);
        printf("Medicine:%s\n", customers[customerIndex].transactions[i].medicine);
        printf("Amount:%d\n", customers[customerIndex].transactions[i].amount);
        
        if(customers[customerIndex].transactions[i].paymentstatus == 1){
        printf("PAYMENT IS PAID\n");
    }
    else if (customers[customerIndex].transactions[i].paymentstatus == 2){
        printf("PAYMENT IS PENDING\n");
    }
}
    }
    else{
        printf("Customer Not Found\n");
    }


    break;
    }
    case 4:
    printf("View All Customers Selected\n");
    for(int i=0;i<customerCount;i++){
        printf("Name: %s\n", customers[i].name);
        printf("Mobile No: %s\n", customers[i].mobileno);
    for(int j=0; j<customers[i].transactionCount; j++){
        printf("Medicine: %s\n", customers[i].transactions[j].medicine);
        printf("Amount: %d\n", customers[i].transactions[j].amount);
        printf("Payment Status: %d\n", customers[i].transactions[j].paymentstatus);
    }
}
    break;
    case 5:
    printf("View Pending Payments\n");
    int pendingFound = 0;
    for(int i=0; i<customerCount;i++){
        for(int j=0; j<customers[i].transactionCount; j++){
        if(customers[i].transactions[j].paymentstatus==2){
            pendingFound = 1;
        printf("Name: %s\n", customers[i].name);
        printf("Mobile No: %s\n", customers[i].mobileno); 
        printf("Amount: %d\n", customers[i].transactions[j].amount);
        }
    }
}
        if(pendingFound == 0){
            printf("No Pending Payments\n");
        }
    break;
    case 6:
    printf("Mark Payment Selected\n");
    char searchMobile[11];
    int found=0;
    int customerIndex = -1;
    printf("Enter Mobile No:\n");
    scanf("%s", searchMobile);
    for(int i=0; i<customerCount;i++){
        if(strcmp(searchMobile,customers[i].mobileno)==0){
            found = 1;
            customerIndex = i;

            printf("Pending Payments:\n");
            for(int j = 0; j<customers[i].transactionCount; j++){
            if(customers[i].transactions[j].paymentstatus == 2){
            printf("Medicine: %s\n", customers[i].transactions[j].medicine);
            printf("Amount:%d\n", customers[i].transactions[j].amount);
            }
        }
        char medicineName[50];
        printf("Enter Medicine Name:");
        scanf("%s", medicineName);
        for(int j=0; j<customers[i].transactionCount; j++){
            if (strcmp(medicineName, customers[i].transactions[j].medicine)==0 && customers[i].transactions[j].paymentstatus==2){
                customers[i].transactions[j].paymentstatus=1;
            printf("Payment Marked as PAID\n");
            }
        }
        }
    }
    if (found == 0){
    printf("Customer Not Found\n");
    }
    break;
    case 7:
    printf("Exit\n");
    break;
    default:
    printf("Invalid Choice\n");
    }
    }while(choice!=7);
return 0;
}
