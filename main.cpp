#include <iostream>
#include <vector>
using namespace std;

class Appointment{
public:
    int id;
    string doctor;
    string date;
    string time;
    string reason;

    Appointment(string doctor, string date, string time, string reason){
        this->doctor = doctor;
        this->date = date;
        this->time = time;
        this->reason = reason;
    }
};

void viewAppointment(){
    vector<string> apts = {"one", "two", "three"};
    if(apts.size() <= 0){
        cout << "You have no appointments" << endl;
        return;
    } else {
        cout << "Your appointments" << "- - -" << endl;
        for (string apt:apts){
            cout << apt << endl;
        }
    };
}

void schedule() {
    string doctorList[5] = {"Daniel", "Kim", "Alli", "Robin", "Barbra"};
    string availableTimes[8] = {"9 am", "10:30 am", "11 am", "2:30 pm", "3 pm", "4 pm", "5 pm", "6 pm"};
    string doctor;
    string date;
    string time;
    string reason;
    
    cout << "Schedule an appointment - - -"<< endl;
    cout << "- - -" << endl;
    cout << "Available Doctors:" << endl;
    for(string doc:doctorList){
        cout << "- Dr. " << doc << endl;
    }
    cout << "Please Select from doctors above: ";
    cin >> doctor;
    cout << "- - -" << endl;
    cout << "please select a date (mm/dd/yyyy): ";
    cin.ignore();
    getline(cin, date);
    cout << "- - -" << endl;
    cout << "Available time:" << endl;
    for (string time:availableTimes){
        cout << time << endl;
    }
    cout << "please select a time: ";
    getline(cin, time);
    /*
     error handeling
     if(time != any of avaiable time)
        cout << try again;
     */
    cout << "- - -" << endl;
    cout << "please describe your reasons for this visit: ";
    getline(cin, reason);
    Appointment(doctor, date, time, reason);
    cout << "- - -" << endl;
    cout << "You have scheduled an appointment with Dr. " << doctor << " for " << date << " at " << time << endl;;
}

void doctor(string username, string password){
    string appointment[5] = {"apt1", "apt2", "apt3", "apt4", "apt5"};
    
    bool loggedIn = false;
    string mockDrUsername = "Doobert";
    string mockDrPassword = "123";
    
    if (username == mockDrPassword && password == mockDrPassword) {
        loggedIn = true;
    } else {
        loggedIn = true;
    }
    
    if (loggedIn) {
        cout << "Welcome, Dr. " << username << " --- " << endl;
        cout << "These are your upcoming appointments:"<< endl;
        for (auto apt: appointment){
            cout << apt << endl;
        }
    }
}

void patient(string username, string password){
    bool loggedIn = false;
    string mockPtUsername = "Scooby";
    string mockPtPassword = "123";
    char userChoice;

    if (username == mockPtPassword && password == mockPtPassword) {
        loggedIn = true;
    } else {
        loggedIn = true;
    }
    
    if(loggedIn) {
        cout << "Welcome " << username << " --- " << endl;
        cout << "- to view your appointments, enter V" << endl;
        cout << "- to schedule an appointment, enter S" << endl;
        cout << "- to cancel an appointment, enter C"<< endl;
        cout << "- to log out, enter L" << endl;
        cout << "What would you like to do? ";
        cin >> userChoice;
        switch (userChoice) {
            case 'V':
                cout << "View appointment" << endl;
                viewAppointment();
                break;
            case 'S':
                cout << "Schedule appointment" << endl;
                schedule();
                break;
            case 'C':
                cout << "Cancel appointment" << endl;
                break;
            case 'L':
                cout << "Logging out" << endl;
                loggedIn = false;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
}

int main(int argc, const char * argv[]) {
    string user;
    string username;
    string password;
    bool running = true;
    
    while(running) {
        cout << "Doctor (d) or Patient (p) or Exit (e): ";
        cin >> user;
        if (user == "d"){
            cout << "Log in" << endl;
            cin.ignore();
            cout << "Username: ";
            getline(cin, username);
            cout << "Password: ";
            getline(cin, password);
            doctor(username,password);
        } else if (user == "p"){
            cout << "Log in" << endl;
            cin.ignore();
            cout << "Username: ";
            getline(cin, username);
            cout << "Password: ";
            getline(cin, password);
            patient(username, password);
        } else if (user == "e") {
            cout << "exiting" << endl;
            running = false;
        }
    }

    return 0;
}

/*
 void Schedule(){
    hold data in an object/class
    cout << please choose a doctor: << endl;
    display doctor list from an array or txt file; use switch case
    cout << what is your purpose of this visit << endl;
    display options from an array or txt file 1,2,3,4,5,other use switch case
    cout << plese select time and date << endl
 }
*/

/*
 multiple doctor and one patient(you)
 create a class for appointment? id, reason, doctor, date time, concerns
 remove patient login? -  patient class? id, name,
*/


/*
so far:
 doctor:
 - log in
 
 patient:
 - view appointmnet
 - schedule appointment
 - log out
 
work on:
 - when user schedules an appointmnet, store it in an array that can be accessed by both doctor and patient
 -
 */
