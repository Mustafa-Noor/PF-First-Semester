 #include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void printHeader();
int adminmenu();
int  customermenu();
int genderpage();
int printMitems(string arrM[], int priceM[], int availableM[], int quantityM[], int menq);
int printWitems(string arrW[], int priceW[], int availableW[],int quantityW[], int womenq);
int bill(string arrM[], string arrW[], int totalM[], int totalW[], int priceM[], int priceW[], int quantityM[], int quantityW[], int menq, int womenq, int cardindex, int finalTotal[], string delivery[], string userArea[], bool deliveryop, bool delArea);
int PayBill(int totalM[], int totalW[], int quantityM[], int quantityW[], int priceM[], int priceW[], int availableM[], int availableW[], int menq, int womenq, bool delArea, bool deliveryop, bool billpaid);
int cart(string arrM[], string arrW[], int quantityM[], int quantityW[], int menq, int womenq);
int status(bool billpaid);
int updatequantity(int quantityM[], int quantityW[], string arrM[], string arrW[], int menq, int womenq, int availableM[], int availableW[]);
string signupMenu(string username[], string &name, string &password1, string customer[], int &cusCount, int &idx, int range);
string signinMenu(string username[], string password[], string role[], int &cardindex, int range, int idx);
bool checkUser(string name, string username[], int range);
int usernameInd(string name, int idx, string username[], int range);
int deliveryoptions(bool deliveryop, string delivery[], int cardindex, int cardno[]);
int deliveryArea(int areas, string deliveryAreas[], string userArea[], bool delArea, int cardindex);
void resetCart(int menq, int womenq, int quantityM[], int quantityW[]);
int leaveReview(string reviews[], int &reviewindex, int cardindex);
void restrictGo(int go);
int adminGenderPage();
int AdminMitems(string arrM[], int priceM[], int availableM[], int menq);
int AdminWitems(string arrW[], int priceW[], int availableW[], int womenq);
int returnforAll();
int addItems();
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
    system("cls");
    printHeader();
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
                    int go=AdminMitems(arrM, priceM, availableM, menq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
            
                }
                else if(gender==2)
                {
                    int go=AdminWitems(arrW, priceW, availableW, womenq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                        
                }

                else if(gender==0)
                {
                    
                }

                else
                {
                    cout << "Incorrect Input...";
                    Sleep(300);
                }
            }

            else if(adminchoice==2)
            {
                int gender=adminGenderPage();
                if(gender==1)
                {
                    int go=addMitem(menq, arrM, priceM, availableM);
                    if(go!=0)
                    {
                        restrictGo(go);
                        
                    }
                        
                }
                else if(gender==2)
                {
                    int go=addWitem(womenq, arrW, priceW, availableW);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }

                else if(gender==0)
                {
                }

                else
                {
                    cout << "Incorrect Input...";
                    Sleep(300);
                }
            }

            else if(adminchoice==3)
            {
                int go=changeStock(menq, arrM, availableM, arrW, womenq, availableW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==4)
            {
                int go=checkReviews(reviews, cardindex, username, reviewindex);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==6)
            {
                int go=changeName(menq, womenq, arrM, arrW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            

            else if(adminchoice==5)
            {
                int go=removeItem(menq, womenq, arrM, arrW, priceM, priceW, availableM, availableW);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==7)
            {
                int go=seeCustomer(cusCount, cardindex, userArea, delivery, customer);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==8)
            {
                int go=addDeliveryArea(areas, deliveryAreas);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==9)
            {
                int go=removeAddress(areas, deliveryAreas);
                if(go!=0)
                    {
                        restrictGo(go);
                    }
            }

            else if(adminchoice==10)
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
            int customerchoice;
            int choose;
            while(true)
            {
                customerchoice=customermenu();
                choose=customerchoice;
                if(customerchoice==1)
                {
                    int gender=genderpage();
                    if(gender==1)
                    {
                        int go=printMitems(arrM, priceM, availableM, quantityM, menq);
                        if(go!=0)
                        {
                            restrictGo(go);
                        }
                    }
                    else if(gender==2)
                    {
                        int go=printWitems(arrW, priceW, availableW, quantityW, womenq);
                        if(go!=0)
                        {
                            restrictGo(go);
                        }
                    }
                    else if(gender==0)
                    {
                    }

                    else
                    {
                    cout << "Incorrect Input...";
                    Sleep(300);
                    }
                }
                else if(customerchoice==5)
                {
                    int go=bill(arrM, arrW, totalM, totalW, priceM, priceW, quantityM, quantityW, menq, womenq, cardindex, finalTotal, delivery, userArea, deliveryop, delArea);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==7)
                {
                    int go=PayBill(totalM, totalW, quantityM, quantityW, priceM, priceW, availableM, availableW, menq, womenq, delArea, deliveryop, billpaid);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==3)
                {
                    int go=deliveryoptions(deliveryop, delivery, cardindex, cardno);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==2)
                {
                    int go=cart(arrM, arrW, quantityM, quantityW, menq, womenq);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==4)
                {
                    int go=deliveryArea(areas, deliveryAreas, userArea, delArea, cardindex);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==6)
                {
                    int go=updatequantity(quantityM, quantityW, arrM, arrW, menq, womenq, availableM, availableW);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==8)
                {
                    int go=status(billpaid);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }
                else if(customerchoice==10)
                {
                    resetCart(menq, womenq, quantityM, quantityW);
                    break;
                }
                else if(customerchoice==9)
                {
                    int go=leaveReview(reviews, reviewindex, cardindex);
                    if(go!=0)
                    {
                        restrictGo(go);
                    }
                }

                else
                {
                    cout << "Incorrect Input...";
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
        signinMenu(username, password, role, cardindex, range, idx);
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
        signupMenu(username, name, password1, customer, cusCount, idx, range);
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
    cout << "10. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> adminchoice;
    return adminchoice;

    
}


int customermenu(){

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

    cout << endl << endl;

    return customerchoice;
    
}

int genderpage()
{
    int gender;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter the gender to shop for:" << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << " Press 0 to return." << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> gender;

    cout << endl << endl;

    return gender;
}


int printMitems(string arrM[], int priceM[], int availableM[], int quantityM[], int menq)
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
        ;
        
    }
    

    int go=returnforAll();
    return go;
    
}



int printWitems(string arrW[], int priceW[], int availableW[],int quantityW[], int womenq)
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
        printWitems(arrW, priceW, availableW, quantityW, womenq);
        
    }
    

    int go=returnforAll();
    return go;
    
}


int cart(string arrM[], string arrW[], int quantityM[], int quantityW[], int menq, int womenq)
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
   int go=returnforAll();
   return go;
}

int bill(string arrM[], string arrW[], int totalM[], int totalW[], int priceM[], int priceW[], int quantityM[], int quantityW[], int menq, int womenq, int cardindex, int finalTotal[], string delivery[], string userArea[], bool deliveryop, bool delArea)
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

    int go=returnforAll();
    return go;
}

int PayBill(int totalM[], int totalW[], int quantityM[], int quantityW[], int priceM[], int priceW[], int availableM[], int availableW[], int menq, int womenq, bool delArea, bool deliveryop, bool billpaid)
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
            resetCart(menq, womenq, quantityM, quantityW);  

            int go=returnforAll();
            return go;  
        }
        else if(choice==0)
        {
        }

        else{
            cout << "Not correct Option...";
            Sleep(300);
        }

    }

    else if(deliveryop==1 && delArea==0)
    {
        cout << endl << endl;
        cout << "Your delivery Area is not selected yet. You can't Pay Bill.";
        int go=returnforAll();
        return go;
    }

    else if(delArea==1 && deliveryop==0)
    {
        cout << endl << endl;
        cout << "Your payment option is not selected yet. You can't Pay Bill." << endl;
        int go=returnforAll();
        return go;
    }

    else
    {
        cout << endl << endl;
        cout << "Neither your payment method or your delivery Area is selected yet. You can't Pay Bill." << endl;
        int go=returnforAll();
        return go;
    }
}

int deliveryoptions(bool deliveryop, string delivery[], int cardindex, int cardno[])
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
        deliveryoptions(deliveryop, delivery, cardindex, cardno);
    }

    int go=returnforAll();
    return go;


}


int deliveryArea(int areas, string deliveryAreas[], string userArea[], bool delArea, int cardindex)
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
        deliveryArea(areas, deliveryAreas, userArea, delArea, cardindex);
    }

    int go=returnforAll();
    return go;
    
}

int updatequantity(int quantityM[], int quantityW[], string arrM[], string arrW[], int menq, int womenq, int availableM[], int availableW[])
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
            updatequantity(quantityM, quantityW, arrM, arrW, menq, womenq, availableM, availableW);
            
        }
    }
    else
    {
       cout <<  "Nothing to change." << endl;
    }

    int go=returnforAll();
    return go;

}


int status(bool billpaid)
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


int leaveReview(string reviews[], int &reviewindex, int cardindex)
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
    cout << "Press 0 to return." << endl;
    cout << "Enter your choice: ";
    cin >> gender;
    return gender;
    
}


int AdminMitems(string arrM[], int priceM[], int availableM[], int menq)
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "  Name \t   \t \t Price \t     \t Available Articles" << endl;
    for(int idx=0; idx<menq; idx++)
    {
        cout << idx+1 <<". "<< arrM[idx] << " \t " <<" Rs " << priceM[idx] << " \t   " << availableM[idx] << endl;
    }

    int go=returnforAll();
    return go;

}


int AdminWitems(string arrW[], int priceW[], int availableW[], int womenq)
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "  Name \t   \t \tPrice \t     \t Available Articles" << endl;
    for(int idx=0; idx<womenq; idx++)
    {
        cout << idx+1 <<". "<< arrW[idx] << " \t " <<" Rs " << priceW[idx] << " \t   " << availableW[idx] << endl;
    }

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

int addMitem(int &menq, string arrM[], int priceM[], int availableM[])
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

    int go = returnforAll();
    return go;
}

int addWitem(int &womenq, string arrW[], int priceW[], int availableW[])
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

    int go=returnforAll();
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
    cout << "Press 0 to return: " ;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> gender;
    
    cout << endl << endl;

    return gender;
}


int changeStock(int menq, string arrM[], int availableM[], string arrW[], int womenq, int availableW[] )
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
        changeStock(menq, arrM, availableM, arrW, womenq, availableW);
            
    }

    int go=returnforAll();
    return go;

}


int checkReviews(string reviews[], int cardindex, string username[], int reviewindex)
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

    int go=returnforAll();
    return go;

}

int changeName(int menq, int womenq, string arrM[], string arrW[])
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
        changeName(menq, womenq, arrM, arrW);
            
    }

    int go=returnforAll();
    return go;



}


int removeItem(int &menq, int &womenq, string arrM[], string arrW[], int priceM[], int priceW[], int availableM[], int availableW[])
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
        removeItem(menq, womenq, arrM, arrW, priceM, priceW, availableM, availableW);
            
    }


    int go=returnforAll();
    return go;
}

int seeCustomer(int cusCount, int cardindex, string userArea[], string delivery[], string customer[])
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
        cout << "There are no Customers yet." << endl;
    }

    int go=returnforAll();
    return go;
}

int addDeliveryArea(int &areas, string deliveryAreas[])
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

    int go=returnforAll();
    return go;
}

int removeAddress(int &areas, string deliveryAreas[])
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
        removeAddress(areas, deliveryAreas);
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