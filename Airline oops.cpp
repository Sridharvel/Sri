#include <iostream>
using namespace std;

class flight {
protected:
   //int n[5];
    int no[5]={234,45,32,454,456};
    string namef[5]={"ingio","itel","casca","tiko","chica"};
    string origin, destination;
    int seats;

public:
    flight() {
        origin = "chennai";
        destination = "bengaluru";
        seats = 50;
    }

    void display() {
        cout << "\nFLIGHT INFORMATION" << endl;
        cout << "\tFlight Details:"<<endl;
        for(int i=0;i<5;i++)
        {
        	cout<<no[i]<<"-"<<namef[i]<<endl;
		}
		cout<<"Available flight"<<endl;
		cout<<"Flight Name"<<no[2]<<"Flight Number"<<namef[2]<<endl;
        cout << "\tOrigin: " << origin << endl;
        cout << "\tDestination: " << destination << endl;
        cout << "\tTotal number of seats: " << seats << endl;
    }
};

class passenger {
public:
    string name;
    long long mobile;
    int pass;

public:
    void get() {
        cout << "\nEnter Passenger details" << endl;
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Phone number: ";
        cin >> mobile;
        cout << "Enter Passport number: ";
        cin >> pass;
    }
};

class booking : public flight, public passenger {
protected:
    int book_id;
    int seat_no;
    bool status;
    int chosen_flight;

public:
    // Corrected constructor to match the declaration
    booking(int id, int no, bool s, int flightIndex) : flight() {
        book_id = id;
        seat_no = no;
        status = s;
        chosen_flight = flightIndex;
    }

    void check() {
    	flight::display();
    	passenger::get();

        cout << "Availability of Seats";
            cout << "\nAvailable" << endl;
            cout << "\nBOOKING INFORMATION" << endl;
            cout << "Booking ID: " << book_id << endl;
            cout << "Seat NO: " << seat_no << endl;
            cout << "Passenger Name: " << name << endl;
            cout << "Selected Flight Number: " << no[chosen_flight] << endl;

    }
};



class reservation : public booking {
private:
    float fare;
    string food;

public:
   reservation(int id, int no, bool s, int flightIndex):
	booking(id,no, s,flightIndex) {
        fare = 20000.20;
        food = "Given";
    }

    void book() {
    	if (status) {
    		  booking::check();
        cout << "Flight charging Amount: " << fare;
        cout << "\nAdditional details:" << endl;
        cout << "Food: " << food;
		}
		 else {
            cout << "\nNot available. Seat Full" << endl;

        }

    }
};
int main() {
    cout << "AIRLINE RESERVATION SYSTEM" << endl;
    reservation obj(1, 30, true, 2);

     reservation obj2(1, 30, false, 2);

	obj.book();
	obj2.book();
    //obj.display();
    //obj.get();
    //obj.check();

    return 0;
}



