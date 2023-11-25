#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;

void printHeader();
int adminmenu();
int customermenu();
int printMitems(string arrM[], int priceM[], int availableM[], int quantityM[], int &menq);
int printWitems(string arrW[], int priceW[], int availableW[],int quantityW[], int &womenq);
int bill(string arrM[], string arrW[], int totalM[], int totalW[], int priceM[], int priceW[], int quantityM[], int quantityW[], int menq, int womenq, int cardindex, int finalTotal[], string delivery[], string userArea[], bool deliveryop, bool delArea);
int PayBill(int totalM[], int totalW[], int quantityM[], int quantityW[], int priceM[], int priceW[], int availableM[], int availableW[], int menq, int womenq, bool delArea, bool deliveryop, bool &billpaid);
int cart(string arrM[], string arrW[], int quantityM[], int quantityW[], int menq, int womenq);
int status(bool billpaid);
int updatequantity(int quantityM[], int quantityW[], string arrM[], string arrW[], int menq, int womenq, int availableM[], int availableW[], int counter);
string signupMenu(string username[], string &name, string &password1, string customer[], int &cusCount, int &idx, int range);
string signinMenu(string username[], string password[], string role[], int &cardindex, int range, int idx);
bool checkUser(string name, string username[], int range);
int usernameInd(string name, int idx, string username[], int range);
int deliveryoptions(bool &deliveryop, string delivery[], int cardindex, int cardno[]);
int deliveryArea(int areas, string deliveryAreas[], string userArea[], bool &delArea, int cardindex);
void resetCart(int menq, int womenq, int quantityM[], int quantityW[]);
int leaveReview(string reviews[], int &reviewindex, int cusCount);
void restrictGo(int go);
int adminGenderPage();
int AdminMitems(string arrM[], int priceM[], int availableM[], int menq);
int AdminWitems(string arrW[], int priceW[], int availableW[], int womenq);
int returnforAll();
int addMitem(int &menq, string arrM[], int priceM[], int availableM[]);
int addWitem(int &womenq, string arrW[], int priceW[], int availableW[]);
int changeStock(int menq, string arrM[], int availableM[], string arrW[], int womenq, int availableW[] );
int checkReviews(string reviews[], int cardindex, string username[], int reviewindex);
int changeName(int menq, int womenq, string arrM[], string arrW[]);
int removeItem(int &menq, int &womenq, string arrM[], string arrW[], int priceM[], int priceW[], int availableM[], int availableW[]);
int seeCustomer(int cusCount, int cardindex, string userArea[], string delivery[], string customer[]);
int addDeliveryArea(int &areas, string deliveryAreas[]);
int removeAddress(int &areas, string deliveryAreas[]);
void clearScreen();
void signinWindow(string &name, string &password1);
void signupWindow(string &name, string &password1);
string takeRole();
void congratsforSignup();
void congratsforSignin();
int takeNumToAdd();
string takeNametoAdd(int counter);
int takePricetoAdd();
int makePriceAccordingToCriteria(int price);
int takeQStockToAdd();
int makeQStockAccordingtoCriteria(int available);
int takeStock();
int newStockforWomen(int idx, string arrW[]);
int newStockforMen(int idx, string arrM[]);
int makeValueAccToCriteria(int value);
int showreviews(string reviews[], int cusCount, string username[], int &counter);
void newNameforWomen(int idx, int var, string arrW[]);
void newNameforMen(int idx, int var, string arrM[]);
int showCustomersList(int cusCount, int cardIndex, string userArea[], string delivery[], string customer[], int &counter);
int takeNumberofAddress();
int restrictNumberofAddress(int number);
int takeNumberofAddressToRemove();
int takeitem();
int restrictQforMen(int quantity, int availableM[], int idx);
int takeQuantityforMen(int men, int availableM[], int idx);
int restrictQforWomen(int quantity, int availableW[], int idx);
int takeQuantityforWomen(int women, int availableW[], int idx);
void printBillForMen(int menq, int totalM[], int quantityM[], int priceM[], int &sumM, string arrM[]);
void printBillForWomen(int womenq, int totalW[], int quantityW[], int priceW[], int &sumW, string arrW[]);
string billRem1(bool deliveryop, string delivery[], int cardindex);
string billRem1(bool delArea, string delivery[], int cardindex);
int findTotalForBill(int menq, int womenq, int totalM[], int quantityM[], int priceM[], int totalW[], int quantityW[], int priceW[]);
int takeChoiceForBill();
string reasonsForBill(bool deliveryop, bool delArea);
string billPaid(int menq, int availableM[], int quantityM[], int womenq, int availableW[], int quantityW[], bool &billpaid);
int takeDelArea();
int restrictCard(int &a, bool &deliveryop, int cardindex, int cardno[]);
string payOp();
int contactForCustomer(string phoneN, string email);
void setContactInfo(string &phoneN, string &email);
int changeInfo(string &phoneN, string &email);


main()
{
int range=30;
string username[range];
string password[range];
string role[range];
int idx=0;

int menq=4, womenq=4; int cardindex; int areas=4; int cusCount=0;
bool deliveryop=false, delArea=false, billpaid=false;
string name, password1;
string phoneN="0423-123456", email="fashionisu@gmail,com";
string arrM[range]={"Black T-Shirt", "Blue Dress Shirt", "Grey Sweatshirt", "Red Hoodie Printed"};
int priceM[range]={500, 900, 600, 800};
int availableM[range]={24, 20, 23, 24};
int quantityM[range];
string arrW[range]={"Black Printed Shirt", "Blue 3 Piece Suit", "Grey Frock Linen", "Red Dress Printed"};
int priceW[range]={1200, 1100, 1000, 1800};
int availableW[range]={36, 42, 65, 34};
int quantityW[range];
string delivery[range];
int cardno[range];
string deliveryAreas[range]={"Gulberg", "Askari", "DHA", "Model Town"};
string userArea[range];
int totalM[range];
int totalW[range];
int finalTotal[range];
string reviews[range];
int reviewindex=0;
string customer[range];

    int op;

    while(true)
    {
    clearScreen();
    cout << "----------------Log In Or Sign Up Menu-------------" << endl;
    cout << "1. Sign in" << endl;
    cout << "2. Sign up" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice.. : ";
    cin >> op;

    if(op==1)
    {
        clearScreen();
        string role1=signinMenu(username, password, role, cardindex, range, idx);
        if(role1=="Admin")
        {
            int adminchoice;
            int choose;
            while(true)
            {
                clearScreen();
                cout << endl;
                cout << "----------Admin Menu-----------" << endl;
                adminchoice=adminmenu();
                cout << endl;
                choose=adminchoice;
            
            if(adminchoice==1)
            {
                clearScreen();
                cout << endl;
                cout << "----------Admin Gender Page-----------" << endl;
                int gender=adminGenderPage();
                cout << endl;
                if(gender==1)
                {
                    clearScreen();
                    cout << endl;
                    cout << "-------------------Admin Male Items-------------------" << endl;
                    int go=AdminMitems(arrM, priceM, availableM, menq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
            
                }
                else if(gender==2)
                {
                    clearScreen();
                    cout << endl;
                    cout << "-------------------Admin Female Items-------------------" << endl;
                    int go=AdminWitems(arrW, priceW, availableW, womenq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                        
                }

                else
                {
                    Sleep(300);
                }
            }

            else if(adminchoice==2)
            {
                clearScreen();
                cout << endl;
                cout << "----------Admin Gender Page-----------" << endl;
                int gender=adminGenderPage();
                cout << endl;
                if(gender==1)
                {
                    clearScreen();
                    cout << endl;
                    cout << "-------------------Addition In Male Items-------------------" << endl;
                    int go=addMitem(menq, arrM, priceM, availableM);
                    cout << endl;
                    if(go!=0)
                    {
                        restrictGo(go);
                        
                    }
                        
                }
                else if(gender==2)
                {   clearScreen();
                    cout << endl;
                    cout << "-------------------Addition In Female Items-------------------" << endl;
                    int go=addWitem(womenq, arrW, priceW, availableW);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }

                else
                {
                    Sleep(300);
                }
            }

            else if(adminchoice==3)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Change Stock-------------------" << endl;
                cout << left << setw(12) << "Item no:" << setw(25) << "Name" << setw(10) << "Available Articles: " << endl;
                for(int idx=0; idx<menq; idx++)
                {
                cout << left << setw(12) << to_string(idx+1)+". " << setw(25) << arrM[idx] << setw(10)<< availableM[idx] << endl;
                }
                for(int idx=0; idx<womenq; idx++)
                {
                cout << left << setw(12) << to_string(idx+1+menq)+". " << setw(25) << arrW[idx] << setw(10)<< availableW[idx] << endl;
                }
                int go=changeStock(menq, arrM, availableM, arrW, womenq, availableW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==4)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Show Reviews-------------------" << endl;
                int go=checkReviews(reviews, cardindex, username, reviewindex);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==6)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Change Name-------------------" << endl;
                int go=changeName(menq, womenq, arrM, arrW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            

            else if(adminchoice==5)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Remove Item-------------------" << endl;
                int go=removeItem(menq, womenq, arrM, arrW, priceM, priceW, availableM, availableW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==7)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Our Customers-------------------" << endl;
                int go=seeCustomer(cusCount, cardindex, userArea, delivery, customer);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==8)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Add Delivery Area-------------------" << endl;
                cout << "These are the delivery Areas: " << endl;
                for(int idx=0; idx<areas; idx++)
                {
                    cout << idx+1 << ". " << deliveryAreas[idx] << endl;
                }
                int go=addDeliveryArea(areas, deliveryAreas);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==9)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Remove Delivery Area-------------------" << endl;
                cout << endl << endl;
                cout << "Select the number of address to remove: " << endl << endl;
                for(int idx=0; idx<areas; idx++)
                {
                cout << idx+1 << ". " << deliveryAreas[idx] << endl;
                }
                int go=removeAddress(areas, deliveryAreas);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }
            else if(adminchoice==10)
            {
                clearScreen();
                cout << endl;
                cout << "-------------------Change Contact US Information-------------------" << endl;
                cout << endl << endl;
                cout << "Our Contact Number: " << phoneN << endl;
                cout << "Our Email Address: " << email << endl;
                cout << "------------------------------------" << endl;
                int go=changeInfo(phoneN, email);
                 if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==11)
            {
                break;

            }

            else
            {
            cout << "Incorrect Input...";
            Sleep(300);
            }

            
            }

        }

        else if(role1=="Customer")
        {
            resetCart(menq, womenq, quantityM, quantityW);
            int customerchoice;
            int choose;
            while(true)
            {
                clearScreen();
                cout << endl;
                cout << "----------Customer Menu-----------" << endl;
                customerchoice=customermenu();
                choose=customerchoice;
                if(customerchoice==1)
                {
                    clearScreen();
                    cout << endl;
                    cout << "-------------------Gender Page-------------------" << endl;
                    int gender=adminGenderPage();
                    if(gender==1)
                    {
                        clearScreen();
                        cout << endl;
                        cout << "-------------------Male Items Page-------------------" << endl;
                        cout << endl << endl;
                        cout << "Enter your choice: " << endl;
                        for(int idx=0; idx<menq; idx++)
                        {
                        cout << idx+1 <<". "<< arrM[idx] << " \t " <<" Rs " << priceM[idx] << endl;
                        }
                        cout << endl;
                        int go=printMitems(arrM, priceM, availableM, quantityM, menq);
                        if(go!=0)
                        {
                            restrictGo(go);
                        }
                    }
                    else if(gender==2)
                    {
                        clearScreen();
                        cout << endl;
                        cout << "-------------------Women Items Page-------------------" << endl;
                        cout << endl << endl;
                        cout << "Enter your choice: " << endl;
                            for(int idx=0; idx<womenq; idx++)
                            {
                            cout << idx+1 <<". "<< arrW[idx] << " \t " <<" Rs " << priceW[idx] << endl;
                            }
                        int go=printWitems(arrW, priceW, availableW, quantityW, womenq);
                        if(go!=0)
                        {
                            restrictGo(go);
                        }
                    }
                    else
                    {
                    Sleep(300);
                    }
                }
                else if(customerchoice==5)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Print The Bill----------------------" << endl << endl;
                    cout << left << setw(25) << " Item" << setw(20) << "Price" << setw(20) << "Quantity" << setw(20) << "Total Price" << endl;
                    int go=bill(arrM, arrW, totalM, totalW, priceM, priceW, quantityM, quantityW, menq, womenq, cardindex, finalTotal, delivery, userArea, deliveryop, delArea);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==7)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Pay The Bill----------------------" << endl << endl;
                    int go=PayBill(totalM, totalW, quantityM, quantityW, priceM, priceW, availableM, availableW, menq, womenq, delArea, deliveryop, billpaid);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==3)
                {
                    clearScreen();
                    cout << endl;
                    cout << "-------------------------Payment Options------------------------" << endl;
                    cout << endl;
                    int go=deliveryoptions(deliveryop, delivery, cardindex, cardno);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==2)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Cart-----------------------" << endl;
                    cout << endl;
                    cout << left << setw(25) << " Item " << setw(20) << "Quantity " << endl;
                    int go=cart(arrM, arrW, quantityM, quantityW, menq, womenq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==4)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Select Delivery Area-----------------------" << endl;
                    cout << endl;
                    for(int idx=0; idx<areas; idx++)
                    {
                    cout << idx+1 << ". " << deliveryAreas[idx] << endl;
                    }
                    int go=deliveryArea(areas, deliveryAreas, userArea, delArea, cardindex);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==6)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Update Quantity-----------------------" << endl;
                    cout << endl << endl;
                    int counter=0;
                    for(int idx=0; idx<menq; idx++)
                    {
                       if(quantityM[idx]!=0)
                        {
                        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << "  Quantity:  " << quantityM[idx] << endl;
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
                    cout << endl << endl;
                    cout << "Select the item to change the quantity of.." << endl << endl;
                    int go=updatequantity(quantityM, quantityW, arrM, arrW, menq, womenq, availableM, availableW, counter);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==8)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Check Status Of Order-----------------------" << endl;
                    cout << endl << endl;
                    int go=status(billpaid);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==11)
                {
                    resetCart(menq, womenq, quantityM, quantityW);
                    break;
                }
                else if(customerchoice==9)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Leave a Review-----------------------" << endl;
                    cout << endl << endl;
                    int go=leaveReview(reviews, reviewindex, cardindex);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==10)
                {
                    clearScreen();
                    cout << endl;
                    cout << "----------------------Contact Us-----------------------" << endl;
                    cout << endl << endl;
                    int go=contactForCustomer(phoneN, email);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }

                else
                {
                    cout << "Incorrect Input.." << endl;
                    Sleep(300);
                }
            }
        }
    }

    else if(op==2)
    {
            clearScreen();
            string role1=signupMenu(username, name, password1, customer, cusCount, idx, range);
            if((role1=="Admin")|| (role1=="Customer") || (role1=="admin") || (role1=="customer"))
            {
                if(role1=="Customer" || role1=="customer")
                {
                    cusCount++;
                    customer[idx]=name;
                }

                if(role1=="customer")
                {
                    role1="Customer";
                }
                else if(role1=="admin")
                {
                    role1="Admin";
                }
                role[idx]=role1;
                username[idx]=name;
                password[idx]=password1;
                idx++;

        
                congratsforSignup();
            }
            else
            {
                cout << "Incorrect role...";
                Sleep(300);
                clearScreen();
                signupMenu(username, name, password1, customer, cusCount, idx, range);
            }
            

    }

    else if(op==3)
    {
        break;
    }

    else
    {
    cout << "Incorrect Input...";
    Sleep(300);
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


string signinMenu(string username[], string password[], string role[], int &cardindex, int range, int idx)
{
    string name;
    string password1;
    string role1;
    int index;
    signinWindow(name, password1);
    if(checkUser(name, username, range))
    {
        index=usernameInd(name, idx, username, range);
        cardindex=index;
        if(password1==password[index])
        {
            role1= role[index];
            congratsforSignin();
        }
        else
        {
        cout << "User Not Found.";
        Sleep(300);
        }
    }

    return role1;

}

void signupWindow(string &name, string &password1)
{
    cout << endl;
    cout << "--------Sign Up----------";
    cout << endl << endl;
    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> password1;
}

string takeRole()
{
    string role1;
    cout << "Enter Role (Admin or Customer): ";
    cin >> role1;
    cout << endl;
    return role1;
}

void congratsforSignup()
{
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "You have successfully signed up." << endl;
    cout << "Press any key to continue...";
    getch();
}

void congratsforSignin()
{
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "You have successfully signed in." << endl;
    cout << "Press any key to continue...";
    getch();
}


string signupMenu(string username[], string &name, string &password1, string customer[], int &cusCount, int &idx, int range)
{
    string role1;
    signupWindow(name, password1);
    if(checkUser(name, username, range))
    {
        cout << "Username Already Taken..";
        Sleep(300);
        clearScreen();
        role1=="";

    }
    else
    {
        role1=takeRole();
    }

    return role1;


}



int usernameInd(string name, int idx, string username[], int range)
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


bool checkUser(string name, string username[], int range)
{
    for(int x=0; x<range; x++)
    {
        if(name==username[x])
        {
            return true;
        }
    }
    return false;
}



int adminmenu(){

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
    cout << "10. \t Change Contact Us Information" << endl;
    cout << "11. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> adminchoice;
    return adminchoice; 
}


int customermenu()
{
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
    cout << "10. \t Contact Us " << endl;
    cout << "11. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> customerchoice;
    return customerchoice;
}

int takeitem()
{
    int item;
    cout << "Enter number: ";
    cin >> item;
    return item;
}

int takeQuantityforMen(int men, int availableM[], int idx)
{
    int quantity;
    cout << "Available pieces: " << availableM[idx] << endl;
    cout << "Enter Quantity of " << men << " : ";
    cin >> quantity;
    return quantity;
}

int takeQuantityforWomen(int women, int availableW[], int idx)
{
    int quantity;
    cout << "Available pieces: " << availableW[idx] << endl;
    cout << "Enter Quantity of " << women << " : ";
    cin >> quantity;
    return quantity;
}

int restrictQforMen(int quantity, int availableM[], int idx)
{
    if(quantity>availableM[idx])
    {
        while(quantity>availableM[idx])
        {
        cout << "Not Possible.." << endl;
        cout << "Enter again: "; 
        cin >> quantity;
        }
    }
    return quantity;
}

int restrictQforWomen(int quantity, int availableW[], int idx)
{
    if(quantity>availableW[idx])
    {
        while(quantity>availableW[idx])
        {
        cout << "Not Possible.." << endl;
        cout << "Enter again: "; 
        cin >> quantity;
        }
    }
    return quantity;
}

int printMitems(string arrM[], int priceM[], int availableM[], int quantityM[], int &menq)
{
    int men=takeitem();
    if(men>0 || men<menq)
    {
        for(int idx=0; idx<menq; idx++)
        {
        if(men==idx+1)
        {
            int quantity=takeQuantityforMen(men, availableM, idx);
            quantity=restrictQforMen(quantity, availableM, idx);
            quantityM[idx]=quantity;
        }

        }
    }
    else
    {
        cout << "Incorrect Input...";
        Sleep(200);
    }
    int go=returnforAll();
    return go;
    
}



int printWitems(string arrW[], int priceW[], int availableW[],int quantityW[], int &womenq)
{
    int women=takeitem();
    if(women>0 || women<womenq)
    {
    for(int idx=0; idx<womenq; idx++)
    {
        if(women==idx+1)
        {
            int quantity=takeQuantityforWomen(women, availableW, idx);
            quantity=restrictQforWomen(quantity, availableW, idx);
            quantityW[idx]=quantity;
        }
    }
    }
    else
    {
        cout << "Incorrect Input...";
        Sleep(200);
    }
    int go=returnforAll();
    return go;
}


int cart(string arrM[], string arrW[], int quantityM[], int quantityW[], int menq, int womenq)
{
    for(int idx=0; idx<menq; idx++)
    {
        if(quantityM[idx]!=0 && quantityM[idx]<=1000)
        {
            cout << left << setw(25) << arrM[idx] << setw(22)<< quantityM[idx] << endl;
        }
    }
    for(int idx=0; idx<womenq; idx++)
    {
        if(quantityW[idx]!=0 && quantityW[idx]<=1000)
        {
            cout << left << setw(25) << arrW[idx] << setw(22)<< quantityW[idx] << endl;
        }
    }
    cout << endl << endl;
   int go=returnforAll();
   return go;
}

void printBillForMen(int menq, int totalM[], int quantityM[], int priceM[], int &sumM, string arrM[])
{
    for(int idx=0; idx<menq ; idx++)
    {
        totalM[idx]=quantityM[idx]*priceM[idx];
        sumM+=totalM[idx];
        if(quantityM[idx]!=0)
        {
            cout <<left << setw(25) << arrM[idx] << setw(20) << "Rs "+to_string(priceM[idx]) << setw(20)<< quantityM[idx] << setw(20)<< totalM[idx] << endl;  
        }
    }
}

void printBillForWomen(int womenq, int totalW[], int quantityW[], int priceW[], int &sumW, string arrW[])
{
    for(int idx=0; idx<womenq ; idx++)
    {
        totalW[idx]=quantityW[idx]*priceW[idx];
        sumW+=totalW[idx];
        if(quantityW[idx]!=0)
        {
            cout <<left << setw(25) << arrW[idx] << setw(20) << "Rs "+to_string(priceW[idx]) << setw(20)<< quantityW[idx] << setw(20)<< totalW[idx] << endl;  
        }
    }
}

string billRem1(bool deliveryop, string delivery[], int cardindex)
{
    string part1;
    if(deliveryop==1)
    {
    part1="Your Payment Method: " + (delivery[cardindex]);
    }
    else
    {
    part1="Your Payment Method: (Not selected yet) ";
    }

    return part1;
}

string billRem2(bool delArea, string userArea[], int cardindex)
{
    string part2;
    if(delArea==1)
    {
    part2="Your delivery Address: " + userArea[cardindex];
    }
    else
    {
    part2="Your deliver Address: (Not selected yet) "; 
    }

    return part2;
}


int bill(string arrM[], string arrW[], int totalM[], int totalW[], int priceM[], int priceW[], int quantityM[], int quantityW[], int menq, int womenq, int cardindex, int finalTotal[], string delivery[], string userArea[], bool deliveryop, bool delArea)
{
    int sumM=0;
    int sumW=0;
    printBillForMen(menq, totalM, quantityM, priceM, sumM, arrM);
    printBillForWomen(womenq,totalW, quantityW, priceW, sumW, arrW);

    finalTotal[cardindex]=sumM+sumW;

    cout << "***************************************************************************************" << endl;
    cout << "\t\t \t\t\t\t\t Total Bill: Rs" << finalTotal[cardindex] << endl << endl;

    cout << billRem1(deliveryop, delivery, cardindex) << endl;
    cout << billRem2(delArea, userArea, cardindex) << endl;

    int go=returnforAll();
    return go;
}

int findTotalForBill(int menq, int womenq, int totalM[], int quantityM[], int priceM[], int totalW[], int quantityW[], int priceW[])
{
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
     return total;
}

int takeChoiceForBill()
{
        int choice;
        cout << "Enter 1 to pay bill." << endl;
        cout << "Enter any other number to return."<< endl;
        cout << "Enter Your Choice: ";
        cin  >> choice;
        return choice;
}

string billPaid(int menq, int availableM[], int quantityM[], int womenq, int availableW[], int quantityW[], bool &billpaid)
{
    for(int idx=0; idx<menq; idx++)
    {
        availableM[idx]-=quantityM[idx];
    } 
    for(int idx=0; idx<womenq; idx++)
    {
        availableW[idx]-=quantityW[idx];
    } 
    billpaid=true;
    resetCart(menq, womenq, quantityM, quantityW); 
    string result="Your bill has been paid.";
    return result;
}

string reasonsForBill(bool deliveryop, bool delArea)
{
    string reason;
    if(deliveryop==1 && delArea==0)
    {
        reason="Your delivery Area is not selected yet. You can't Pay Bill.";
    }

    else if(delArea==1 && deliveryop==0)
    {
        reason="Your payment option is not selected yet. You can't Pay Bill.";
    }

    else if(delArea==0 && deliveryop==0)
    {
        reason="Neither your payment method nor your delivery Area is selected yet. You can't Pay Bill.";
    }

    return reason;
}

int PayBill(int totalM[], int totalW[], int quantityM[], int quantityW[], int priceM[], int priceW[], int availableM[], int availableW[], int menq, int womenq, bool delArea, bool deliveryop, bool &billpaid)
{
    int total=findTotalForBill(menq,womenq, totalM, quantityM, priceM, totalW, quantityW, priceW);
    cout << "Your total Purchase Amount is Rs " << total << endl;
    if(delArea==1 && deliveryop==1)
    {
        int choice=takeChoiceForBill();
        if(choice==1){
            string result=billPaid(menq, availableM, quantityM, womenq, availableW, quantityW, billpaid);
            cout << result << endl;
            int go=returnforAll();
            return go;  
        }
        else{
            Sleep(300);
        }
    }
    else
    {
        string reason=reasonsForBill(deliveryop, delArea);
        cout << reason << endl;
    }

    int go=returnforAll();
    return go;
}

string payOp()
{
    string delivery1;
    cout << "Enter the way you want to seek out Payment." << endl;
    cout << "Enter (Cash or Card): ";
    cin >> delivery1;
    return delivery1;
}

int takeCardNum()
{
    int card;
    cout << "Enter your card number (Must be 4 digit): ";
    cin >> card;
    return card;
}

int restrictCard(int &a, bool &deliveryop, int cardindex, int cardno[])
{
    if(a>=1000 && a<=9999)
        { cout << "Confirmed.";
            
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

    return a;
}
int deliveryoptions(bool &deliveryop, string delivery[], int cardindex, int cardno[])
{
    
    string delivery1=payOp();
    if(delivery1=="Cash")
    {
        
      cout << "It will be a cash on delivery." << endl;
      deliveryop=true;
      delivery[cardindex]="Cash";
    }
    else if(delivery1=="Card")
    {
        delivery[cardindex]="Card";
        int card=takeCardNum();
        int a=card;
        card=restrictCard(a, deliveryop, cardindex, cardno);
        card=cardno[cardindex];
    }
    else
    {
        cout << "Incorrect Method...";
        Sleep(300);
    }
    int go=returnforAll();
    return go;
}

int takeDelArea()
{
    int choice;
    cout << "Select One of the delivery Areas: " << endl;
    cout << "Enter Choice" << endl;
    cin >> choice;
    return choice;
}
int deliveryArea(int areas, string deliveryAreas[], string userArea[], bool &delArea, int cardindex)
{
    int choice=takeDelArea();
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
    }
    int go=returnforAll();
    return go;
}

int takeQuantitytoChange()
{
    int change;
    cout << "Enter the item no. of the quantity you want to change: ";
    cin >> change;
    return change;
}
int updatequantity(int quantityM[], int quantityW[], string arrM[], string arrW[], int menq, int womenq, int availableM[], int availableW[], int counter)
{
    
    if(counter!=0)
    {
        int change=takeQuantitytoChange();
        if(change>0 && change<=menq)
        {
            int var=change-1;
            for(int idx=0; idx<menq; idx++)
            {
                if(var==idx)
                {
                    cout << "The quantity of " << arrM[idx] << " will be changed. " << endl << endl;
                    int quantity=takeQuantityforMen(change, availableM, idx);
                    quantity=restrictQforMen(quantity, availableM, idx);
                    quantityM[idx]=quantity;
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
                    cout << "The quantity of " << arrW[idx] << " will be changed. " << endl << endl;
                    int quantity=takeQuantityforWomen(change, availableW, idx);
                    quantity=restrictQforWomen(quantity, availableW, idx);
                    quantityW[idx]=quantity;
                }
            }
        }
        else
        {
            cout << "Not a correct option.";
            Sleep(300); 
        }
    }
    else
    {
       cout <<  "Nothing to change." << endl;
    }

    int go=returnforAll();
    return go;

}

int takeDays()
{
     int days;
        cout << "Enter the number of days since order has been placed : ";
        cin >> days;
    return days;
}
int status(bool billpaid)
{
    if(billpaid==1)
    {
        int days=takeDays();
        if(days>3)
        {
            cout << "Order will be arriving soon." << endl;
        }

        else if(days<=3)
        {
            cout << "Order is being prepared." << endl ; 
        }

        else
        {
            cout << "Not correct input"<< endl;
        }
    }
    else{
        cout << "Your order has not been placed yet." << endl;
    }

    int go=returnforAll();
    return go;
}


void resetCart(int menq, int womenq, int quantityM[], int quantityW[]) 
{
    for (int i = 0; i < menq; i++) {
        quantityM[i] = 0;
    }

    for (int i = 0; i < womenq; i++) {
        quantityW[i] = 0;
    }
}

string reviews1()
{
    string review1;
    cout << endl << endl;
    cout << "Leave a review: ";
    cin.ignore();
    getline(cin, review1);
    return review1;
}

int leaveReview(string reviews[], int &reviewindex, int cusCount)
{
    string review;
    review=reviews1();
    reviews[cusCount]=review;
    cout << "Your review has been submitted successfully!" << endl;
    reviewindex++;
    int go=returnforAll();
    return go;
}

int adminGenderPage()
{
    int gender;
    cout << endl << endl;
    cout << "Enter the gender." << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << endl;
    cout << "Press any other key to return." << endl;
    cout << "Enter your choice: ";
    cin >> gender;
    return gender;
    
}


int AdminMitems(string arrM[], int priceM[], int availableM[], int menq)
{
    cout << left << setw(7) << "Index" << setw(25) << "Name" << setw(20) << "Price" << setw(20) << "Available Articles" << endl;
    for (int idx = 0; idx < menq; idx++) {
        cout << left << setw(7) << to_string(idx+1)+". " << setw(25) << arrM[idx] << setw(20) <<"Rs " +to_string(priceM[idx]) << setw(20) << availableM[idx] << endl;
    }
    cout << endl;
    int go=returnforAll();
    return go;

}


int AdminWitems(string arrW[], int priceW[], int availableW[], int womenq)
{
    cout << left << setw(7) << "Index" << setw(25) << "Name" << setw(20) << "Price" << setw(20) << "Available Articles" << endl;
    for (int idx = 0; idx < womenq; idx++) {
        cout << left << setw(7) << to_string(idx+1)+". " << setw(25) << arrW[idx] << setw(20) <<"Rs " +to_string(priceW[idx]) << setw(20) << availableW[idx] << endl;
    }
    cout << endl;
    int go=returnforAll();
    return go;
}


int returnforAll()
{
    int go;
    cout << "Press 0 to return..";
    cin >> go;

    return go;
}

int takeNumToAdd()
{
    int number;
    cout << "Enter the number of articles to add: ";
    cin >> number;
    return number;
}

string takeNametoAdd(int counter)
{
    string name;
    cout << "Enter the name of the " << counter  << " article: ";
    cin.ignore();
    getline(cin, name);
    return name;
}

int takePricetoAdd()
{
    int price;
    cout << "Enter its price(Must not be greater than 10,000): ";
    cin >> price;
    return price;
}

int makePriceAccordingToCriteria(int price)
{
    if(!(price>0 && price <=10000))
        {
            while(!(price>0 && price<=10000))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter price again: ";
                cin >> price;
            }
        }
    return price;
}

int takeQStockToAdd()
{
    int available;
    cout << "Enter its quantity(Must not be greater than 1000): ";
    cin >> available;
    return available;
}

int makeQStockAccordingtoCriteria(int available)
{
    if(!(available>=0 && available <=100))
        {
            while(!(available>0 && available<=1000))
            {
                cout << "Not according to given criteria." << endl;
                cout << "Enter quantity again: ";
                cin >> available;
            }
        }
    return available;
}

int addMitem(int &menq, string arrM[], int priceM[], int availableM[])
{
    int number=takeNumToAdd();
    string name;
    int price;
    int available;
    int counter=1;

    int a=menq;
    menq=number+menq;

    for(int idx=a; idx<menq; idx++)
    {
        name=takeNametoAdd(counter);
        price=takePricetoAdd();
        price=makePriceAccordingToCriteria(price);
        available=takeQStockToAdd();
        available=makeQStockAccordingtoCriteria(available);
        cout << endl << endl;
        arrM[idx]=name;
        priceM[idx]=price;
        availableM[idx]=available;
        counter++;
    }

    int go = returnforAll();
    return go;
}

int addWitem(int &womenq, string arrW[], int priceW[], int availableW[])
{
    int number=takeNumToAdd();;
    string name;
    int price;
    int available;
    int counter=1;
    int a=womenq;
    womenq=number+womenq;
    for(int idx=a; idx<womenq; idx++)
    {
        name=takeNametoAdd(counter);
        price=takePricetoAdd();
        price=makePriceAccordingToCriteria(price);
        available=takeQStockToAdd();
        available=makeQStockAccordingtoCriteria(available);
        cout << endl << endl;

        arrW[idx]=name;
        priceW[idx]=price;
        availableW[idx]=available;
        counter++;

    }

    int go=returnforAll();
    return go;
}

int takeStock()
{
    int change;
    cout << "Select the item to change the stock of.." << endl;
    cout << "Enter item no. : ";
    cin >> change;
    return change;
}

int newStockforMen(int idx, string arrM[])
{
    int value;
    cout << "Enter new Stock for " << arrM[idx] << " (Must not be greater than 1000): ";
    cin >> value;
    return value;
}

int newStockforWomen(int idx, string arrW[])
{
    int value;
    cout << "Enter new Stock for " << arrW[idx] << " (Must not be greater than 1000): ";
    cin >> value;
    return value;
}

int makeValueAccToCriteria(int value)
{
    if(!(value>=0 && value<=1000))
    {
        while(!(value>=0 && value<=1000))
        {
            cout << "Not Possible..." << endl;
            cout << "Enter Stock Again: ";
            cin >> value;
            return value;
        }
    }
    else
    {
    return value;
    }

}

int changeStock(int menq, string arrM[], int availableM[], string arrW[], int womenq, int availableW[])
{
    int value;
    int change=takeStock();
    if(change>0 && change<=menq)
    {
        
        int var=change-1;
        for(int idx=0; idx<menq; idx++)
        {
            if(var==idx)
            {
                value=newStockforMen( idx, arrM);
                value=makeValueAccToCriteria(value);
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
                value=newStockforWomen(idx, arrW);
                value=makeValueAccToCriteria(value);
                availableW[idx]=value;
            }
        } 
    }
    else
    {
        cout << "Not a correct option." << endl;
        Sleep(300);     
    }
    int go=returnforAll();
    return go;
}

int showreviews(string reviews[], int cusCount, string username[], int &counter)
{
    for(int idx=0; idx<cusCount; idx++)
        {
            if(reviews[idx]!="")
            {
            cout << counter << ". Review by " << username[idx]  << ": " << endl;
            cout <<"\t"  << reviews[idx] << endl << endl; 
            counter++;
            }
        }

    return counter;
}

int checkReviews(string reviews[], int cusCount, string username[], int reviewindex)
{
    int counter=1;
    if(reviewindex!=0)
    {
        int list=showreviews(reviews, cusCount, username, counter);
    }

    else
    {   cout << endl << endl;
        cout << "There are no reviews yet." << endl;
    }

    int go=returnforAll();
    return go;

}

int takeName(int menq, int womenq, string arrM[], string arrW[])
{
    for(int idx=0; idx<menq; idx++)
    {
        cout << "Item no: " << idx+1 <<".  " <<  arrM[idx] << endl;
    }
    for(int idx=0; idx<womenq; idx++)
    {
        cout << "Item no: " << idx+1+menq <<".  " << arrW[idx] <<endl;  
    }
    cout << "Select the item ..." << endl << endl;
    int change;
    cout << "Enter item no. : ";
    cin >> change;
    return change;
}

void newNameforMen(int idx, int var, string arrM[])
{
    cout << "Enter new name for " << arrM[idx] << ": ";
    cin.ignore();
    getline(cin, arrM[var]);
    cout << "Name succesfully changed." << endl;
}

void newNameforWomen(int idx, int var, string arrW[])
{
    cout << "Enter new name for " << arrW[idx] << ": ";
    cin.ignore();
    getline(cin, arrW[var]);
    cout << "Name succesfully changed." << endl;
}

int changeName(int menq, int womenq, string arrM[], string arrW[])
{
    int change=takeName(menq, womenq, arrM, arrW);
    if(change>0 && change<=menq)
    {
        int var=change-1;
        for(int idx=0; idx<menq; idx++)
        {
            if(var==idx)
            {
                newNameforMen(idx, var, arrM);
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
               newNameforWomen(idx, var, arrW);
            }
        }
    }
    else
    {
        cout << "Not a correct option." << endl;
        Sleep(300);    
    }

    int go=returnforAll();
    return go;
}


int removeItem(int &menq, int &womenq, string arrM[], string arrW[], int priceM[], int priceW[], int availableM[], int availableW[])
{
    int remove=takeName(menq, womenq, arrM, arrW);
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
        {   if(var==idx)
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
    }
    int go=returnforAll();
    return go;
}

int showCustomersList(int cusCount, int cardindex, string userArea[], string delivery[], string customer[], int &counter)
{
    for(int idx=0; idx<cusCount; idx++)
        {
            if(userArea[idx]!="" && delivery[idx]!="")
            {
            cout << left << setw(12) <<to_string(counter)+". " << setw(20) <<  customer[idx] << setw(20) << userArea[idx] << setw(20)<< delivery[idx]<< endl;
            }
            else if(userArea[idx]!=""  && delivery[idx]=="")
            {
            cout << left << setw(12) <<to_string(counter)+". " << setw(20) <<  customer[idx] << setw(20) << userArea[idx] << setw(20)<< "Not Selected"<< endl;
            }
            else if(userArea[idx]=="" && delivery[idx]!="")
            {
            cout << left << setw(12) <<to_string(counter)+". " << setw(20) <<  customer[idx] << setw(20) << "Not Selected" << setw(20)<< delivery[idx]<< endl;   
            }
            else 
            {
            cout << left << setw(12) <<to_string(counter)+". " << setw(20) <<  customer[idx] << setw(20) << "Not Selected" << setw(20)<< "Not Selected" << endl;
            }
            counter++;
        }

    return counter;
}

int seeCustomer(int cusCount, int cardindex, string userArea[], string delivery[], string customer[])
{
    if(cusCount!=0)
    {
        int counter=1;
        cout << endl << endl;
        cout << "These are the Customers: " << endl << endl;

        cout << left << setw(12) << "Index" << setw(20) <<" Username" << setw(20) << " Address" << setw(20) << " Method" << endl << endl;
        int list=showCustomersList(cusCount, cardindex, userArea, delivery, customer, counter);
    }

    else
    {
        cout << endl << endl;
        cout << "There are no Customers yet." << endl;
    }

    int go=returnforAll();
    return go;
}

int takeNumberofAddress()
{
    int number;
    cout << endl << endl;
    cout << "Enter the number of adresses you want to add: ";
    cin >> number;
    return number;
}

int restrictNumberofAddress(int number)
{
    if(number<=0)
    {
        while(number<=0)
        {
            cout << "Not possible..." << endl;
            cout << "Enter again: ";
            cin >> number;
        }
    }

    return number;
}

int addDeliveryArea(int &areas, string deliveryAreas[])
{   
    int number=takeNumberofAddress();
    number=restrictNumberofAddress(number);
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

    int go=returnforAll();
    return go;
}

int takeNumberofAddressToRemove()
{
    int choice;
    cout << "Enter your Choice: ";
    cin >> choice;
    return choice;
}

int removeAddress(int &areas, string deliveryAreas[])
{
    int choice=takeNumberofAddressToRemove();
    if(choice>0 && choice<=areas)
    {   int var=choice-1;
        areas=areas-1;
        for(int idx=0;idx<areas; idx++)
        { if(var==idx)
            {
            deliveryAreas[idx]=deliveryAreas[idx+1];
            }
        }
        
    }
    else
    {
        cout << "Not a corrext option...";
        Sleep(300);
    }

    int go=returnforAll();
    return go;
}


void restrictGo(int go)
{
    while(go!=0)
    {
    cout << "Try again...: ";
    cin >> go;
    }
}



void clearScreen()
{
    system("cls");
    printHeader();
}


void signinWindow(string &name, string &password1)
{
    cout << endl;
    cout << "--------Sign In----------";
    cout << endl << endl;
    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> password1;
    cout << endl << endl;
}

int contactForCustomer(string phoneN, string email)
{
    cout << "Our Contact Number: "  << phoneN << endl;
    cout << "Our Email Address: " << email <<endl;
    cout << "------------------------------------" << endl;

    int go=returnforAll();
    return go;
}

void setContactInfo(string &phoneN, string &email) 
{
    cout << "Enter new Contact Number: ";
    cin >> phoneN;
    cout << "Enter new Email Address: ";
    cin >> email;
    cout << "Info updated." << endl;
}

int takeChoiceForContact()
{
    int answer;
    cout << "Press 1 to change the Contact Information." << endl;
    cout << "Press any other number to return." << endl;
    cout << "Enter your choice: ";
    cin >> answer;
    return answer;
}
int changeInfo(string &phoneN, string &email)
{
    int answer=takeChoiceForContact();
    if(answer==1)
    {
        setContactInfo(phoneN, email);
    }
    else
    {
        Sleep(300);
    }
    int go=returnforAll();
    return go;
}