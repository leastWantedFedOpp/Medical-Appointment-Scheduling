#include <iostream>
using namespace std;

void doctor(string username, string password){
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
    }
}

void patient(string username, string password){
    bool loggedIn = false;
    string mockPtUsername = "Scooby";
    string mockPtPassword = "123";
    char userChoice;
    //while logged in
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
        
        
        //run function based on userInput
        switch (userChoice) {
            case 'V':
                cout << "View appointment" << endl;
                break;
            case 'S':
                cout << "Schedule appointment" << endl;
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

void schedule() {
//    string doctor[5] = {"Daniel", "Kim", "Alli", "Robin", "Barbra"};
//    string reason[5] = {"Examination", "Dentist", "Dermatologist", "Optometrist", "Other"};
//    string day[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
//    double time[8] = {9, 10.5, 11, 2.5, 3, 4, 5, 6};
    string concerns;
    
    cout << "Schedule an appointment"<< endl;
    
    cout << "Reason: "; //map and display
    
    cout << "Doctor: "; //map and display
    
    cout << "Date: "; //map and display
    
    cout << "Time: "; //map and display
    
    cout << "Other Concerns: ";
    getline(cin, concerns);
    
}

void viewAppointment(){
    
}

int main(int argc, const char * argv[]) {
    string user;
    string username;
    string password;
    
    cout << "Doctor or Patient: ";
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
    } else {
        cout << "Invalid Input, please try again" << endl;
    }
    return 0;
}

//ask user to log in as doctor or patient, use a while loop till user selects the right choice?
//if(choice == doctor){
//run doctor function
//} else if(choice == patient) {
//run patient function
//} else {
//invalid input, try again
//}


/*
 doctor function
 please login
 cin >> username - Dobert
 cin >> password - Password
 if username != x && password != x
 cout << try again
 else go back to log in option
 
 if username == x && password == x
 cout << "Welcome, Dr. " + username << end;
 cout << these are your upcoming appointments, selects appointment :)
 */

/*
 patient function
 please login
 cin >> username - Dobert
 cin >> password - Password
 if username != x && password != x
 cout << try again
 else go back to log in option
 
 if username == x && password == x
 cout << "Welcome, " + username << end;
 cout << "View, Schedule, Cancel appointmnet" << endl;
 if (userOption == view) {
    display appoitnments
 } else if(userOption == schedule){
    run schedule function;
 } else if (userOption == cancel) {
    run cancel functiionl;
 } else {
    cout << invalid input please try agian << endl;
 }
 
 void Schedule(){
    hold data in an object/class
    cout << please choose a doctor: << endl;
    display doctor list from an array or txt file; use switch case
    cout << what is your purpose of this visit << endl;
    display options from an array or txt file 1,2,3,4,5,other use switch case
    cout << plese select time and date << endl
 }
 
 test change
 */
