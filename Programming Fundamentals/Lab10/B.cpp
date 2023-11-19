#include <iostream>
using namespace std;
void signupMenu();
void signinMenu();
void printHeader();
void customermenu();
void adminmenu();
bool checkUser(string name);
int usernameInd(string name);

string username[100];
string password[100];
string role[100];
int idx=0;

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
    cout << "2. \t Add an item of Clothing" << endl;
    cout << "3. \t View Cart" << endl;
    cout << "4. \t View Result" << endl;
    cout << "5. \t Delete an item of Clothing" << endl;
    cout << "6. \t View Discounts" << endl;
    cout << "7. \t View Payment Options" << endl;
    cout << "8. \t Select Delivery Area" << endl;
    cout << "9. \t Log out" << endl;
    cout <<"Enter your choice: ";
    cin >> customerchoice;

    
}
