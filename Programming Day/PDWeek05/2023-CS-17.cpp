Task 1:
#include <iostream>
using namespace std;

int value1 = 10;
int value2 = 20;

int sum (){
	value1 = 40;
	return value1 + value2;
}


Task 2:
#include<iostream>
using namespace std;
float volume(float l, float w, float h, string unit);

float volume(float l, float w, float h, string unit)
{
	float vol;
	vol = (l*w*h)/3;

	if(unit=="millimeters"){
	vol = vol*(1000000000);
	}

	if(unit=="centimeters"){
	vol = vol*(1000000);
	}

	if(unit=="kilometers"){
	vol = vol/(1000000000);
	}

	return vol;
}


Task 3:
#include<iostream>
using namespace std;
string taxCalculator(char type, int price);

string  taxCalculator(char type, int price)
{
        float finalprice, tax;

        if(type=='M'){
        tax = (price*6)/100;
        }

        if(type=='E'){
        tax = (price*8)/100;
        }

        if(type=='S'){
        tax = (price*10)/100;
        }

        if(type=='V'){
        tax = (price*12)/100;
        }

        if(type=='T'){
        tax = (price*15)/100;
        }

        finalprice = price+tax;
        return "The final price of a vehicle of type " +string(1,type)+ " after adding the tax is $" +to_string(finalprice)+".";
}




Task 4:
#include<iostream>
#include <windows.h>
#include<cmath>
using namespace std;
string projectTimeCalculation(int neededhours, int days, int workers );

string projectTimeCalculation(int neededhours, int days, int workers)
{
        float timetaken, percentage, finaltime;
        timetaken = days*workers*10;
        percentage= (timetaken*10)/100;
        fabs(percentage);
        finaltime = timetaken - percentage;
        int answer;


        if(finaltime<neededhours)
        {
            answer = neededhours-finaltime;
            return "Not enough time! " +to_string(answer)+ " hours needed.";

            
            
        }

        if(finaltime>=neededhours){
            answer = finaltime-neededhours;
            return "Yes!" +to_string(answer)+ " hours left.";
		}


}




Task 5:
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




Task 6:
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void printhero();
void printenemy1();
void printenemy2();
void printenemy3();
void printenemy4();
void printenemy5();
void removeHero();
void removeEnemy1();
void removeEnemy2();
void removeEnemy3();
void removeEnemy4();
void removeEnemy5();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void moveEnemy4();
void moveEnemy5();
void moveHeroleft();
void moveHeroright();
void moveHeroup();
void moveHerodown();

int px=46, py=4, ex1=90, ey1=4, ex2=4, ey2=4, ex3=5, ey3=14, ex4=89, ey4=14, ex5=85, ey5=25;
int contact1=0, contact2=0, contact3=0, contact4=0;
int contact5=0;

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}



void printmaze()
{
    cout << "################################################################################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                             #####                          #####                             #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "###################################                          ###################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                             #####                          #####                             #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "#                                 #                          #                                 #" << endl;
    cout << "###################################                          ###################################" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "#                                                                                              #" << endl;
    cout << "################################################################################################" << endl;

}

void printhero()
{
    gotoxy(px, py);
    cout <<" o  " ;
    gotoxy(px,py+1);
    cout <<"/|\\" ;
    gotoxy(px,py+2);
    cout <<"/ \\" ;
}


void printenemy1()
{
    
    gotoxy(ex1, ey1);
    cout <<" ' " ;
    gotoxy(ex1,ey1+1);
    cout <<"#=#" ;
    gotoxy(ex1,ey1+2);
    cout <<"#^#" ;
}

void printenemy2()
{
    gotoxy(ex2, ey2);
    cout <<" _ " ;
    gotoxy(ex2,ey2+1);
    cout <<"(=)" ;
    gotoxy(ex2,ey2+2);
    cout <<"#^#" ;
}

void printenemy3()
{
    gotoxy(ex3, ey3);
    cout <<" ' " ;
    gotoxy(ex3,ey3+1);
    cout <<"#=#" ;
    gotoxy(ex3,ey3+2);
    cout <<"#^#" ;
}

void printenemy4()
{
    gotoxy(ex4, ey4);
    cout <<" _ " ;
    gotoxy(ex4,ey4+1);
    cout <<"(=)" ;
    gotoxy(ex4,ey4+2);
    cout <<"#^#" ;
}


void printenemy5()
{
    gotoxy(ex5, ey5);
    cout <<"  #  " ;
    gotoxy(ex5,ey5+1);
    cout <<"##=##" ;
    gotoxy(ex5,ey5+2);
    cout <<"##^##" ;
    gotoxy(ex5,ey5+3);
    cout <<" # # " ;

}

void removeHero(){
    gotoxy(px, py);
    cout <<"   " ;
    gotoxy(px,py+1);
    cout <<"    " ;
    gotoxy(px,py+2);
    cout <<"    " ;

}


void removeEnemy1(){
    gotoxy(ex1, ey1);
    cout <<"   " ;
    gotoxy(ex1,ey1+1);
    cout <<"   " ;
    gotoxy(ex1,ey1+2);
    cout <<"   " ;
}

void removeEnemy2(){
    gotoxy(ex2, ey2);
    cout <<"   " ;
    gotoxy(ex2,ey2+1);
    cout <<"   " ;
    gotoxy(ex2,ey2+2);
    cout <<"   " ;
}

void removeEnemy3(){
    gotoxy(ex3, ey3);
    cout <<"   " ;
    gotoxy(ex3,ey3+1);
    cout <<"   " ;
    gotoxy(ex3,ey3+2);
    cout <<"   " ;
}

void removeEnemy4(){
    gotoxy(ex4, ey4);
    cout <<"   " ;
    gotoxy(ex4,ey4+1);
    cout <<"   " ;
    gotoxy(ex4,ey4+2);
    cout <<"   " ;
}

void removeEnemy5(){
    gotoxy(ex5, ey5);
    cout <<"     " ;
    gotoxy(ex5,ey5+1);
    cout <<"     " ;
    gotoxy(ex5,ey5+2);
    cout <<"     " ;
    gotoxy(ex5,ey5+3);
    cout <<"     " ;
}

void moveEnemy1(){
   
    removeEnemy1();
    if(contact1==0){
    ey1=ey1+1;}
    if(ey1==8){
        contact1=1;
    }
    if(contact1==1){
        ey1=ey1-1;
    }
 
    if(ey1==1){
        contact1=0;
    }


    printenemy1();
}

void moveEnemy2(){
    removeEnemy2();
    if(contact2==0){
    ey2=ey2-1;}
    if(ey2==0){
        contact2=1;
    }
    if(contact2==1){
        ey2=ey2+1;
    }
 
    if(ey2==7){
        contact2=0;
    }
    printenemy2();


    }

void moveEnemy3(){
    removeEnemy3();
    if(contact3==0){
    ey3=ey3+1;}
    if(ey3==18){
        contact3=1;
    }
    if(contact3==1){
        ey3=ey3-1;
    }
 
    if(ey3==11){
        contact3=0;
    }
    printenemy3();


    }



void moveEnemy4(){
    removeEnemy4();
    if(contact4==0){
    ey4=ey4-1;}
    if(ey4==10){
        contact4=1;
    }
    if(contact4==1){
        ey4=ey4+1;
    }
 
    if(ey4==17){
        contact4=0;
    }
    printenemy4();


    }

void moveEnemy5(){
    removeEnemy5();
    if(contact5==0){
    ey5=ey5+1;}
    if(ey5==30){
        contact5=1;
    }
    if(contact5==1){
        ey5=ey5-1;
    }
 
    if(ey5==21){
        contact5=0;
    }
    printenemy5();


    }

void moveHeroleft(){
    if (getCharAtxy(px-2,py) == ' ' && getCharAtxy(px-2,py+1) == ' ' && getCharAtxy(px-2,py+2) == ' '){
    removeHero();
    px = px-1;
    printhero();
    }
}

void moveHeroright(){
    if (getCharAtxy(px+4,py) == ' ' && getCharAtxy(px+4,py+1) == ' ' && getCharAtxy(px+4,py+2) == ' '){

    removeHero();
    px = px+1;
    printhero();
    }
}

void moveHeroup(){
    if (getCharAtxy(px,py-1) == ' ' && getCharAtxy(px-1,py-1) == ' ' && getCharAtxy(px+3,py-1) == ' '){
    removeHero();
    py=py-1;
    printhero();
    }
}

void moveHerodown(){
    if (getCharAtxy(px,py+3) == ' ' && getCharAtxy(px-1,py+3) == ' ' && getCharAtxy(px+3,py+3)== ' ' && getCharAtxy(px+1,py+3) == ' '){
    removeHero();
    py=py+1;
    printhero();
    }
}


void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}