#include<iostream>
#include<string>
#include<cstring>
#define max 100
using namespace std;
const int MAX_USERS = 100;
string usernames[MAX_USERS];
string passwords[MAX_USERS];
int userCount = 0;

//Function Prototypes
void uniInterface();
void welcome();
void mainMenu();
void addRoom(int rno);
void manageRooms();
void searchRoom();
void displayRoom(int index);
void checkIn();
void displayCheckOutDetails(int index, int days);
void checkOut();
void displayAvailableRooms();
void searchCustomer();
void signup();
void login ();
void user();
void modifyRoom(int rno);
void cancelBooking(int rno);
void generateInvoice(int index);
void viewBookings();
void viewCustomerDetails(int index);
void updateRoomStatus(int rno, int status);
void calculateTotalRevenue();
void viewOccupancyReport();
void viewAvailableRoomReport();
void viewCustomerReport();
void exportDataToFile();
void importDataFromFile();




// Global Variables
char names[max][100];
char addresses[max][100];
char phones[max][12];
char from_dates[max][20];
char to_dates[max][20];
float payment_advances[max];
int booking_ids[max];
char types[max];
char stypes[max];
char acs[max];
int roomNumbers[max];
int rents[max];
int statuses[max];

int count = 0;


 void uniInterface(){

    cout << "\n\n\t\t\t\t\t\tPF 1st Semester Project" << endl;
    cout << "\n\n\n\n\t\t\t\tDeveloped By:\t\t\tMUIZZ KHAN" << endl;
    cout << "\n\t\t\t\tRoll No:\t\t\tF2023376059" << endl;
    cout << "\n\t\t\t\tProject Title:\t\t\tHotel Management System" << endl;
    cout << "\n\t\t\t\tInstitute:\t\t\tUniversity of Management and Technology(UMT) " << endl;
    cout << "\n\t\t\t\tDepartment:\t\t\tSST" << endl;
    cout << "\n\t\t\t\tInstructor:\t\t\tProf. ASWAD SOHAIL" << endl;
    cout << "\n\n\n\n\n\t\t\t\t\t Press Enter to Continue." << endl;
    cin.get();

    system("cls");
 }

 //Function to print welcome screen//
 void welcome(){

 	cout << "\n\n\n\n\n\n\n\n$$\\   $$\\            $$\\               $$\\        $$$$$$\\                        $$\\" << endl;
    cout << "$$ |  $$ |           $$ |              $$ |      $$  __$$\\                       $$ |" << endl;
    cout << "$$ |  $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$ |      $$ /  \\__|$$\\   $$\\  $$$$$$$\\ $$$$$$\\    $$$$$$\\  $$$$$$\\$$$$\\  " << endl;
    cout << "$$$$$$$$ |$$  __$$\\\\_$$  _|  $$  __$$\\ $$ |      \\$$$$$$\\  $$ |  $$ |$$  _____|\\_$$  _|  $$  __$$\\ $$  _$$  _$$\\ " << endl;
    cout << "$$  __$$ |$$ /  $$ | $$ |    $$$$$$$$ |$$ |       \\____$$\\ $$ |  $$ |\\$$$$$$\\    $$ |    $$$$$$$$ |$$ / $$ / $$ |" << endl;
    cout << "$$ |  $$ |$$ |  $$ | $$ |$$\\ $$   ____|$$ |      $$\\   $$ |$$ |  $$ | \\____$$\\   $$ |$$\\ $$   ____|$$ | $$ | $$ |" << endl;
    cout << "$$ |  $$ |\\$$$$$$  | \\$$$$  |\\$$$$$$$\\ $$ |      \\$$$$$$  |\\$$$$$$$ |$$$$$$$  |  \\$$$$  |\\$$$$$$$\\ $$ | $$ | $$ |" << endl;
    cout << "\\__|  \\__| \\______/   \\____/  \\_______|\\__|       \\______/  \\____$$ |\\_______/    \\____/  \\_______|\\__| \\__| \\__|" << endl;
    cout << "                                                           $$\\   $$ |                                            " << endl;
    cout << "                                                           \\$$$$$$  |                                            " << endl;
    cout << "                                                            \\______/                                             " << endl;
	cout<<"\n\t\t\tWelcome to our Hotel Management System, where comfort meets efficiency."<<endl;
	cout << "\t\t\tPress Enter to proceed." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tDeveloped By:MEERAB NAVEED, AYESHA SHAKEEL and MUIZZ KHAN"<<endl ;
	cin.get();
	system("cls");

}

void mainMenu(){
	int opt, rno;
	system("cls");

    do {
        cout << "\t\t\t#######################################################################" << endl;
        cout << "\t\t\t                        Hotel Management System						   " << endl;
        cout << "\t\t\t#######################################################################" << endl;

        cout << "\n\t\t\t\t\t\t1. Manage Rooms";
        cout << "\n\t\t\t\t\t\t2. Check-In Room";
        cout << "\n\t\t\t\t\t\t3. Available Rooms";
        cout << "\n\t\t\t\t\t\t4. Search Customer";
        cout << "\n\t\t\t\t\t\t5. Check-Out Room";
        cout << "\n\t\t\t\t\t\t6. Exit";
        cout << "\n\n\t\t\t\t\tEnter your Choice: ";
        cin >> opt;

        switch (opt) {
            case 1:
            	system("cls");
                manageRooms();
                break;
            case 2:

            	if (count == 0) {
                    cout << "\nRooms data is not available.\nPlease add the rooms first." << endl;
                    
                } else {
                	system("cls");
                    checkIn();
                    system("pause");
                    system("cls");
                }
                break;
            case 3:

                if (count == 0) {

                    cout << "\nRooms data is not available.\nPlease add the rooms first.";
                } else {

                	system("cls");
                    displayAvailableRooms();
                    system("pause");
                    system("cls");
                }
                break;
            case 4:
                if (count == 0) {
                    cout << "\nRooms are not available.\nPlease add the rooms first.";

                } else {

                   system("cls");
                   searchCustomer();
                   system("pause");
                   system("cls");
                }
                break;
            case 5:
                if (count == 0) {

                    cout << "\nRooms are not available.\nPlease add the rooms first.";

                } else {

                	system("cls");
                    checkOut();
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                cout << "\nTHANK YOU! FOR USING OUR SOFTWARE\n";
                break;
            default:
            	system("cls");
                cout << "\n\aPlease Enter the correct option"<< endl;
                break;
        }
    } while (opt != 6);

}
void modifyRoom(int rno) {
    for (int i = 0; i < count; i++) {
        if (roomNumbers[i] == rno) {
            // Implement code to modify room details (e.g., type, rent, etc.)
            cout << "Room details modified successfully." << endl;
            return;
        }
    }
    cout << "Room not found." << endl;
}

void cancelBooking(int rno) {
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 1 && roomNumbers[i] == rno) {
            statuses[i] = 0; // Mark the room as available
            cout << "Booking canceled successfully." << endl;
            return;
        }
    }
    cout << "Booking not found." << endl;
}

void generateInvoice(int index) {
    // Implement code to calculate and display the invoice
    // You may need to use information like names[index], roomNumbers[index], rents[index], etc.
    cout << "Invoice generated successfully." << endl;
}

void viewBookings() {
    // Implement code to display all bookings
    cout << "\n\t\t\t\t\tBooking Details:\n";
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 1) {
            cout << "\n\t\t\t\t\tBooking ID: " << booking_ids[i] << endl;
            cout << "\n\t\t\t\t\tCustomer Name: " << names[i] << endl;
            cout << "\n\t\t\t\t\tRoom Number: " << roomNumbers[i] << endl;
            cout << "\n\t\t\t\t\tFrom Date: " << from_dates[i] << endl;
            cout << "\n\t\t\t\t\tTo Date: " << to_dates[i] << endl;
            cout << "\n\t\t\t\t\tAdvance Payment: " << payment_advances[i] << endl;
        }
    }
}

void viewCustomerDetails(int index) {
    // Implement code to display customer details
    cout << "\n\t\t\t\t\tCustomer Details:\n";
    cout << "\n\t\t\t\t\tCustomer Name: " << names[index] << endl;
    cout << "\n\t\t\t\t\tRoom Number: " << roomNumbers[index] << endl;
    cout << "\n\t\t\t\t\tAddress: " << addresses[index] << endl;
    cout << "\n\t\t\t\t\tPhone: " << phones[index] << endl;
}

void updateRoomStatus(int rno, int status) {
    for (int i = 0; i < count; i++) {
        if (roomNumbers[i] == rno) {
            statuses[i] = status;
            cout << "Room status updated successfully." << endl;
            return;
        }
    }
    cout << "Room not found." << endl;
}

void calculateTotalRevenue() {
    // Implement code to calculate and display total revenue
    float totalRevenue = 0;
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 1) {
            totalRevenue += rents[i];
        }
    }
    cout << "\n\t\t\t\t\tTotal Revenue: " << totalRevenue << endl;
}

void viewOccupancyReport() {
    // Implement code to display occupancy report
    int bookedRooms = 0;
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 1) {
            bookedRooms++;
        }
    }
    cout << "\n\t\t\t\t\tOccupancy Report:\n";
    cout << "\n\t\t\t\t\tTotal Rooms: " << count << endl;
    cout << "\n\t\t\t\t\tBooked Rooms: " << bookedRooms << endl;
    cout << "\n\t\t\t\t\tAvailable Rooms: " << count - bookedRooms << endl;
}

void viewAvailableRoomReport() {
    // Implement code to display available room report
    cout << "\n\t\t\t\t\tAvailable Room Report:\n";
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 0) {
            displayRoom(i);
        }
    }
}

void viewCustomerReport() {
    // Implement code to display customer report
    cout << "\n\t\t\t\t\tCustomer Report:\n";
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 1) {
            viewCustomerDetails(i);
        }
    }
}

void exportDataToFile() {
    // Implement code to export data to a file
    cout << "Data exported to file successfully." << endl;
}

void importDataFromFile() {
    // Implement code to import data from a file
    cout << "Data imported from file successfully." << endl;
}


// Function to manage rooms (adding and searching available rooms)
void manageRooms() {

    int opt, rno, i, flag = 0;
    system("cls");
    do {

    	cout << "\t\t\t#######################################################################" << endl;
        cout << "\t\t\t                                 Manage Rooms					      " << endl;
        cout << "\t\t\t#######################################################################" << endl;
        cout << "\n\n\t\t\t\t\t\t1. Add Room";
        cout << "\n\t\t\t\t\t\t2. Search Room";
        cout << "\n\t\t\t\t\t\t3. Back to Main Menu";
        cout << "\n\n\t\t\t\t\tEnter your choice: ";
        cin >> opt;

        switch (opt) {
            case 1:
            	system("cls");
				cout << "\t\t\t#######################################################################" << endl;
        		cout << "\t\t\t                                 Add Room					          " << endl;
        		cout << "\t\t\t#######################################################################" << endl;
                cout << "\n\n\n\t\t\t\t\t\tEnter Room Number: ";
                cin >> rno;
                for (int i = 0; i < count; i++) {
                    if (roomNumbers[i] == rno) {
                        flag = 1;
                    }
                }
                if (flag == 1) {
                    cout << "\nRoom Number is Present.\nPlease enter a unique Number";
                    flag = 0;
                } else {
                	system("cls");
                    addRoom(rno);
                    system("cls");
                }
                break;
            case 2:

                system("cls");
                searchRoom();
                system("pause");
                system("cls");

                break;
            case 3:
                // nothing to do
                system("cls");
                break;
            default:
            	system("cls");
            	cout << "\n\aPlease Enter the correct option"<<endl;

                break;
        }
    } while (opt != 3);
}

// Function to add a room
void addRoom(int rno) {

	cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                                 Add Room					          " << endl;
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\n\n\t\t\t\t\t\tType AC/Non-AC (A/N) : ";
    cin >> acs[count];

    cout << "\n\t\t\t\t\t\tType Comfort (S/L) : ";
    cin >> types[count];

    cout << "\n\t\t\t\t\t\tType Room Size (B/S) : ";
    cin >> stypes[count];

    cout << "\n\t\t\t\t\t\tDaily Rent : ";
    cin >> rents[count];

    roomNumbers[count] = rno;
    statuses[count] = 0;

    cout << "\n Room Added Successfully!" << endl;
    count++;
    system("pause");
}

// Function to search for a room
void searchRoom() {

    int rNo,i, found = 0;
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                                 Search Room					          " << endl;
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\n\n\t\t\t\t\t\tEnter room number: ";
    cin >> rNo;

    for ( i = 0; i < count; i++) {
        if (roomNumbers[i] == rNo) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        cout << "\n\t\t\t\t\t\tRoom Details\n";
        if (statuses[i] == 1) {
            cout << "\n\t\t\t\t\tRoom is Reserved" << endl;
        } else {
            cout << "\n\t\t\t\t\tRoom is available" << endl;
        }
        cout << "\n\n\t\t\t\t\t\tRoom Number: \t" << roomNumbers[i] <<endl;
        cout << "\n\t\t\t\t\t\tType AC/Non-AC (A/N) " << acs[i] << endl;
        cout << "\n\t\t\t\t\t\tType Comfort (S/L) " << types[i] << endl;
        cout << "\n\t\t\t\t\t\tType Room Size (B/S) " << stypes[i] <<endl;
        cout << "\n\t\t\t\t\t\tRent: " << rents[i] <<endl;
    } else {
        cout << "\nRoom not found" << endl;
    }

}




// Function to check-in a customer
void checkIn() {

    int i, found = 0, rno;
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                            Check In Process					          " << endl;
    cout << "\t\t\t#######################################################################" << endl;

    cout << "\n\t\t\t\t\tEnter Room number : ";
    cin >> rno;

    for (i = 0; i < count; i++) {
        if (roomNumbers[i] == rno) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        if (statuses[i] == 1) {
            cout << "\nRoom is already Booked";
            return;
        }

        cout << "\n\t\t\t\t\tEnter booking id: ";
        cin >> booking_ids[i];

        cout << "\n\t\t\t\t\tEnter Customer Name (First Name): ";
        cin >> names[i];

        cout << "\n\t\t\t\t\tEnter Address (only city): ";
        cin >> addresses[i];

        cout << "\n\t\t\t\t\tEnter Phone: ";
        cin >> phones[i];

        cout << "\n\t\t\t\t\tEnter From Date: ";
        cin >> from_dates[i];

        cout << "\n\t\t\t\t\tEnter to  Date: ";
        cin >> to_dates[i];

        cout << "\n\t\t\t\t\tEnter Advance Payment: ";
        cin >> payment_advances[i];

        statuses[i] = 1;

        cout << "\n\n\t\t\t Customer Checked-in Successfully.."<< endl;
    }
}

// Function to check-out a customer
void checkOut() {

	int rNo,i, found = 0, days;
	cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                           Check Out Process					     " << endl;
    cout << "\t\t\t#######################################################################" << endl;

	cout << "\n\n\t\t\t\t\tEnter Room Number : ";
    cin >> rNo;

    for (i = 0; i < count; i++) {
        if (statuses[i] == 1 && roomNumbers[i] == rNo) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        cout << "\n\t\t\t\t\tEnter Number of Days:\t";
        cin >> days;
        displayCheckOutDetails(i, days);
    }
}

// Function to display room details for check-out
void displayCheckOutDetails(int index, int days) {

	system("cls");
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                           Check Out Details						      " << endl;
    cout << "\t\t\t#######################################################################" << endl;
    cout << "\n\n\t\t\t\t\tCustomer Name : " << names[index] << endl;
    cout << "\n\t\t\t\t\tRoom Number : " << roomNumbers[index] << endl;
    cout << "\n\t\t\t\t\tAddress : " << addresses[index] << endl;
    cout << "\n\t\t\t\t\tPhone : " << phones[index] << endl;

    float billAmount = days * rents[index];
    cout << "\t\t\t\t\t-----------------------------------" << endl;
    cout << "\t\t\t\t\tTotal Amount Due : " << billAmount << endl;
    cout << "\n\t\t\t\t\tAdvance Paid: " << payment_advances[index] << endl;
    cout << "\n\t\t\t\t\t*** Total Payable: " << billAmount - payment_advances[index]  << endl;

    statuses[index] = 0;
}



// Function to display room details
void displayRoom(int index) {

    cout << "\n\n\t\t\t\t\tRoom Number: \t" << roomNumbers[index] << endl;
    cout << "\n\t\t\t\t\tType AC/Non-AC (A/N) " << acs[index] << endl;
    cout << "\n\t\t\t\t\tType Comfort (S/L) " << types[index] << endl;
    cout << "\n\t\t\t\t\tType Room Size (B/S) " << stypes[index] << endl;
    cout << "\n\t\t\t\t\tRent: " << rents[index] << endl;

}

void displayAvailableRooms(){
	// Display available rooms

	cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                            Available Rooms						      " << endl;
    cout << "\t\t\t#######################################################################" << endl;
    for (int i = 0; i < count; i++) {
        if (statuses[i] == 0) {
                displayRoom(i);
        }
    }
    cin.get();
}

void searchCustomer(){ // Search for customer

	char searchName[100];
	cout << "\t\t\t#######################################################################" << endl;
    cout << "\t\t\t                                 Search Customer					  " << endl;
    cout << "\t\t\t#######################################################################" << endl;
	cout << "\n\n\t\t\t\t\tEnter Customer Name: ";
    cin >> searchName;

    for (int i = 0; i < count; i++) {

        if (statuses[i] == 1 && strcmp(names[i], searchName) == 0) {

            cout << "\n\n\t\t\t\t\tCustomer Name: " << names[i] << endl;
            cout << "\n\t\t\t\t\tRoom Number: " << roomNumbers[i] << endl;

        }
    }
}
void signUp() {
    if (userCount >= MAX_USERS) {
        cout << "\n\t\tCannot sign up. Maximum users limit reached." << endl;
        return;
    }

    string username, password;
    cout << "\n\n\t\t\t\tWelcome to Signup Page";
    cout << "\n\n\tEnter your username:";
    cin >> username;

    for (int i = 0; i < userCount; ++i) {
        if (usernames[i] == username) {
            cout << "Username already exists. Please try again with a different username." << endl;
            return;
        }
    }

    cout << "\n\n\tEnter your Password:";
    cin >> password;

    usernames[userCount] = username;
    passwords[userCount] = password;
    userCount++;

      cout << "\n\nNew user has been created. Press enter to jump to login";
}

void login() {
    string username, password;
    cout << "\n\n\t\t\t\tWelcome to Login Page";
    cout << "\n\n\tEnter your username:";
    cin >> username;

    bool found = false;
    for (int i = 0; i < userCount; ++i) {
        if (usernames[i] == username) {
            found = true;
            cout << "\n\n\tEnter your Password:";
            cin >> password;

            if (passwords[i] == password) {
                 cout << "\n\nCongratulations! You successfully logged in.";
            } else {
               cout << "\n\nUsername and password do not match.";
            }
            break;
        }
    }

    if (!found) {
        cout << "Username not found. Please sign up first." << endl;
    }
}
void user()
{
	int choice;
    while (true) {
         cout << "\n\n\t\t\t\tWelcome to User Authentication System";
        cout << "\n\n\t1.Signup\n\t2. Login\n\t3. Exit";
        cout << "\n\nEnter your choice (1/2/3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                signUp();
                break;
            case 2:
                login();
                mainMenu();
				   break;
            case 3:
                cout << "\nExiting the program. Goodbye!\n";
               break;
            default:
               cout << "\nInvalid choice. Please enter 1, 2, or 3.\n";
        }
}
}
int main() {

	uniInterface();
	welcome();
	user();
	mainMenu();

    return 0;
}

