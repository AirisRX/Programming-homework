// Airidas Rupšas JNII21 - C++ - Kalendoriaus programa, dienų skaičiavimas

#include <iostream>

using namespace std;

bool Gregorian_leap_year(int year);
int Days_through_years(int year1, int year2);
int Days_through_months(int year, int month, int day);

int main()
{
    int year1, year2, month1, month2, day1, day2;
    int dayspassed;

    cout << "Iveskite pirmaja data: ";
    cin >> year1 >> month1 >> day1;

    cout << "Iveskite antraja data: ";
    cin >> year2 >> month2 >> day2;

	dayspassed = Days_through_years(year1, year2) + Days_through_months(year2, month2, day2) - Days_through_months(year1, month1, day1);

    cout << "Tarp " << year1 << "/" << month1 << "/" << day1 << " ir " << year2 << "/" << month2 << "/" << day2 << " praejo " << dayspassed << " dienos(-a)." << endl;

	return 0;
}

bool Gregorian_leap_year(int year)
{
	return (year % 100 != 0) && (year % 4 == 0) || (year % 400 == 0);
}

int Days_through_months(int year, int month, int day)
{
	int daycount = 0;
	for (int i = 1; i < month; i++)
	{
		switch (i)
		{
		case 1: daycount+= 31; break;
		case 2:
			if (Gregorian_leap_year(year)) daycount+= 29;
			else daycount+= 28;
			break;
		case 3:
			daycount += 31;
			break;
		case 4:
			daycount += 30;
			break;
		case 5:
			daycount += 31;
			break;
		case 6:
			daycount += 30;
			break;
		case 7:
			daycount += 31;
			break;
		case 8:
			daycount += 31;
			break;
		case 9:
			daycount += 30;
			break;
		case 10:
			daycount += 31;
			break;
		case 11:
			daycount += 30;
			break;
		case 12:
			daycount += 31;
			break;
		}
	}
	return daycount + day;

}
int Days_through_years(int year1, int year2) 
{
	int dayscount = 0;
	int years_passed = year2 - year1;
		for (int i = 1; i <= years_passed; i++)
		{
			if (Gregorian_leap_year(year1))
			{
				dayscount += 366;
				year1++;
			}
			else
			{
				dayscount += 365;
				year1++;
			}
		}
		return dayscount;
}
