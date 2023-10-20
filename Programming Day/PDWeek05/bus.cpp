#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void printHeader();
void loginpage();
int menupage();
int genderpage();
int printMitems(); 
int malequantity();
int printWitems();
int womenquantity();
float totalCost();
void adminoruser();
int adminmenu();
void cart();



string username, password, role;
int choice, gender, qm1, qm2, qm3, qm4, men, women, qw1, qw2;
int r1, qw3, qw4;
int price1=500, price2=900, price3=600, price4=800, price5=900, price6=1100, price7=1600, price8=800;
int total1= qm1*price1;
int total2=qm2*price2;
int total3=qm3*price3;
int total4=qm4*price4;
int total5=qw1*price5;
int total6=qw2*price6;
int total7=qw3*price7;
int total8=qw4*price8;


main()
{
    system("cls");
    printHeader();
    adminoruser();
    if(role=="admin"){
        system("cls");
        printHeader();
        loginpage();
        adminmenu();
    }
    system("cls");
    printHeader();
    loginpage();
    Sleep(200);

    system("cls");
    printHeader();
    menupage();


    if(choice==1){
        system("cls");
        printHeader();
        genderpage();
        if(gender==1){
            system ("cls");
            printHeader();
            printMitems();
            malequantity();


            if (r1==0){
                system("cls");
                printHeader();
                genderpage();
            }

            if(r1==1){
                system("cls");
                printHeader();
                printMitems();
                malequantity();
            }

        }
        if(gender==2){
            system("cls");
            printHeader();
            printWitems();
            womenquantity();
            if(r1==0){
                system("cls");
                printHeader();
                menupage();
            } 
        }


        if(gender==0){
            system("cls");
            printHeader();
            menupage();
        }

    }

    if(choice==4){
        system ("cls");
        printHeader();
        totalCost();

        cout << endl;
        cout << endl;
        cout << "Press any Key to continue..";
        getch();
    }

    if(choice==3){
        cart();
        system("cls");
        printHeader();
        menupage();

    }

    
  }





   

  







void adminoruser(){
    cout << endl << endl;

    cout << "\t\tHow are you trying to proceed as an Admin or Customer ?" << endl;
    cout << "\t\t\t Enter (admin or customer): ";
    cin >> role;
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





int adminmenu(){

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
    cin >> choice;
    return choice;

}

void loginpage()
{
    cout << endl << endl;
    cout << "\t \t \t  Enter Username: ";
    cin >> username;

    cout << "\t \t \t  Enter Password: ";
    cin >> password;

    cout << "\t \t \t  Press any Key to Continue...";
    getch();


}


int menupage(){

    cout << endl << endl;
    cout << "Enter one of the following options number..." << endl;
    cout << "1. \t View List Of Clothes" << endl;
    cout << "2. \t Add an item of Clothing" << endl;
    cout << "3. \t View Cart" << endl;
    cout << "4. \t View Result" << endl;
    cout << "5. \t Delete an item of Clothing" << endl;
    cout << "6. \t View Discounts" << endl;
    cout << "7. \t View Payment Options" << endl;
    cout << "8. \t Select Delivery Area" << endl;
    cout << "9. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> choice;
    return choice;
}


int genderpage()
{
    cout << endl << endl;
    cout << "Enter the gender to shop for:" << endl;
    cout << "1. \t Men" << endl;
    cout << "2. \t Women" << endl;
    cout << endl;
    cout << "Enter your choice: " << endl;
    cin >> gender;
    return gender;
    cout << "Or Press 0 to return..";

}

int printMitems()
{
    
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    cout << "1. \t Black T-shirt (Rs " << price1 << " )"  << endl;
    cout << "2. \t Blue Dress Shirt (Rs " << price2 << " )"  << endl;
    cout << "3. \t Grey Sweatshirt (Rs " << price3 << " )"  << endl;
    cout << "4. \t Red Hoodie (Rs " << price4 << " )"  << endl;
    cout << endl;
    cout << "Enter number: ";
    cin >> men;
    return men;

}



int malequantity()
{
    if(men==1){
        cout << "Enter quantity: ";
        cin >> qm1;
    }
    if(men==2){
        cout << "Enter quantity: ";
        cin >> qm2;
    }
    if(men==3){
        cout << "Enter quantity: ";
        cin >> qm3;
    }
    if(men==4){
        cout << "Enter quantity: ";
        cin >> qm4;
    }

    cout << "Press 0 to return.. " << endl;
    cout << "Press 1 to continue.." << endl;
    cin >> r1;


}


int printWitems()
{
    
    cout << endl << endl;
    cout << "Enter your choice: " << endl;
    cout << "1. \t Black shirt (Rs " << price5 << " )"  << endl;
    cout << "2. \t Blue Dress (Rs " << price6 << " )"  << endl;
    cout << "3. \t Grey Frock (Rs " << price7 << " )"  << endl;
    cout << "4. \t Red Dress (Rs " << price8 << " )"  << endl;
    cout << endl;
    cout << "Enter number: ";
    cin >> women;
    return women;

}


int womenquantity()
{
    if(women==1){
        cout << "Enter quantity: ";
        cin >> qw1;
    }
    if(women==2){
        cout << "Enter quantity: ";
        cin >> qw2;
    }
    if(women==3){
        cout << "Enter quantity: ";
        cin >> qw3;
    }
    if(women==4){
        cout << "Enter quantity: ";
        cin >> qw4;
    }

    cout << "Press 0 to return.. ";
    cin >> r1;


}



void cart(){
    int cart;
    system("cls");
    printHeader();
    cout << endl << endl;
    cout << "\t Item \t \t Price \t Quantity \t \t Total Price" << endl;
    if(men==1){
        cout <<"\t Black Shirt \t "<< price1 <<" \t " << qm1 << " \t \t Rs" << total1 << endl;
    }
    cout << "Press 0 to return...";
    cin >> cart;

}



float totalCost(){

    float Total=total1+total2+total3+total4+total5+total6+total7+total8;

    cout << endl;
    cout << endl;

    cout << "\tTotal Amount will be: Rs" << Total ;

}