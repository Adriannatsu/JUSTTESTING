#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

	struct node
		{
			int single_room[5] = {101,102,103,104,105};
			int double_room[4] = {201,202,203,204};
			int deluxe_suite[3] = {301,302,303};
			int president_suite[2] = {666,888};	
			int room_number;
			char name[20];
			char phone_number[20];
			char date[20];
			char number_of_nights[5];
			char time[5];
			char number_of_pax[20];
			node *link;
		}*head;
		
class reservation{
		public:
			void InsertReservation();
	//		void UpdateReservation();
	//		void DeleteReservation();
	//		void DisplayReservation();
};

void reservation::InsertReservation()
{
	node guest;
	char b;
	int c;
	bool d = true;
	
	do{
		ofstream file;
		file.open("Guest info.txt", ios::out|ios::app);
		
		if(!file)
		{
			cout << "ERROR: File can't open";
			system("pause");
		}
		cout<<"Please enter your Name: ";
		cin.getline(guest.name,20);
		cout << endl;
		
		cout << "Please enter your phone number: ";
		cin.getline(guest.phone_number,20);
		cout << endl;
		
		cout << "Please enter the date you want to book: ";
		cin.getline(guest.date,20);
		cout << endl;
		
		cout << "Please enter the number of nights you want to stay: ";
		cin.getline(guest.number_of_nights,20);
		cout << endl;
	
		cout << "Please enter the time you want to check in (2400 format)";
		cin.getline(guest.time,5);
		cout << endl;
		
		cout << "Please enter the number of people you have: ";
		cin.getline(guest.number_of_pax, 5);
		
	
	
	while(d){
		cout << "1.Single Room\n2.Double Room \n3.Luxury Suite \n4.President Suite\n\n";
		cout << "Please select the room you want: ";
		cin >> c;
		if(c==1)
		{
			cout << "	Rooms that are available: " << endl;
			cout << "	Single rooms: " << endl;
			
				for(int i=0; i<sizeof(guest.single_room)/sizeof(guest.single_room[0]);i++)
					cout << "	|" << guest.single_room[i] << "|";
	
			cout << endl << endl;
			cout << "Please enter the room number you want to book: ";
			cin >> guest.room_number;
			d = false;
		}else if(c==2)
		{
				cout << "	Rooms that are available: " << endl;
				cout << "	Double rooms: " << endl;
	
				for(int i=0; i<sizeof(guest.double_room)/sizeof(guest.double_room[0]); i++)
					cout << "	|" << guest.double_room[i] << "|";
			
			cout << endl << endl;
			cout << "Please enter the room number you want to book: ";
			cin >> guest.room_number;
			d = false;
		}else if(c==3)
		{
			cout << "	Rooms that are available: " << endl;
			cout << "	Luxury Suite: " << endl;
				for(int i=0; i<sizeof(guest.deluxe_suite)/sizeof(guest.deluxe_suite[0]); i++)
					cout << "	|" << guest.deluxe_suite[i] << "|";
	
			cout << endl << endl;
			cout << "Please enter the room number you want to book: ";
			cin >> guest.room_number;
			d = false;
		}else if (c==4)
		{
				cout << "	Rooms that are available: " << endl;
				cout << "	President Suite" << endl;
				for(int i=0; i<sizeof(guest.president_suite)/sizeof(guest.president_suite[0]); i++)
					cout << "	|" << guest.president_suite[i] << "|";
			
			cout << endl << endl;
			cout << "Please enter the room number you want to book: ";
			cin >> guest.room_number;
			d = false;
			
		}else
		{
			cout << "Wrong input. Please try again";
			d = true;
		}
	}
	
	int e;
	cout << "Press 1 to Save or 2 to cancel:";
		cout << endl;
		cin >> e;
		
		if(e==1)
		{
			ofstream file;
			cout << endl;
			file << "Guests info" << endl;
			cout << endl;
			file << "=================================================="<< endl;
				file << endl;
				file << "Name: " << guest.name << endl;
				file << endl;
				file << "Phone Number: " << guest.phone_number << endl;
				file << endl;
				file << "Date: " << guest.date << endl;
				file << endl;
				file << "Number of nights: " << guest.number_of_nights << endl;
				file << endl;
				file << "Time: " << guest.time << endl;
				file << endl;
				file << "Number of pax: " << guest.number_of_pax << endl;
				file << endl;
			file << endl;
			file << "====================================================" << endl;
			file.close();
			cout << "Record Saved " << endl;
			cout << "======================================================" << endl;
		}else
		{
			cout << "Record was not saved " << endl;
			cout << "====================================================" << endl;
			cout << endl;
		}
		
			cout << "Enter (Y/y) to input another data or enter (N/n) to Exit";
			cin >> b;
			cout << "======================================================" << endl;
			cout << endl;
		}while(b == 'y' || b == 'Y');
}


int main()
{
	cout <<"================================================" << endl << endl;
	cout <<" Welcome to the Hotel Reservation Application" << endl << endl;
	cout <<"================================================" << endl;
	
	
	reservation Reserve;
	node *r;
	r = new node;
	int a;
	cout << "Please wait while the system is analyzing hte data\n";
	
	cout << endl;
	cout<<"===================================" << endl;
	cout <<"    		Main Menu   " << endl << endl;
	cout << "	Rooms that are available: " << endl;
	cout << "	Single rooms: " << endl;
	
		for(int i=0; i<sizeof(r -> single_room)/sizeof(r -> single_room[0]);i++)
			cout << "	|" << r -> single_room[i] << "|";
	
	cout << endl;
	
	cout << "	Double rooms: " << endl;
	
		for(int i=0; i<sizeof(r -> double_room)/sizeof(r -> double_room[0]); i++)
			cout << "	|" << r -> double_room[i] << "|";
			
	cout << endl;
	
	cout << "	Luxury Suite: " << endl;
		for(int i=0; i<sizeof(r -> deluxe_suite)/sizeof(r -> deluxe_suite[0]); i++)
			cout << "	|" << r -> deluxe_suite[i] << "|";
	
	cout << endl;
	
	cout << "	President Suite" << endl;
		for(int i=0; i<sizeof(r -> president_suite)/sizeof(r -> president_suite[0]); i++)
			cout << "	|" << r -> president_suite[i] << "|";
			
	cout << endl << endl;
	cout <<"	1. Book a reservation" << endl;
	cout <<"	2. Update a reservation" << endl;
	cout <<"	3. Delete a resevation" << endl;
	cout <<"	4. Display the reservation" << endl;
	cout <<"	5. Help" << endl;
	cout <<"	6. Exit" << endl << endl;
	
	cout << "Please enter here: ";
	cin >> a;
	cout << "===================================" << endl;
	cout << endl;
	
	if(a == 1)
	{
		system("CLS");
		cout << "===================================" << endl;
		cout << "	BOOK A RESERVATION" << endl;
		cout << "===================================" << endl;
		cin.ignore();
		Reserve.InsertReservation();
	}
	
	return 0;

}
