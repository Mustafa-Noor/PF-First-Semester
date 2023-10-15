Task 1:
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int games;
    int totalGames;

    holidays = holidays*0.67;
    hometownWeekends = hometownWeekends*0.75;

    games = holidays+hometownWeekends;

    if (yearType == "leap")
    {
        totalGames = 48 - (48*0.15);

        totalGames = totalGames + games + 1;
    }

    else
    {
        totalGames = 48-(48*0.15);

        totalGames = totalGames + games;
        totalGames = totalGames- totalGames*0.15;


        if(totalGames >= 44){
            totalGames = totalGames + 2;}


        totalGames =totalGames + 1;  
         
    }
    
        
    return totalGames;
}


Task 2:
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average;
    average = ((marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/500) *100;
    return average;


}

string calculateGrade(float average){
    string grade;
    if(average>=90){
        grade = "A+";
    }
    if(average>=80 && average<90){
        grade ="A";
    }
    if(average>=70 && average<80){
        grade ="B+";
    }
    if(average>=60 && average<70){
        grade ="B";
    }
    if(average>=50 && average<60){
        grade ="C";
    }
    if(average>=40 && average<50){
        grade ="D";
    }
    if(average<40){
        grade ="F";
    }

    return grade;
}



Task 3:

string findZodiacSign(int day, string month)
{
    string zodiac;

    if((month=="March" && day>=21) || (month=="April" && day <=19)){
        zodiac="Aries";
    }
    
    else if((month=="April" && day>=20) || (month=="May" && day <=20)){
        zodiac="Taurus";

    }

    else if((month=="May" && day>=21) || (month=="June" && day <=20)){
        zodiac="Gemini";

    }

    else if((month=="June" && day>=21) || (month=="July" && day <=22)){
        zodiac="Cancer";
    }

    else if((month=="July" && day>=23) || (month=="August" && day <=22)){
        zodiac="Leo";
    }

    else if((month=="August" && day>=23) || (month=="September" && day <=22)){
        zodiac="Virgo";
    }

    else if((month=="September" && day>=23) || (month=="October" && day <=22)){
        zodiac="Libra";
    }

    else if((month=="October" && day>=23) || (month=="November" && day <=21)){
        zodiac="Scorpio";
    }

    else if((month=="November" && day>=22) || (month=="December" && day <=21)){
        zodiac="Sagittarius";
    }

    else if((month=="December" && day>=22) || (month=="January" && day <=19)){
        zodiac="Capricorn";
    }

    else if((month=="January" && day>=20) || (month=="February" && day <=18)){
        zodiac="Aquarius";
    }

    else if((month=="February" && day>=19) || (month=="March" && day <=20)){
        zodiac="Pisces";
    }

    return zodiac;
}


Task 4:

float amount(char serviceCode, char time, float minUsed)
{
    float amountDue, remMins,above;

    if(serviceCode=='P' || serviceCode=='p'){
        if(time=='D' || time=='d'){
                if(minUsed>75){
                    remMins=minUsed-75;
                    above= (remMins)*0.10;
                    amountDue=25+above;
               }
               else{
                amountDue= 25;
               }
        }

        else if(time=='N' || time=='n'){
                if(minUsed>100){
                    remMins=minUsed-100;
                    above= (remMins)*0.05;
                    amountDue=25+above;
                }
                else{
                    amountDue= 25;
                }
        }
    }

    if(serviceCode=='R' || serviceCode=='r'){
        if(minUsed>50){
            remMins=minUsed-50;
            above= (remMins)*0.20;
            amountDue=10+above;
        }
        else{
            amountDue= 10;
        }
    }

    return amountDue;
}



Task 5:

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float totalPrice;

    if(dayOfWeek=="Sunday" || dayOfWeek=="Saturday"){
        if(fruit=="banana"){
            totalPrice=quantity*2.70;
        }
        else if(fruit=="apple"){
            totalPrice=quantity*1.25;
        }
        else if(fruit=="orange"){
            totalPrice=quantity*0.90;
        }
        else if(fruit=="grapefruit"){
            totalPrice=quantity*1.60;
        }
        else if(fruit=="kiwi"){
            totalPrice=quantity*3.00;
        }
        else if(fruit=="pineapple"){
            totalPrice=quantity*5.60;
        }
        else if(fruit=="grapes"){
            totalPrice=quantity*4.20;
        }

        return totalPrice;
    }

    else if(dayOfWeek=="Monday" || dayOfWeek=="Tuesday" || dayOfWeek=="Wednesday" || dayOfWeek=="Thursday" || dayOfWeek=="Friday"){
        if(fruit=="banana"){
            totalPrice=quantity*2.50;
        }
        else if(fruit=="apple"){
            totalPrice=quantity*1.20;
        }
        else if(fruit=="orange"){
            totalPrice=quantity*0.85;
        }
        else if(fruit=="grapefruit"){
            totalPrice=quantity*1.45;
        }
        else if(fruit=="kiwi"){
            totalPrice=quantity*2.70;
        }
        else if(fruit=="pineapple"){
            totalPrice=quantity*5.50;
        }
        else if(fruit=="grapes"){
            totalPrice=quantity*3.85;
        }
    
        return totalPrice;
        }

    
    }



    Task 6:


    string calculateHotelPrices(string month, int numberOfStays)
{
    float studioprice, apartmentprice;
    string result;


    if(month=="May" || month=="October"){

        apartmentprice = 65;
        studioprice = 50;

        if(numberOfStays>7 && numberOfStays<=14){
            studioprice=studioprice-(studioprice*0.05);       
        }
        if(numberOfStays>14){
            studioprice= studioprice-(studioprice*0.3);
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        }
    
    }



    if(month=="June" || month=="September")
    {
        apartmentprice = 68.70;
        studioprice = 75.20;

        if(numberOfStays>14){

            studioprice= studioprice-(studioprice*0.2);
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        
        }

    }

    if(month=="July" || month=="August")
    {
        studioprice= 76;
        apartmentprice=77;
        if(numberOfStays>14){
            apartmentprice= apartmentprice-(apartmentprice*0.1);
        }
    }


    studioprice=studioprice*numberOfStays;
    apartmentprice=apartmentprice*numberOfStays;
    

     return "Apartment: " +to_string(apartmentprice)+ "$.\nStudio: " +to_string(studioprice)+ "$.";
}



Task 7:

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{if((examHour>=0 && examHour<24) && (examMinute>=0 && examMinute<60) && (studentHour>=0 && studentHour<24) && (studentMinute>=0 && studentHour<60)){    
    float examTmin=(examHour*60)+examMinute;
    float studentTmin=(studentHour*60)+studentMinute;
    string status;
    int a, b;


    if(examTmin>=studentTmin){
    int difTime=examTmin-studentTmin;

        if(difTime>0 && difTime<=30){
        status="On time\n"+to_string(difTime)+" minutes before the start";

        }
        if(difTime==0){
            status="On time";
        }

        if(difTime>30 && difTime<60){

            status = "Early\n"+to_string(difTime)+" minutes before the start";

        }

        if(difTime>=60){
            a=difTime%60;
            b=difTime/60;
            status="Early\n"+to_string(b)+":"+to_string(a)+" hours before the start";
        }
    }

    if(examTmin<studentTmin){
        int difTime=studentTmin-examTmin;

        if(difTime>0 && difTime<60){
            status= "Late\n"+to_string(difTime)+" minutes after the start";
        }

        if(difTime>=60){
            a=difTime%60;
            b=difTime/60;
            status="Late\n"+to_string(b)+":"+to_string(a)+" hours after the start";
        }
        }

        return status;
      }
    }


Task 8:

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int games;
    int totalGames;

    holidays = holidays*0.67;
    hometownWeekends = hometownWeekends*0.75;

    games = holidays+hometownWeekends;

    if (yearType == "leap")
    {
        totalGames = 48 - (48*0.15);

        totalGames = totalGames + games + 1;
    }

    else
    {
        totalGames = 48-(48*0.15);

        totalGames = totalGames + games;
        totalGames = totalGames- totalGames*0.15;


        if(totalGames >= 44){
            totalGames = totalGames + 2;}


        totalGames =totalGames + 1;  
         
    }
    
        
    return totalGames;
}




Task 9:

string checkPointPosition(int h, int x, int y)
{
    string position;

    if(((x==0*h) || (x==3*h)) && (y==0*h))
    {
        position ="Border";
    }
    else if((x==1*h) && ((y==4*h) || (y==1*h)))
    {
        position ="Border";
    }
    else if((x==2*h) && ((y==1*h) || (y==4*h)))
    {
        position ="Border";
    }
    else if((x==0*h) && (y==2*h))
    {
        position ="Border";
    }
    else if((x==3*h) && (y==1*h))
    {
        position ="Border";
    }


    else if( ((x>0 && x<(3*h)) && (y>0 && y<(1*h)))   || ((x>(1*h) && x<(2*h))  && (y>(1*h) && y<(4*h))) ){
        position ="Inside";
    }
    else{
        position="Outside";
    }




    return position;
}

