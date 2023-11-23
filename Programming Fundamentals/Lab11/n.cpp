#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void printHeader();
void adminmenu();
void customermenu();
void genderpage();
void printMitems();
void printWitems();
void bill();
void PayBill();
void cart();
void status();
void returnforCus();
void updatequantity();
int signupMenu();
string signinMenu();
void printHeader();
void customermenu();
void adminmenu();
bool checkUser(string name);
int usernameInd(string name);
void deliveryoptions();
void deliveryArea();
void resetCart();
void leaveReview();

int adminGenderPage();
int AdminMitems();
int AdminWitems();
int returnforAdm();
int addItems();
int addMitem();
int addWitem();
int changeStock();
int checkReviews();
int changeName();
int removeItem();
int seeCustomer();
int addDeliveryArea();
int removeAddress();


string username[100];
string password[100];
string role[100];
int idx=0;


int menq=4, womenq=4; int cardindex; int areas=4; int cusCount=0;
bool deliveryop=false, delArea=false, billpaid=false;
string arrM[30]={"Black T-Shirt", "Blue Dress Shirt", "Grey Sweatshirt", "Red Hoodie Printed"};
int priceM[30]={500, 900, 600, 800};
int availableM[30]={24, 20, 23, 24};
int quantityM[30];
string arrW[30]={"Black Printed Shirt", "Blue 3 Piece Suit", "Grey Frock Linen", "Red Dress Printed"};
int priceW[30]={1200, 1100, 1000, 1800};
int availableW[30]={36, 42, 65, 34};
int quantityW[30];
string delivery[30];
int cardno[30];
string deliveryAreas[30]={"Gulberg", "Askari", "DHA", "Model Town"};
string userArea[30];
int totalM[30];
int totalW[30];
int finalTotal[30];
string reviews[30];
int reviewindex=0;
string customer[30];




main()
{
    int op;

    while(op!=3)
    {
    system("cls");
    printHeader();
    cout << "1. Sign in" << endl;
    cout << "2. Sign up" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice.. : ";
    cin >> op;

    if(op==1)
    {
        signinMenu();
        string role1=signinMenu();
        if(role1=="Admin" )
        {
            adminmenu();
            int adminchoice=adminmenu();

            if(adminchoice==1)
            {
                adminGenderPage();
                int gender=adminGenderPage();
                if(gender==1)
                {
                    AdminMitems();
                    int go=AdminMitems;
                    if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                    else
                    {
                    adminmenu();
                    }
                }
                else if(gender==2)
                {
                    AdminWitems();
                    int go=AdminWitems;
                    if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
                }

                else if(gender==0)
                {
                    adminmenu();
                }

                else
                {
                    cout << "Incorrect Input...";
                    Sleep(300);
                    adminGenderPage();
                }
            }

            else if(adminchoice==2)
            {
                addItems();
                int gender=addItems();
                if(gender==1)
                {
                    addMitem();
                    int go=addMitem();
                    if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
                }
                else if(gender==2)
                {
                    addWitem();
                    int go=addWitem();
                    if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
                }
                else if(gender==0)
                {
                    adminmenu();
                }

                else
                {
                    cout << "Incorrect Input...";
                    Sleep(300);
                    genderpage();
                }
            }

            else if(adminchoice==3)
            {
                changeStock();
                int go=changeStock();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==4)
            {
                checkReviews();
                int go=checkReviews();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==6)
            {
                changeName();
                int go=changeName();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==10)
            {
                main();
            }

            else if(adminchoice==5)
            {
                removeItem();
                int go=removeItem();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==7)
            {
                seeCustomer();
                int go=seeCustomer();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==8)
            {
                addDeliveryArea();
                int go=addDeliveryArea();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else if(adminchoice==9)
            {
                removeAddress();
                int go=removeAddress();
                if(go!=0)
                    {
                        restrictGoforAdmin(go);
                        adminmenu();
                    }
                        
                    else
                    {
                        adminmenu();
                    }
            }

            else
            {
            cout << "Incorrect Input...";
            Sleep(300);
            adminmenu();
            }
        }

        else if(role1=="Customer")
        {
            customermenu();
        }
    }

    if(op==2)
    {
        int go=signupMenu();
        if(go==0)
        {
            main();
        }

    }


    }

}





void printHeader()
{ 
    
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%% #######   #####    #####   ##   ##  ######   #####   ###  ##      ######   #####       ##   ## %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%  ##  ##  ##   ##  ##   ##  ##   ##    ##    ##   ##  #### ##        ##    ##   ##      ##   ## %%%%%%%%%%%%% " << endl;
 	cout <<"%%%%%%%%%%%%%  ##      ##   ##  ##       ##   ##    ##    ##   ##  #######        ##    ##           ##   ## %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%  ####    #######   #####   #######    ##    ##   ##  ## ####        ##     #####       ##   ## %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%  ##      ##   ##       ##  ##   ##    ##    ##   ##  ##  ###        ##         ##      ##   ## %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%  ##      ##   ##  ##   ##  ##   ##    ##    ##   ##  ##   ##        ##    ##   ##      ##   ## %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%% ####     ##   ##   #####   ##   ##  ######   #####   ##   ##      ######   #####        #####  %%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
}


string signinMenu()
{
    string name;
    string password1;
    int index;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t \t \t  Enter Username: ";
    cin >> name;
    cout << "\t \t \t  Enter Password: ";
    cin >> password1;

    cout << endl << endl;
    if(checkUser(name))
    {
    
    index=usernameInd(name);
    cardindex=index;
    if(password1==password[index])
    {
       string role1= role[index];
    

        

    }

    else
    {
        cout << "User Not Found.";
        Sleep(300);
        main();
    }

    }

    return role1;

}


int signupMenu(){
    string name;
    string role1;
    string password1;
    cout << endl<<endl ;
    cout << "Enter Username: ";
    cin >> name;
    if(checkUser(name))
    {
        cout << "Username Already Taken..";
        signupMenu();
    }
    else
    {
    
    cout << "Enter Password: ";
    cin >> password1;

    cout << "Enter Role (Admin or Customer): ";
    cin >> role1;
    cout << endl << endl;
    if(role1=="Admin" || role1=="Customer")
    {
        if(role1=="Customer")
        {
            cusCount++;
            customer[idx]=name;
        }
        role[idx]=role1;
        username[idx]=name;
        password[idx]=password1;
        idx++;

        int go;
        cout << "You have successfully signed up." << endl;
        cout << "Press 0 to return : ";
        cin >> go;
        
        if(go!=0)
        {
            while(go!=0)
            {
                cout << "Incorrect Input Enter again: ";
                cin >> go;
            }
        }
    }
    else
    {
        cout << "Incorrect role..";
        signupMenu();
    }

    }

    return go;


}



int usernameInd(string name)
{
    for(int x=0; x<idx; x++)
    {
        if(name==username[x])
        {
            return x;
            break;
        }
    }
}


bool checkUser(string name)
{
    for(int x=0; x<100; x++)
    {
        if(name==username[x])
        {
            return true;
        }
    }
    return false;
}



int adminmenu(){

    system("cls");
    printHeader();

    int adminchoice;
    cout << endl << endl;
    cout << "Enter one of the following options number..." << endl;
    cout << "1. \t View List Of Clothes" << endl;
    cout << "2. \t Add an item of Clothing" << endl;
    cout << "3. \t Change Available Stock" << endl;
    cout << "4. \t Check Reviews" << endl;
    cout << "5. \t Delete an item of Clothing" << endl;
    cout << "6. \t Change Name of an Item" << endl;
    cout << "7. \t See Current Customers" << endl;
    cout << "8. \t Add Delivery Area" << endl;
    cout << "9. \t Remove a Delivery Area" << endl;
    cout << "10. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> adminchoice;

    cout << endl << endl;

    return adminchoice;

    
}


void customermenu(){

    system("cls");
    printHeader();

    int customerchoice;
    cout << endl << endl;
    cout << "Enter one of the following options number..." << endl;
    cout << "1. \t View List Of Clothes" << endl;
    cout << "2. \t View Cart" << endl;
    cout << "3. \t Select Payment Options" << endl;
    cout << "4. \t Select Delivery Area" << endl;
    cout << "5. \t View the Bill" << endl;
    cout << "6. \t Change Quantity of an item" << endl;
    cout << "7. \t Pay the Bill" << endl;
    cout << "8. \t Check Status of Placed Order" << endl;
    cout << "9. \t Leave a review." << endl;
    cout << "10. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> customerchoice;

    
    if(customerchoice==1)
    {
        genderpage();
    }
    else if(customerchoice==5)
    {
        bill();
    }
    else if(customerchoice==7)
    {
        PayBill();
    }
    else if(customerchoice==3)
    {
        deliveryoptions();
    }
    else if(customerchoice==2)
    {
        cart();
    }
    else if(customerchoice==4)
    {
        deliveryArea();
    }
    else if(customerchoice==6)
    {
        updatequantity();
    }
    else if(customerchoice==8)
    {
        status();
    }
    else if(customerchoice==10)
    {
        resetCart();
        main();
    }
    else if(customerchoice==9)
    {
        leaveReview();
    }

    else
    {
        cout << "Incorrect Input...";
        Sleep(200);
        customermenu();
    }

    
}

void genderpage()
{
    int gender;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter the gender to shop for:" << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> gender;
    if(gender==1)
    {
        printMitems();
    }
    else if(gender==2)
    {
        printWitems();
    }

    else
    {
        cout << "Incorrect Input...";
        Sleep(300);
        genderpage();
    }

}


void printMitems()
{
    int men;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << idx+1 <<". "<< arrM[idx] << " \t " <<" Rs " << priceM[idx] << endl;
    }
    cout << endl;
    cout << "Enter number: ";
    cin >> men;

    if(men>0 || men<5)
    {
    for(int idx=0; idx<menq; idx++)
    {
        if(men==idx+1)
        {
            cout << "Available pieces: " << availableM[idx] << endl;
            cout << "Enter Quantity of " << men << " : ";
            cin >> quantityM[idx];
            if(quantityM[idx]>availableM[idx])
            {
                while(quantityM[idx]>availableM[idx])
                {
                    cout << "Not Possible.." << endl;
                    cout << "Enter again: "; 
                    cin >> quantityM[idx];
                }
            }
        }

    }
  }

else
    {
        cout << "Incorrect Input...";
        Sleep(200);
        printMitems();
        
    }
    

    int go;
    cout << "Press O to return , 1 to continue: ";
    cin >> go;

    if(go!=0 && go!=1)
    {
        cout << "Not a correct Option...";
        cout << "Try again.";
        cin >> go;
    }

    if(go==1)
    {
        printMitems();
    }
    else if(go==0)
    {

        customermenu();
    }
    
}



void printWitems()
{
    int women;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    for(int idx=0; idx<womenq; idx++)
    {
        cout << idx+1 <<". "<< arrW[idx] << " \t " <<" Rs " << priceW[idx] << endl;
    }
    cout << endl;
    cout << "Enter number: ";
    cin >> women;

    if(women>0 || women<5)
    {
    for(int idx=0; idx<womenq; idx++)
    {
        if(women==idx+1)
        {
            cout << "Available pieces: " << availableW[idx] << endl;
            cout << "Enter Quantity of " << women << " : ";
            cin >> quantityW[idx];
            if(quantityW[idx]>availableW[idx])
            {
                while(quantityW[idx]>availableW[idx])
                {
                    cout << "Not Possible.." << endl;
                    cout << "Enter again: "; 
                    cin >> quantityW[idx];
                }
            }
        }

    }
  }

else
    {
        cout << "Incorrect Input...";
        Sleep(200);
        printWitems();
        
    }
    

    int go;
    cout << "Press O to return , 1 to continue: ";
    cin >> go;

    if(go!=0 && go!=1)
    {
        cout << "Not a correct Option...";
        cout << "Try again.";
        cin >> go;
    }

    if(go==1)
    {
        printWitems();
    }
    else if(go==0)
    {

        customermenu();
    }
    
}


void cart()
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t Item\t\t\t\t  Quantity" << endl;
    for(int idx=0; idx<menq; idx++)
    {
        if(quantityM[idx]!=0)
        {
        cout << "\t " << arrM[idx] <<"\t\t\t" << quantityM[idx] << endl;
        }
    }
    for(int idx=0; idx<womenq; idx++)
    {
        if(quantityW[idx]!=0)
        {
        cout << "\t " << arrW[idx] <<"\t\t\t" << quantityW[idx] << endl;
        }
    }

    cout << endl << endl;
   returnforCus();
}

void bill()
{
    int sumM=0;
    int sumW=0;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t Item \t \t \t  Price \t\t  Quantity \t \t Total Price" << endl;

    for(int idx=0; idx<menq ; idx++)
    {
        totalM[idx]=quantityM[idx]*priceM[idx];
        sumM+=totalM[idx];
        if(quantityM[idx]!=0)
        {
            cout <<"\t " << arrM[idx] <<" \t \t " << priceM[idx] <<" \t " << quantityM[idx] <<" \t " << totalM[idx] << endl;  
        }
    }

    for(int idx=0; idx<womenq; idx++)
    {
        totalW[idx]=quantityW[idx]*priceW[idx];
        sumW+=totalW[idx];
        if(quantityW[idx]!=0)
        {
            cout <<"\t " << arrW[idx] <<" \t \t " << priceW[idx] <<" \t  " << quantityW[idx] <<" \t " << totalW[idx] << endl;  
        }
    }

    finalTotal[cardindex]=sumM+sumW;

    cout << "***************************************************************************************" << endl;
    cout << "\t\t \t\t\t\t\t Total Bill: Rs" << finalTotal[cardindex] << endl;

    if(deliveryop==1)
    {
    cout << "Your Payment Method: " << delivery[cardindex] << endl;
    }
    else
    {
        cout << "Your Payment Method: (Not selected yet) " << endl;
    }

    if(delArea==1)
    {
    cout << "Your delivery Address: " << userArea[cardindex] << endl;
    }
    else
    {
        cout <<"Your deliver Address: (Not selected yet) " << endl; 
    }

    returnforCus();
}

void PayBill()
{
    system("cls");
    printHeader();
    int sumM=0, sumW=0;
    for(int idx=0; idx<menq;idx++)
    {
        totalM[idx]=quantityM[idx]*priceM[idx];
        sumM+=totalM[idx];
    }

    for(int idx=0; idx<womenq; idx++)
    {
        totalW[idx]=quantityW[idx]*priceW[idx];
        sumW+=totalW[idx];
    }

    int total=sumM+sumW;
    int choice;
    cout << endl << endl;
    cout << "Your total Purchase Amount is Rs " << total << endl;
    if(delArea==1 && deliveryop==1)
    {
        cout << "Enter 1 to pay bill." << endl;
        cout << "Enter 0 to return to menu."<< endl;
        cout << "Enter Your Choice: ";
        cin  >> choice;
        if(choice==1){
            for(int idx=0; idx<menq; idx++)
            {
                availableM[idx]-=quantityM[idx];
            } 

            for(int idx=0; idx<womenq; idx++)
            {
                availableW[idx]-=quantityW[idx];
            } 

            billpaid=true;

            cout << "Your bill has been paid.";
            resetCart();  

            returnforCus();  
        }
        else if(choice==0)
        {
            customermenu();
        }

        else{
            cout << "Not correct Option...";
            Sleep(300);
            PayBill();
        }

    }

    else if(deliveryop==1 && delArea==0)
    {
        cout << endl << endl;
        cout << "Your delivery Area is not selected yet. You can't Pay Bill.";
        returnforCus();
    }

    else if(delArea==1 && deliveryop==0)
    {
        cout << endl << endl;
        cout << "Your payment option is not selected yet. You can't Pay Bill." << endl;
        returnforCus();
    }

    else
    {
        cout << endl << endl;
        cout << "Neither your payment method or your delivery Area is selected yet. You can't Pay Bill." << endl;
        returnforCus();
    }
}

void deliveryoptions()
{
   system("cls");
   printHeader();
    string delivery1;
    string paymentMethod;
    int card;
    cout << "Enter the way you want to seek out Payment." << endl;
    cout << "Enter (Cash or Card): ";
    cin >> delivery1;
    if(delivery1=="Cash")
    {
        
      cout << "It will be a cash on delivery." << endl;
      deliveryop=true;
      delivery[cardindex]="Cash";
    }
    else if(delivery1=="Card")
    {
        delivery[cardindex]="Card";
        cout << "Enter your card number (Must be 4 digit): ";
        cin >> card;
        int a=card;
        if(a>=1000 && a<=9999)
        { cout << "Confirmed.";
            card=cardno[cardindex];
            deliveryop=true;
        }
        
        else{
            while(!(a>=1000 && a<=9999))
            {
            cout << "Card Number not correct.";
            cout << "Enter number again: ";
            cin >> a;
            
            }
            a=cardno[cardindex];
            cout << "Confirmed." << endl;
            deliveryop=true;
        }

    }

    else
    {
        cout << "Incorrect Method...";
        Sleep(300);
        deliveryoptions();
    }

    returnforCus();


}


void deliveryArea()
{
    system("cls");
    printHeader();
    int choice;
    cout << "Select One of the Delivery Areas: "<< endl;
    for(int idx=0; idx<areas; idx++)
    {
        cout << idx+1 << ". " << deliveryAreas[idx] << endl;
    }
    cout << "Enter Choice" << endl;
    cin >> choice;

    if(choice>0 && choice<=areas)
    {
        for(int idx=0; idx<areas; idx++)
        {
            if(choice==idx+1)
            {
            userArea[cardindex]=deliveryAreas[idx];
            delArea=true;
            }
        }
    }

    else
    {
        cout << "Incorrect Area...";
        Sleep(300);
        deliveryArea();
    }

    returnforCus();
    
}

void updatequantity()
{
    system("cls");
    printHeader();

    int counter=0;
    int change;
    
    cout << "Select the item to change the quantity of.." << endl << endl;
    for(int idx=0; idx<menq; idx++)
    {
        if(quantityM[idx]!=0)
        {
        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << "  Quanitity:  " << quantityM[idx] << endl;
        counter++;
        }

    }
    for(int idx=0; idx<womenq; idx++)
    {
        if(quantityW[idx]!=0)
        {
        cout << "Item no: " << idx+1+menq <<".  " << arrW[idx] << "  Quantity:  " << quantityW[idx] << endl;
        counter++;
        }
    }

    if(counter!=0)
    {
        
        cout << "Enter the item no. of the quantity you want to change: ";
        cin >> change;
        if(change>0 && change<=menq)
        {
            

            int var=change-1;
            for(int idx=0; idx<menq; idx++)
            {
                if(var==idx)
                {
                    cout << "The quantity of " << arrM[idx] << " will be changed. " << endl;
                    cout << "Available pieces: " << availableM[idx] << endl;
                    cout << "Enter new quantity: ";
                    cin >> quantityM[idx];
                    if(quantityM[idx]>availableM[idx])
                    {
                        while(quantityM[idx]>availableM[idx])
                        {
                        cout << "Not Possible.." << endl;
                        cout << "Enter again: "; 
                        cin >> quantityM[idx];
                        }
                    }
                }
            }
        }
        else if(change>menq && change<=(menq+womenq))
        {
            int var=change-menq-1;
            for(int idx=0; idx<womenq; idx++)
            {
                if(var==idx)
                {
                    cout << "The quantity of " << arrW[idx] << " will be changed. " << endl;
                    cout << "Available pieces: " << availableW[idx] << endl;
                    cout << "Enter new quantity: ";
                    cin >> quantityW[idx];
                    if(quantityW[idx]>availableW[idx])
                    {
                        while(quantityW[idx]>availableW[idx])
                        {
                        cout << "Not Possible.." << endl;
                        cout << "Enter again: "; 
                        cin >> quantityW[idx];
                        }
                    }
                }
            }
        }
        else
        {
            cout << "Not a correct option.";
            Sleep(300);
            updatequantity();
            
        }
    }
    else
    {
       cout <<  "Nothing to change.";
    }

    returnforCus();



    
    

}


void status()
{
    system("cls");
    printHeader();

    if(billpaid==1)
    {
        int days;
        cout << "Enter the number of days since order has been placed : ";
        cin >> days;

        if(days>3)
        {
            cout << "Order will be arriving soon." << endl;
        }

        if(days<=3)
        {
            cout << "Order is being prepared." << endl ; 
        }
    }

    else{
        cout << "Your order has not been placed yet." << endl;
    }

    returnforCus();
}


void returnforCus()
{
    int go;
    cout << "Press 0 to return..";
    cin >> go;

    if(go!=0)
    {
        while(go!=0)
        {
        cout << "Try again...: ";
        cin >> go;
        }
        customermenu();
    }
    else
    {
        customermenu();
    }
}


void resetCart() 
{
    for (int i = 0; i < menq; i++) {
        quantityM[i] = 0;
    }

    for (int i = 0; i < womenq; i++) {
        quantityW[i] = 0;
    }
}


void leaveReview()

{
    system("cls");
    printHeader();
    string review;

    cout << endl << endl;
    cout << "Leave a review: ";
    cin.ignore();
    getline(cin, review);

    reviews[cardindex]=review;


    cout << "Your review has been submitted successfully!" << endl;
    reviewindex++;
    returnforCus();
}

int adminGenderPage()
{
    int gender;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter the gender." << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << "Press 0 to return." << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> gender;

    cout << endl << endl;
    return gender;
    
}


int AdminMitems()
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "  Name \t   \t \t Price \t     \t Available Articles" << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << idx+1 <<". "<< arrM[idx] << " \t " <<" Rs " << priceM[idx] << " \t   " << availableM[idx] << endl;
    }

    int go=returnforAdm;
    return go;

}


int AdminWitems()
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "  Name \t   \t \tPrice \t     \t Available Articles" << endl;
    for(int idx=0; idx<womenq; idx++)
    {
        cout << idx+1 <<". "<< arrW[idx] << " \t " <<" Rs " << priceW[idx] << " \t   " << availableW[idx] << endl;
    }

    int go=returnforAdm;
    return go;
}


int returnforAdm()
{
    int go;
    cout << "Press 0 to return..";
    cin >> go;

    return go;
}

int addMitem()
{
    system("cls");
    printHeader();
    int number;
    cout << "Enter the number of articles to add: ";
    cin >> number;

    string name;
    int price;
    int available;
    int counter=1;

    int a=menq;
    menq=number+menq;

    for(int idx=a; idx<menq; idx++)
    {
        cout << "Enter the name of the " << counter  << " article: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter its price(Must not be greater than 5000): ";
        cin >> price;
        if(!(price>0 && price <=5000))
        {
            while(!(price>0 && price<=5000))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter again: ";
                cin >> price;
            }
        }
        cout << "Enter its quantity(Must not be greater than 100): ";
        cin >> available;
        if(!(available>=0 && available <=100))
        {
            while(!(available>0 && available<=100))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter again: ";
                cin >> available;
            }
        }

        cout << endl << endl;

        arrM[idx]=name;
        priceM[idx]=price;
        availableM[idx]=available;
        counter++;

    }

    int go = returnforAdm();
    return go;
}

int addWitem()
{
    system("cls");
    printHeader();

    int number;
    cout << "Enter the number of articles to add: ";
    cin >> number;

    string name;
    int price;
    int available;
    int counter=1;

    int a=womenq;
    womenq=number+womenq;

    for(int idx=a; idx<womenq; idx++)
    {
        cout << "Enter the name of the " << counter  << " article: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter its price: ";
        cin >> price;
        if(!(price>0 && price <=5000))
        {
            while(!(price>0 && price<=5000))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter again: ";
                cin >> price;
            }
        }
        cout << "Enter its quantity(Must not be greater than 100): ";
        cin >> available;
        if(!(available>=0 && available <=100))
        {
            while(!(available>0 && available<=100))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter again: ";
                cin >> available;
            }
        }

        cout << endl << endl;

        arrW[idx]=name;
        priceW[idx]=price;
        availableW[idx]=available;
        counter++;

    }

    int go=returnforAdm();
    return go;
}


int addItems()
{
    int gender;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter the gender." << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> gender;
    
    cout << endl << endl;

    return gender;
}


int changeStock()
{
    system("cls");
    printHeader();
    int change;
    cout << endl << endl;
    cout << "Select the item to change the stock of.." << endl << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << "  Available Articles:  " << availableM[idx] << endl;

    }
    for(int idx=0; idx<womenq; idx++)
    {
        cout << "Item no: " << idx+1+menq <<".  " << arrW[idx] << "  Available Articles:  " << availableW[idx] << endl;  
    }

    cout << "Enter item no. : ";
    cin >> change;

    if(change>0 && change<=menq)
    {
        int var=change-1;
        for(int idx=0; idx<menq; idx++)
        {
            if(var==idx)
            {
                int value;
                cout << "Enter new Stock for " << arrM[idx] << " (Must not be greater than 100): ";
                cin >> value;
                if(!(value>=0 && value<=100))
                {
                    while(!(value>=0 && value<=100))
                    {
                        cout << "Not Possible..." << endl;
                        cout << "Enter Stock Again: ";
                        cin >> value;
                        cout << endl;

                    }
                }
                availableM[idx]=value;
            }
        }

    }

    else if(change>menq && change<=(menq+womenq))
    {
        int var=change-menq-1;
        for(int idx=0; idx<womenq; idx++)
        {
            if(var==idx)
            {
                int value;
                cout << "Enter new Stock for " << arrW[idx] << " (Must not be greater than 100): ";
                cin >> value;
                if(!(value>=0 && value<=100))
                {
                    while(!(value>=0 && value<=100))
                    {
                        cout << "Not Possible..." << endl;
                        cout << "Enter Stock Again: ";
                        cin >> value;
                        cout << endl;

                    }
                }
                availableW[idx]=value;
            }
        }
        
    }

    else
    {
        cout << "Not a correct option." << endl;
        Sleep(300);
        changeStock();
            
    }

    int go=returnforAdm();
    return go;

}


int checkReviews()
{
    system("cls");
    printHeader();
    int counter=1;
    if(reviewindex!=0)
    {
        for(int idx=0; idx<cardindex; idx++)
        {
            if(reviews[idx]!="")
            {
            cout << counter << ". Review by " << username[idx]  << ": " << endl;
            cout <<"\t"  << reviews[idx] << endl << endl; 
            counter++;
            }
        }
    }

    else
    {
        cout << endl << endl;
        cout << "There are no reviews yet.";

    }

    int go=returnforAdm();
    return go;

}

int changeName()
{
    system("cls");
    printHeader();
    int change;
    cout << endl << endl;
    cout << "Select the item to change the name of.." << endl << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << endl;

    }
    for(int idx=0; idx<womenq; idx++)
    {
        cout << "Item no: " << idx+1+menq <<".  " << arrW[idx] <<endl;  
    }

    cout << "Enter item no. : ";
    cin >> change;

    if(change>0 && change<=menq)
    {
        int var=change-1;
        for(int idx=0; idx<menq; idx++)
        {
            if(var==idx)
            {
                cout << "Enter new name for " << arrM[idx] << ": ";
                cin.ignore();
                getline(cin, arrM[var]);

                

                cout << "Name succesfully changed." << endl;

            }

        }

    }

    else if(change>menq && change<=(menq+womenq))
    {
        int var=change-1-menq;
        for(int idx=0; idx<womenq; idx++)
        {
            if(var==idx)
            {
                cout << "Enter new name for " << arrW[idx] << ": ";
                cin.ignore();
                getline(cin, arrW[var]);

                cout << "Name succesfully changed." << endl;

            }

        }
    }

    else
    {
        cout << "Not a correct option." << endl;
        Sleep(300);
        changeName();
            
    }

    int go=returnforAdm();
    return go;



}


int removeItem()
{
    system("cls");
    printHeader();
    int remove;
    cout << endl << endl;
    cout << "Select the item to remove.." << endl << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << endl;

    }
    for(int idx=0; idx<womenq; idx++)
    {
        cout << "Item no: " << idx+1+menq <<".  " << arrW[idx] <<endl;  
    }

    cout << "Enter item no. : ";
    cin >> remove;


    if(remove>0 && remove<=menq)
    {
        int var=remove-1;
        menq=menq-1;

        for(int idx=0; idx<menq; idx++)
        {
            if(var==idx)
            {
                arrM[idx]=arrM[idx+1];
                priceM[idx]=priceM[idx+1];
                availableM[idx]=availableM[idx+1];

                cout << "Item Succesfully deleted." << endl;
            }
        }
    }

    else if(remove>menq && remove<=(menq+womenq))
    {
        int var=remove-1-menq;
        womenq=womenq-1;
        for(int idx=0; idx<womenq; idx++)
        {
            if(var==idx)
            {
                arrW[idx]=arrW[idx+1];
                priceW[idx]=priceW[idx+1];
                availableW[idx]=availableW[idx+1];

                cout << "Item Succesfully deleted." << endl;
            }

        }
    }

    else
    {
        cout << "Not a correct option." << endl;
        Sleep(300);
        removeItem();
            
    }


    int go=returnforAdm();
    return go;
}

int seeCustomer()
{
    system("cls");
    printHeader();
    if(cusCount!=0)
    {
        int counter=1;
        cout << endl << endl;
        cout << "These are the Customers: " << endl << endl;

        cout << "  Username \t   \t \tDelivery Address \t     \t Payment Method" << endl << endl;

        for(int idx=0; idx<cardindex; idx++)
        {
            if(userArea[idx]!="" && delivery[idx]!="")
            {
            cout << counter <<".  " <<  customer[idx] <<" \t \t" << userArea[idx] << " \t   " << delivery[idx]<< endl;
            }
            else if(userArea[idx]!=""  && delivery[idx]=="")
            {
            cout << counter <<".  " <<  customer[idx] <<" \t \t" << userArea[idx] << " \t   " << "Not Selected"<< endl;
            }
            else if(userArea[idx]=="" && delivery[idx]!="")
            {
            cout << counter <<".  " <<  customer[idx] <<" \t \t" << "Not Selected" << " \t   " << delivery[idx]<< endl;   
            }
            else 
            {
            cout << counter <<".  " <<  customer[idx] <<" \t \t" << "Not Selected" << " \t   " << "Not Selected" << endl;
            }

            counter++;

        }


    }

    else
    {
        cout << endl << endl;
        cout << "There are no Customers yet.";
    }

    int go=returnforAdm();
    return go;
}

int addDeliveryArea()
{
    system("cls");
    printHeader();

    cout << "Current Delivery Addresses: " <<endl << endl;

    for(int idx=0; idx<areas; idx++)
    {
        cout << idx+1 << ". " << deliveryAreas[idx] << endl;
    }

    cout << endl << endl;
    int number;
    cout << "Enter the number of adresses you want to add: ";
    cin >> number;

    if(number<=0)
    {
        while(number<=0)
        {
            cout << "Not possible..." << endl;
            cout << "Enter again: ";
            cin >> number;
        }
    }

    int a=areas;
    areas=areas+number;
    for(int idx=a; idx<areas; idx++)
    {
        string address;
        cout << "Enter Address " << idx+1 << ": ";
        cin.ignore();
        getline(cin, address);
        cout << endl << endl;
        deliveryAreas[idx]=address;
        

    }

    int go=returnforAdm();
    return go;
}

int removeAddress()
{
    int choice;
    system("cls");
    printHeader();

    cout << endl << endl;
    cout << "Select the number of address to remove: " << endl << endl;

    for(int idx=0; idx<areas; idx++)
    {
        cout << idx+1 << ". " << deliveryAreas[idx] << endl;
    }

    cout << "Enter your Choice: ";
    cin >> choice;


    if(choice>0 && choice<=areas)
    {
        int var=choice-1;
        areas=areas-1;
        for(int idx=0;idx<areas; idx++)
        {
            if(var==idx)
            {
            deliveryAreas[idx]=deliveryAreas[idx+1];
            }
        }
    }

    else
    {
        cout << "Not a corrext option...";
        Sleep(300);
        removeAddress();
    }

    int go=returnforAdm();
    return go;
}


void restrictGoforAdmin(int go)
{
    while(go!=0)
    {
    cout << "Try again...: ";
    cin >> go;
    }
}

