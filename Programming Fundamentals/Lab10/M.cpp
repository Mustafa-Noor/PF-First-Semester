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
void updatequantity();
void signupMenu();
void signinMenu();
void printHeader();
void customermenu();
void adminmenu();
bool checkUser(string name);
int usernameInd(string name);
void deliveryoptions();
void deliveryArea();

string username[100];
string password[100];
string role[100];
int idx=0;
string delivery;
string cardno;

int gender;
int price1=500, price2=900, price3=600, price4=800, price5=900, price6=1100, price7=1600, price8=800;
int men=0; int women=0;
int qm1=0, qm2=0, qm3=0, qm4=0;
int qw1=0, qw2=0, qw3=0, qw4=0;
int availablem1=24, availablem2=20, availablem3=23, availablem4=24;
int availablew1=24, availablew2=20, availablew3=23, availablew4=24;

int cartm1,cartm2,cartm3,cartm4,cartw1,cartw2,cartw3,cartw4;
string area;

int total1;
int total2, total3, total4;
int total5, total6, total7, total8;
int totalCost=0;



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
    }

    if(op==2)
    {
        signupMenu();
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


void signinMenu()
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


    if(checkUser(name))
    {
    
    index=usernameInd(name);
    if(password1==password[index])
    {
       string role1= role[index];
    

        if(role1=="Admin" )
        {
            adminmenu();
        }

        else if(role1=="Customer")
        {
            customermenu();
        }

    }

    

    }

}


void signupMenu(){
    string name;
    string role1;
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
    username[idx]=name;
    cout << "Enter Password: ";
    cin >> password[idx];

    cout << "Enter Role (Admin or Customer): ";
    cin >> role1;
    if(role1=="Admin" || role1=="Customer")
    {
        role[idx]=role1;
    }
    else
    {
        cout << "Incorrect role..";
        signupMenu();
    }

    }



    idx++;

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



void adminmenu(){

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
    cout << "6. \t Update Discounts" << endl;
    cout << "7. \t Update Payment Options" << endl;
    cout << "8. \t Add or Remove Delivery Areas" << endl;
    cout << "9. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> adminchoice;

    
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
    cout << "6. \t Update Quantity of an item" << endl;
    cout << "7. \t Pay the Bill" << endl;
    cout << "8. \t Check Status of Placed Order" << endl;
    cout << "9. \t Log out" << endl;
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

    
}

void genderpage()
{
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

}


void printMitems()
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    cout << "1. \t Black T-shirt (Rs " << price1 << " )"  << endl;
    cout << "2. \t Blue Dress Shirt (Rs " << price2 << " )"  << endl;
    cout << "3. \t Grey Sweatshirt (Rs " << price3 << " )"  << endl;
    cout << "4. \t Red Hoodie (Rs " << price4 << " )"  << endl;
    cout << endl;
    cout << "Enter number: ";
    cin >> men;

    if(men==1){
    cout << "Available pieces: " << availablem1 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qm1;
    if(qm1>availablem1)
    {
        while(qm1>availablem1){
        cout << "Not Possible..";
        cout << "Enter again: ";
        cin >> qm1;
        }
    }
    
    }


    else if(men==2){
    cout << "Available pieces: " << availablem2 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qm2;
    if(qm2>availablem2)
    {
        while(qm2>availablem2)
        {
        cout << "Not Possible..";
        cout << "Enter again: ";
        cin >> qm2;
        }
    }
    
    }

    else if(men==3){
    cout << "Available pieces: " << availablem3 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qm3;
    if(qm3>availablem3)
    {
        while(qm3>availablem3)
        {
        cout << "Not Possible..";
        cout << "Enter again: ";
        cin >> qm3; 
        }
    }

    }
     
    else if(men==4){
    cout << "Available pieces: " << availablem4 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qm4;
    if(qm4>availablem4)
    {
        while(qm4>availablem4)
        {
        cout << "Not Possible.." << endl;
        cout << "Enter again: ";
        cin >> qm4;
        }
    }
    
    }

    int go;
    cout << "Press O to return , 1 to continue: ";
    cin >> go;

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
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    cout << "1. \t Black shirt (Rs " << price5 << " )"  << endl;
    cout << "2. \t Blue Dress (Rs " << price6 << " )"  << endl;
    cout << "3. \t Grey Frock (Rs " << price7 << " )"  << endl;
    cout << "4. \t Red Dress (Rs " << price8 << " )"  << endl;
    cout << endl;
    cout << "Enter number: ";
    cin >> women;

    if(women==1){
    cout << "Available pieces: " << availablew1 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qw1;
    if(qw1>availablew1)
    {
        while(qw1>availablew1)
        {
        cout << "Not Possible..";
        cout << "Enter again: ";
        cin >> qw1;
        }
    }
    
    }


    else if(women==2){
    cout << "Available pieces: " << availablew2 << endl;
    cout << "Enter the Quantity of " << men << " : "; 
    cin >> qw2;
    if(qw2>availablew2)
    {
        while(qw2>availablew2)
        {
        cout << "Not Possible..";
        cout << "Enter again: " ;
        cin >> qw2;
        }
    }
    
    }

    else if(women==3){
    cout << "Available pieces: " << availablew3 << endl;
    cout << "Enter the Quantity of " << women << " : "; 
    cin >> qw3;
    if(qw3>availablem3)
    {
        while(qw3>availablew3)
        {
        cout << "Not Possible..";
        cout << "Enter again: ";
        cin >> qw3;
        }
    }

    }
     
    else if(women==4){
    cout << "Available pieces: " << availablew4 << endl;
    cout << "Enter the Quantity of " << women << " : "; 
    cin >> qw4;
    if(qw4>availablew4)
    {
        while(qw4>availablew4)
        {
        cout << "Not Possible.." << endl;
        cout << "Enter again: ";
        cin >> qw4;
        }
    }

    }


    int go;
    cout << "Press O to return , 1 to continue: ";
    cin >> go;

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
    cout << "\t Item \t \t\t Quantity" << endl;
    if(qm1!=0){
        cout <<"\t Black Shirt \t  \t " << qm1 << endl;
    }
    if(qm2!=0){
        cout <<"\t Blue Shirt \t  \t " << qm2 << endl;
    }
    if(qm3!=0){
        cout <<"\t Grey Shirt \t  \t " << qm3 << endl;
    }
    if(qm4!=0){
        cout <<"\t Red Hoodie \t  \t " << qm4 << endl;
    }
    if(qw1!=0){
        cout <<"\t Black Shirt \t  \t " << qw1 <<endl;
    }
    if(qw2!=0){
        cout <<"\t Blue Dress \t  \t " << qw2 << endl;
    }
    if(qw3!=0){
        cout <<"\t Grey Frock \t  \t " << qw3 << endl;
    }
    if(qw4!=0){
        cout <<"\t Red Dress \t   \t " << qw4 <<endl;
    }

    int cart;
    cout << "Press 0 to return..";
    cin >> cart;
    if(cart==0)
    {
        customermenu();
    }
}

void bill()
{

    total1=qm1*price1;
    total2=qm2*price2;
    total3=qm3*price3;
    total4=qm4*price4;
    total5=qw1*price5;
    total6=qw2*price6;
    total7=qw3*price7;
    total8=qw4*price8;

     totalCost = total1+total2+total3+total4+total5+total6+total7+total8;

    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t Item \t \t Price \t Quantity \t \t Total Price" << endl;
    if(qm1!=0){
        cout <<"\t Black Shirt \t "<< price1 <<" \t " << qm1 << " \t \t \t Rs" << total1 << endl;
    }
    if(qm2!=0){
        cout <<"\t Blue Shirt \t "<< price2 <<" \t " << qm2 << " \t \t \t Rs" << total2 << endl;
    }
    if(qm3!=0){
        cout <<"\t Grey Shirt \t "<< price3 <<" \t " << qm3 << " \t \t \t Rs" << total3 << endl;
    }
    if(qm4!=0){
        cout <<"\t Red Hoodie \t "<< price4 <<" \t " << qm4 << " \t \t \t Rs" << total4 << endl;
    }
    if(qw1!=0){
        cout <<"\t Black Shirt \t "<< price5 <<" \t " << qw1 << " \t \t \t Rs" << total5 << endl;
    }
    if(qw2!=0){
        cout <<"\t Blue Dress \t "<< price6 <<" \t " << qw2 << " \t \t \t Rs" << total6 << endl;
    }
    if(qw3!=0){
        cout <<"\t Grey Frock \t "<< price7 <<" \t " << qw3 << " \t \t \t Rs" << total7 << endl;
    }
    if(qw4!=0){
        cout <<"\t Red Dress \t "<< price8 <<" \t " << qw4 << " \t \t \t Rs" << total8 << endl;
    }
    cout << "********************************************************************************" << endl;
    cout << "\t\t \t\t\t\t\t Total Bill: Rs" << totalCost << endl;

    cout << "Your Payment Method: " << delivery << endl;
    cout << "Your delivery Address: " << area << endl;

    int bill;
    cout << "Press 0 to return...";
    cin >> bill;

    if(bill==0)
    {
        customermenu();
    }

}

void PayBill(){
    int choice;
    cout << "Your total Purchase Amount is Rs " << totalCost << endl;
    cout << "Enter 1 to pay bill." << endl;
    cout << "Enter 0 to return to menu."<< endl;
    cout << "Enter Your Choice: ";
    cin  >> choice;
    if(choice==1){
        availablem1 -=qm1;
        availablem2 -=qm2;
        availablem3 -=qm3;
        availablem4 -=qm4;
        availablew1 -=qw1;
        availablew2 -=qw2;
        availablew3 -=qw3;
        availablew4 -=qw4;   

        customermenu();    
    }
    else if(choice==0)
    {
        customermenu();
    }
}

void deliveryoptions()
{
    cout << "Enter the way you want to seek out Payment." << endl;
    cout << "Enter (Cash or Card): ";
    cin >> delivery;
    if(delivery=="Cash")
    {
      cout << "It will be a cash on delivery.";
    }
    if(delivery=="Card")
    {
        cout << "Enter your card number: ";
        cin >> cardno;
    }
    int go;
    cout << "Press 0 to return..";
    cin >> go;
    if(go==0)
    {
        customermenu();
    }
}


void deliveryArea()
{
    int choice;
    cout << "Select One of the Delivery Areas: "<< endl;
    cout << "1. Gulberg" << endl;
    cout << "2. Askari" << endl;
    cout << "3. DHA" << endl;
    cout << "4. Model Town" << endl;
    cout << "Enter Choice" << endl;
    cin >> choice;

    if(choice==1)
    {
        area="Gulberg";
    }
    else if(choice==2)
    {
        area="Askari";
    }
    else if(choice==3)
    {
        area="DHA";
    }
    else if(choice==4)
    {
        area="Model Town";
    }

    int go;
    cout << "Press 0 to return..";
    cin >> go;
    if(go==0)
    {
        customermenu();
    }
    
}

void updatequantity()
{
    int go;
    cout << "Enter the number to change the quantity by.." << endl;
    if(qm1!=0)
    {
        cout << "Black Shirt" << qm1 << endl;
        cout << "Enter Change";
        cin >> qm1;
        
    }

    if(qm2!=0)
    {
        cout << "Blue Shirt" << qm2 << endl;
        cout << "Enter Change";
        cin >> qm2;
    }

    cout << "Press 0 to return..";
    cin >> go;

    if(go==0)
    {
        customermenu();
    }
    

}


void status()
{
    int days;
    cout << "Enter the number of days since order has been placed : ";
    cin >> days;

    if(days>3)
    {
        cout << "Order will be arriving soon.";
    }

    if(days<=3)
    {
        cout << "Order is being prepared."; 
    }

    int go;
    cout << "Enter 0 to return..";
    cin >> go;

    if(go==0)
    {
        customermenu();
    }
}
