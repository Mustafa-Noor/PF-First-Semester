#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);

main()
{
    int day;
    string month;

    cout << "Enter the day of birth: ";
    cin >> day;

    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;

    cout << "Zodiac Sign: " << findZodiacSign(day,month);



}


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