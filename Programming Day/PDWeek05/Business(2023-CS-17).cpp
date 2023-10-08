#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x,int y);
void printHeader();
void printLoginPage();
void printGenderPage();
void menOrwomen();
void totalAmount();


string username, password, gender;
float price1, price2, price3, price4;
int quantity1=0, quantity2=0, quantity3=0, quantity4=0, x;
int available1=100, available2=71, available3=87, available4=19;
char size1, size2;
float discount;

main(){
    system("cls");
    printHeader();
    printLoginPage();
    Sleep(200);
    system("cls");
    printGenderPage();
    menOrwomen();
     if(x==0){
        system("cls");
            printGenderPage();
            menOrwomen();
        }
        
    totalAmount();
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


void printLoginPage()
{
    cout << endl <<endl;
    cout << "                            **************************************************************                  " << endl;
    cout << "                            *                         LOGIN PAGE                         *                  " << endl;
    cout << "                            **************************************************************                  " << endl;
    cout << "                            *                                                            *                  " << endl;
    cout << "                            *     Enter Username                                         *                  " << endl;
    cout << "                            *           ____________________________________             *                  " << endl;
    cout << "                            *          |                                    |            *                  " << endl;
    cout << "                            *          |                                    |            *                  " << endl;
    cout << "                            *          |____________________________________|            *                  " << endl;
    cout << "                            *                                                            *                  " << endl;
    cout << "                            *     Enter Password                                         *                  " << endl;
    cout << "                            *           ____________________________________             *                  " << endl;
    cout << "                            *          |                                    |            *                  " << endl;
    cout << "                            *          |                                    |            *                  " << endl;
    cout << "                            *          |____________________________________|            *                  " << endl;
    cout << "                            *                                                            *                  " << endl;
    cout << "                            **************************************************************                  " << endl;
    cout << "                            *  Log in to shop, or Signup                                 *                  " << endl;
    cout << "                            **************************************************************                  " << endl;

    gotoxy(42,20);
    cin >> username;
    string password;
    gotoxy(42,26);
    cin >> password;
    gotoxy(60,32);
    cout << "Press any Key to Continue...";
	getch();


}  

void printGenderPage()
{
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                                  CHOOSE YOUR GENDER                                  *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                MENS FASHION         _______________________________  *     " << endl;
    cout << "               *                                                    |     ((***&((((((((&***((      | *     " << endl;
    cout << "               * Includes:                                          |    &      &&&&&&&&      &     | *     " << endl;
    cout << "               *                                                    | &                          &  | *     " << endl;
    cout << "               *  > Dress Shirts                                    |  **# .#**          **# .#**   | *     " << endl;
    cout << "               *  > T-Shirts                                        |     &&&              &&&      | *     " << endl;
    cout << "               *                                                    |       &              &        | *     " << endl;
    cout << "               *                                                    |       &              &        | *     " << endl;
    cout << "               *                                                    |       &              &        | *     " << endl;
    cout << "               *                                                    |       &              &        | *     " << endl;
    cout << "               *                                                    |        ..............         | *     " << endl;
    cout << "               *                                                    |_______________________________| *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                WOMENS FASHION       _______________________________  *     " << endl;
    cout << "               *                                                    |        ....&.....&....        | *     " << endl;
    cout << "               * Includes:                                          |       &     -----     &       | *     " << endl;
    cout << "               *                                                    |      &...           ...&      | *     " << endl;
    cout << "               *  > Shirts                                          |          &.........&          | *     " << endl;
    cout << "               *  > Frocks                                          |          &.........&          | *     " << endl;
    cout << "               *                                                    |         &...........&         | *     " << endl;
    cout << "               *                                                    |         &...........&         | *     " << endl;
    cout << "               *                                                    |         &...........&         | *     " << endl;
    cout << "               *                                                    |         &...........&         | *     " << endl;
    cout << "               *                                                    |         &...........&         | *     " << endl;
    cout << "               *                                                    |_______________________________| *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                      Choose (Men/Women):                                             *     " << endl;
    cout << "               ****************************************************************************************     " << endl;

    gotoxy(58,31);
    cin >> gender;
       



}


void menOrwomen()
{
    if(gender=="Men"){
        system("cls");

        cout << "               *****************************************************************************************    " << endl;
        cout << "               *  _______________________________                                                      *    " << endl;
        cout << "               * |     ((***&((((((((&***((      |                White Cotton T-Shirt                 *    " << endl;
        cout << "               * |    &      &&&&&&&&      &     |                  Price: Rs200                       *    " << endl;
        cout << "               * | &                          &  |                                                     *    " << endl;
        cout << "               * |  **# .#**          **# .#**   |                                Available = "<<available1 <<"       *    " << endl; 
        cout << "               * |     &&&              &&&      |                                                     *    " << endl;
        cout << "               * |       &              &        |                                                     *    " << endl;
        cout << "               * |       &              &        |     Enter size (S, M, L):                           *    " << endl;
        cout << "               * |       &              &        |     Enter Quantity:|     |                          *    " << endl;
        cout << "               * |       &              &        |                                                     *    " << endl;
        cout << "               * |        .............          |                                                     *    " << endl;
        cout << "               *****************************************************************************************    " << endl;
        cout << "               *  _______________________________                                                      *    " << endl;
        cout << "               * |        ....&.....&....        |                  Blue Dress Shirt                   *    " << endl;
        cout << "               * |       &     -----     &       |                    Price: Rs500                     *    " << endl;
        cout << "               * |      &...           ...&      |                                                     *    " << endl;
        cout << "               * |         &...........&         |                                Available = "<<available2  <<"       *    " << endl;
        cout << "               * |         &...........&         |                                                     *    " << endl;
        cout << "               * |         &...........&         |                                                     *    " << endl;
        cout << "               * |         &...........&         |     Enter size (S, M, L):                           *    " << endl;
        cout << "               * |         &...........&         |     Enter Quantity:|     |                          *    " << endl;
        cout << "               * |                               |                                                     *    " << endl;
        cout << "               *****************************************************************************************    " << endl;
        cout << "               * Discount of 10% if items are more than 4.                                             *    " << endl;
        cout << "               *****************************************************************************************    " << endl;

        gotoxy(77,8);
        cin >> size1;
        gotoxy(73,9);
        cin >> quantity1;
        
        if(quantity1>100){
            quantity1=100;
        }
        gotoxy(77,20);
        cin >> size2;
        gotoxy(73,21);
        cin >> quantity2;
        if(quantity2>71){
            quantity2=71;
        }

        gotoxy(73,24);
        cout << "1 continue, 0 return = ";
        cin >> x;



    }

    if(gender=="Women"){
        system("cls");

        cout << "               *****************************************************************************************    " << endl;
        cout << "               *  _______________________________                                                      *    " << endl;
        cout << "               * |        ....&.....&....        |                     Pink Shirt                      *    " << endl;
        cout << "               * |       &     -----     &       |                    Price: Rs600                     *    " << endl;
        cout << "               * |      &...           ...&      |                                                     *    " << endl;
        cout << "               * |          &.........&          |                                Available = "<<available3  <<"       *    " << endl;
        cout << "               * |          &.........&          |                                                     *    " << endl;
        cout << "               * |         &...........&         |                                                     *    " << endl;
        cout << "               * |         &...........&         |                                                     *    " << endl;
        cout << "               * |         &...........&         |     Enter size (S, M, L):                           *    " << endl;
        cout << "               * |         &...........&         |     Enter Quantity:|     |                          *    " << endl;
        cout << "               * |                               |                                                     *    " << endl;
        cout << "               * ***************************************************************************************    " << endl;
        cout << "               *  _______________________________                                                      *    " << endl;
        cout << "               * |        ....&.....&....        |                     Gray Frock                      *    " << endl;
        cout << "               * |       &     -----     &       |                    Price: Rs800                     *    " << endl;
        cout << "               * |      &...           ...&      |                                                     *    " << endl;
        cout << "               * |          &.........&          |                                Available = "<<available4  <<"       *    " << endl;
        cout << "               * |          &.........&          |                                                     *    " << endl;
        cout << "               * |         &...........&         |                                                     *    " << endl;
        cout << "               * |        &.............&        |                                                     *    " << endl;
        cout << "               * |       &...............&       |     Enter size (S, M, L):                           *    " << endl;
        cout << "               * |      &.................&      |     Enter Quantity:|     |                          *    " << endl;
        cout << "               * |                               |                                                     *    " << endl;
        cout << "               * ***************************************************************************************    " << endl;
        cout << "               * Discount of 10% if items are more than 4.                                             *    " << endl;
        cout << "               *****************************************************************************************    " << endl;

                
        gotoxy(77,9);
        cin >> size1;
        gotoxy(73,10);
        cin >> quantity3;
        if (quantity3>87){
            quantity3=87;
        }
        gotoxy(77,21);
        cin >> size2;
        gotoxy(73,22);
        cin >> quantity4;
        if (quantity4>19){
            quantity4=19;
        }
        gotoxy(77,25);
        cout << "1 continue, 0 return = ";
        cin >> x;
        

    }
}



void totalAmount(){
    system("cls");
    price1 = quantity1*200;
    price2 = quantity2*500;
    price3 = quantity3*600;
    price4 = quantity4*800;
    string dis;
    string cashOrcard, address;
    float finalprice=(price1)+(price2)+(price3)+(price4);
    float totalquantity= quantity1+quantity2+quantity3+quantity4;
    if(totalquantity>4){
        dis=="10%";
        discount = finalprice-(finalprice*0.10);

    }
    if(totalquantity<=4){
        dis=="0%";
        discount = finalprice;
    }


    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                                  TOTAL AMOUNT                                        *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "                  Items Bought:                                                                             " << endl;
    cout << "                                           Quantity           Price                Amount                   " << endl;
    cout << "                    White T-shirt             "<<quantity1<<"               200                   " << price1 <<endl;
    cout << "                    Blue Shirt                "<<quantity2<<"               500                   " << price2 <<endl;            
    cout << "                    Pink Dress                "<<quantity3<<"               600                   " << price3 <<endl;                                                                                  
    cout << "                    Grey Frock                "<<quantity4<<"               800                   " << price4 <<endl;                                                                           
    cout << "                                                                             ___________________            " <<endl;
    cout << "                                                                            Total : Rs"<< finalprice<<"     " << endl;
    cout << "                 Discount = 10% if items are greater than 4                                                " << endl;
    cout << "                                                                                                            " << endl;
    cout << "                 Total Amount:                                                                                           " << endl;
    cout << "                 The amount payable by "<< username <<" is Rs " << discount <<"                             " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *                             DELIVERY REQUIREMENTS                                    *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *  Payment bY:                                                                         *     " << endl;
    cout << "               *          Cash or Card:                                                               *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *  Delivery Address:                                                                   *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               *                                                                                      *     " << endl;
    cout << "               ****************************************************************************************     " << endl;
    cout << "               *-----------------------------THANK YOU FOR SHOPPING-----------------------------------*     " << endl;
    cout << "               ****************************************************************************************     " << endl;

    gotoxy(40,20);
    cin >> cashOrcard;
    gotoxy(35,22);
    cin >> address;
    gotoxy(0,40);

}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
