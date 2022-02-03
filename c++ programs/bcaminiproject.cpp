// C++ project.no16? - 6 January 2022.
// concept, design and written by Harshal Parekh 
// booking a flight ticket and printing/creating a boarding pass or a ticket. 
//try build United website
//include class? include switch,if else and stuff.. 
//welcome, intro, departure aerodrome, destination,time, airline, no.of ticket, age, details
//ticket price,promo code?, include plane model, destination name codes. food? SEAT.
//-> print evereything and confirm? then create a boarding pass.(include distance) day,date
// **Thank You for choosing United. See You Onboard !**   first class??
//WHAT IF THEY BOOK MORE THAN 1 TICKET?? --> IF ELSE IN DETAILS ?? /diff fare for dif route??  

#include<iostream.h>
#include<conio.h>
class ticket
{
  int dep, des, deptime, age, bag, seat, food, airl, date, cl;
  char name[30], email[25], *fm, *depp, *dess, *air, *datee, *tym, *syt;

public:
  int departure ()
  {
    cout << "\t\t\tWelcome to United Airlines.\t\t\n";
    cout <<"\tUnited Air, a leading company in the aviation market is happy\n";
    cout <<"\tserving its 13 million passengers every year with a fleet of\n";
    cout << "\t123 jumbojet aircrafts connecting to 100+ destinations.\n";
    cout << "\nChoose your Departure Airport: ";
    cout << "\n1.Chicago\t 6.California ";
    cout << "\n2.New York\t 7.Dallas";
    cout << "\n3.Denver\t 8.Houston";
    cout << "\n4.Florida\t 9.San Diego";
    cout << "\n5.Ohio\t\t 10.Newark";
    cout << "\nDeparture Airport: ";
    cin >> dep;

    if (dep > 10 || dep < 1)
      {
	cout << "Invalid. Try booking another route.\n";
	return 1;
      }
    else
      {
	if (dep == 1)
	  depp = "Chicago";
	else if (dep == 2)
	  depp = "New York";
	else if (dep == 3)
	  depp = "Denver";
	else if (dep == 4)
	  depp = "Florida";
	else if (dep == 5)
	  depp = "Ohio";
	else if (dep == 6)
	  depp = "California";
	else if (dep == 7)
	  depp = "Dallas";
	else if (dep == 8)
	  depp = "Houston";
	else if (dep == 9)
	  depp = "San Diego";
	else if (dep == 10)
	  depp = "Newark";
	return 0;
      }
  }
  int destination ()
  {
    cout << "\nChoose your Destination Airport: ";
    cout << "\n1.Chicago\t 6.California ";
    cout << "\n2.New York\t 7.Dallas";
    cout << "\n3.Denver\t 8.Houston";
    cout << "\n4.Florida\t 9.San Diego";
    cout << "\n5.Ohio\t\t 10.Newark";
    cout << "\nDeparture Airport: ";
    cin >> des;

    if (des > 10 || des < 1)
      {
	cout << "Invalid. Try booking another route.\n";
	return 1;
      }
    else if (dep == des)
      {
	cout << "Invalid. Try booking another route.\n";
	return 1;
      }
    else
      {
	if (des == 1)
	  dess = "Chicago";
	else if (des == 2)
	  dess = "New York";
	else if (des == 3)
	  dess = "Denver";
	else if (des == 4)
	  dess = "Florida";
	else if (des == 5)
	  dess = "Ohio";
	else if (des == 6)
	  dess = "California";
	else if (des == 7)
	  dess = "Dallas";
	else if (des == 8)
	  dess = "Houston";
	else if (des == 9)
	  dess = "San Diego";
	else if (des == 10)
	  dess = "Newark";
	return 0;
      }

  }

  int airline ()
  {
    cout << "\nChoose the Airline: ";
    cout << "\n1.United \t 5.Alaska ";
    cout << "\n2.American \t 6.Lufthansa ";
    cout << "\n3.Dekta \t 7.Emirates ";
    cout << "\n4.Hawaiin \t 8.Southwest " << endl;
    cout << "Airlines: ";	/////////////sesesesesesesesesesese
    cin >> airl;

    if (airl > 8 || airl < 1)
      {
	cout << "Invalid. Try another airline.\n";
	return 1;
      }
    else
      {
	if (airl == 1)
	  air = "United";
	else if (airl == 2)
	  air = "American";
	else if (airl == 3)
	  air = "Delta";
	else if (airl == 4)
	  air = "Hawaiin";
	else if (airl == 5)
	  air = "Alaska";
	else if (airl == 6)
	  air = "Lufthansa";
	else if (airl == 7)
	  air = "Emirates";
	else if (airl == 8)
	  air = "Southwest";
	return 0;
      }

  }
  int dat ()
  {
    cout << "\nSelect the Date of Departure: ";
    cout << "\n1. Jan 17 2022 \t 6. Jan 18 2022 ";
    cout << "\n2. Jan 20 2022 \t 7. Feb 3 2022 ";
    cout << "\n3. Jan 23 2022 \t 8. Feb 4 2022 ";
    cout << "\n4. Jan 27 2022 \t 9. Feb 6 2022 ";
    cout << "\n5. Jan 31 2022 \t 10. Feb 10 2022 " << endl;
    cout << "Departure Date: ";
    cin >> date;

    if (date > 10 || date < 1)
      {
	cout << "Date not available. Choose another date.\n";
	return 1;
      }
    else
      {
	if (date == 1)
	  datee = "Jan 17 2022";
	else if (date == 2)
	  datee = "Jan 20 2022";
	else if (date == 3)
	  datee = "Jan 23 2022";
	else if (date == 4)
	  datee = "Jan 27 2022";
	else if (date == 5)
	  datee = "Jan 31 2022";
	else if (date == 6)
	  datee = "Jan 18 2022";
	else if (date == 7)
	  datee = " Feb 3 2022";
	else if (date == 8)
	  datee = "Feb 4 2022 ";
	else if (date == 9)
	  datee = "Feb 6 2022 ";
	else if (date == 10)
	  datee = "Feb 10 2022";
	return 0;
      }
  }
  int time ()
  {
    cout << "\nSelect time of departure: ";
    cout << "\n1.09:00 \t 5.17:00 ";
    cout << "\n2.12:00 \t 6.19:00 ";
    cout << "\n3.13:00 \t 7.21:00 ";
    cout << "\n4.15:00 \t 8.22:00 " << endl;
    cout << "Enter time: ";
    cin >> deptime;

    if (deptime > 8 || deptime < 1)
      {
	cout << "No flights of selected time option.\n";
	return 1;
      }
    else
      {
	if (deptime == 1)
	  tym = "09:00";
	else if (deptime == 2)
	  tym = "12:00";
	else if (deptime == 3)
	  tym = "13:00";
	else if (deptime == 4)
	  tym = "15:00";
	else if (deptime == 5)
	  tym = "17:00";
	else if (deptime == 6)
	  tym = "19:00";
	else if (deptime == 7)
	  tym = "21:00";
	else if (deptime == 8)
	  tym = "22:00";
	return 0;
      }
  }
  int details ()
  {
    cout << "\nEnter passenger Email ID: ";
    cin >> email;
    cout << "Enter passenger name: ";
    cin >> name;
    cout << "Passenger Age: ";
    cin >> age;
    cout << "How many baggage items are you carring? ";
    cin >> bag;

    cout << "\nChoose from the following available seats: ";
    cout << "\n1. 26 D \t 6. 55 A";
    cout << "\n2. 27 C \t 7. 12 A";
    cout << "\n3. 46 F \t 8. 12 B";
    cout << "\n4. 01 A \t 9. 43 E";
    cout << "\n5. 33 B \t 10.05 A";
    cout << "\nYour seat: ";
    cin >> seat;


    cout << "\nSelect your meal options: ";
    cout << "\n1. Veg Meal \t\t 4. Diet Meal";
    cout << "\n2. Non - Veg Meal \t 5. Continental Meal";
    cout << "\n3. Sea food Meal \t 6. Gluten free Meal";
    cout << "\nYour meal: ";
    cin >> food;

    if (seat > 10 || seat < 1)
      {
	cout << "No flights of selected time option.\n";
	return 1;
      }
    else if (food < 1 || food > 6)
      {
	cout << "Option invalid. Choose another meal.\n";
	return 1;
      }
    else
      {
	if (food == 1)
	  fm = "Veg meal";
	else if (food == 2)
	  fm = "Non - Veg Meal";
	else if (food == 3)
	  fm = "Sea food Meal";
	else if (food == 4)
	  fm = "Diet Meal";
	else if (food == 5)
	  fm = "Continental";
	else if (food == 6)
	  fm = "Gluten free Meal";
	return 0;
      }
  }
  void final ()
  {
    cout << "\n\nConfirm your details: \n";
    cout << "\tName: " << name << endl;
    cout << "\tEmail id: " << email << endl;
    cout << "\tAge: " << age << endl;
    cout << "\tBaggage: " << bag << endl;
    cout << "\tSeat: " << seat << endl;
    cout << "\tMeal: " << fm << endl;
    cout << "\tDeparture: " << depp << endl;
    cout << "\tDestination: " << dess << endl;
    cout << "\tAirline: " << air << endl;
    cout << "\tDate of travel: " << datee << endl;
    cout << "\tTime: " << tym << endl;
    cout << "\t------------------------" << endl;
    cout << "\tTotal fare: 350$";
  }
  void boardpass ()
  {
    cout <<
      "\n\n____________________________________________________________";
    cout << "\nName: " << name << "\tFlight: OEP015" "\t\tDate: " << datee;
    cout << "\n\t\tFrom: " << depp << "\tTo: " << dess;
    cout << "\n\t\tTime of Departure: " << tym;
    cout << "\n\t\tSeat: " "\tGate: B2" "\tTerminal: 03" << seat;
    cout << "\n\t\tAirplane: B777.300ER";
    cout << "\n\nNO.76534989872";
    cout << "\n____________________________________________________________";
    cout <<"\nIt is adviced to arrive at the boarding gate 35 minutes prior the departure time.";
  }
};

void main ()
{
  clrscr ();
  ticket a;
  int n, b, c, d, e, f;
  n = a.departure ();
  if (n == 0)
    {
      b = a.destination ();
      if (b == 0)
	{
	  c = a.airline ();
	  if (c == 0)
	    {
	      d = a.dat ();
	      if (d == 0)
		{
		  e = a.time ();
		  if (e == 0)
		    {
		      f = a.details ();
		      if (f == 0)
			{
			  a.final ();
			  a.boardpass ();
			}
		    }
		}
	    }
	}
    }

  getch ();
}
