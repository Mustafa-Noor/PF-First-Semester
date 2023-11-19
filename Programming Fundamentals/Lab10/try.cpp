#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void printHeader();
void adminoruser();
void adminmenu();
void customermenu();
void genderpage();
void printMitems();
void printWitems();
void cart();
void PayBill();

string username, password;
string role;
int gender;
int price1=500, price2=900, price3=600, price4=800, price5=900, price6=1100, price7=1600, price8=800;
int men=0; int women=0;
int qm1=0, qm2=0, qm3=0, qm4=0;
int qw1=0, qw2=0, qw3=0, qw4=0;
int availablem1=24, availablem2=20, availablem3=23, availablem4=24;
int availablew1=24, availablew2=20, availablew3=23, availablew4=24;

int cartm1,cartm2,cartm3,cartm4,cartw1,cartw2,cartw3,cartw4;

int total1;
int total2, total3, total4;
int total5, total6, total7, total8;


main()
{
    
    while(true)
    {
    system("cls");
    printHeader();
    adminoruser();

    if(role=="Admin")
    {
        adminmenu();
          
    }

    else if(role=="Customer")
    {
        customermenu(); 
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


void adminoruser(){

    cout << endl << endl;

    cout << "\t\tHow are you trying to proceed as an Admin or Customer ?" << endl;
    cout << "\t\t\t Enter (admin or customer): ";
    cin >> role;
}

void signinMenu()
{
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t \t \t  Enter Username: ";
    cin >> username;

    cout << "\t \t \t  Enter Password: ";
    cin >> password;

    cout << "\t \t \t  Press any Key to Continue...";
    getch();


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

    if(adminchoice==1)
    {
        genderpage();
    }

}

void customermenu(){

    system("cls");
    printHeader();

    int customerchoice;
    cout << endl << endl;
    cout << "Enter one of the following options number..." << endl;
    cout << "1. \t View List Of Clothes" << endl;
    cout << "2. \t Add an item of Clothing" << endl;
    cout << "3. \t View Cart" << endl;
    cout << "4. \t View Bill" << endl;
    cout << "5. \t Pay Bill" << endl;
    cout << "6. \t View Discounts" << endl;
    cout << "7. \t View Payment Options" << endl;
    cout << "8. \t Select Delivery Area" << endl;
    cout << "9. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> customerchoice;

    if(customerchoice==1)
    {
        genderpage();
    }
    else if(customerchoice==3)
    {
        cart();
    }else if(customerchoice == 5){
        PayBill();
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


void cart(){

    total1 = qm1*price1;
    total2=qm2*price2;
    total3=qm3*price3;
    total4=qm4*price4;
    total5=qw1*price5;
    total6=qw2*price6;
    total7=qw3*price7;
    total8=qw4*price8;

    int totalCost = total1+total2+total3+total4+total5+total6+total7+total8;

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
    cout << "\t\t Total Bill: " << totalCost;
    int cart;
    cout << "Press 0 to return...";
    cin >> cart;

    if(cart==0)
    {
        customermenu();
    }

}


void PayBill(){
    int choice;
    cout << "Enter 1 to pay bill: ";
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
}