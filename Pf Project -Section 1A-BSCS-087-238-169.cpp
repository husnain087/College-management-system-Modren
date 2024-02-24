#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include<windows.h>

using namespace std;
void loadingBar();

const int MAX_BOOKS = 50;
const int MAX_STRING_SIZE = 100; 


string authors[MAX_BOOKS];
string bookname[MAX_BOOKS];
string isbns[MAX_BOOKS];
bool isIssued[MAX_BOOKS];
int currentBookCount = 0;

const int MAX_GUARDS = 50;
const int MAX_WEEPERS = 50;

// Attributes for Guards
char guardNames[MAX_GUARDS][50];
int guardAges[MAX_GUARDS];
char guardDutyShifts[MAX_GUARDS];
int guardCount = 0;

// Attributes for Weepers
char weeperNames[MAX_WEEPERS][50];
int weeperAges[MAX_WEEPERS];
char weeperAssignedAreas[MAX_WEEPERS][50];
int weeperCount = 0;

const int MAX_STUDENTS = 35;
int rolls[MAX_STUDENTS];
string names[MAX_STUDENTS];
string courses[MAX_STUDENTS];
string sections[MAX_STUDENTS];
string phones[MAX_STUDENTS];
int numStudents = 0;
const int MAX_TEACHERS = 100;
const int MAX_NAME_LENGTH = 50;
const int MAX_SUBJECT_LENGTH = 50;
//below boooks functions

void addBook() {
	system("cls");
    if (currentBookCount >= MAX_BOOKS) {
        cout << "Library is full. Cannot add more books." << endl;
        return;
    }

  
    cout << "Enter author name: ";
   cin>>authors[currentBookCount];
     cout << "Enter Book name: ";
     cin>>bookname[currentBookCount];
   
    cout << "Enter ISBN: ";
     cin>>isbns[currentBookCount];
   
    isIssued[currentBookCount] = false;

    currentBookCount++;
    cout << "Book added successfully." << endl;
}

void searchBook() {
	system("color 0B");
	system("cls");
    string title;
    cout << "Enter the title of the book to search for: ";
   cin>>title;

    for (int i = 0; i < currentBookCount; i++) {
        if (bookname[i] == title) {
            cout << "Book found!" << endl;
            cout << "Title: " << bookname[i] << endl;
            cout << "Author: " << authors[i] << endl;
            cout << "ISBN: " << isbns[i] << endl;
            cout << "Status: " << (isIssued[i] ? "Issued" : "Available") << endl;
            return;
        }
    }

    cout << "Book not found." << endl;
}//student functions start below

void enter() {
    system("cls");
    if (numStudents >= MAX_STUDENTS) {
        cout << "Cannot add more students. Maximum limit reached." << endl;
        return;
    }

    cout << "Enter The Roll Number  :";
    cin >> rolls[numStudents];
    cin.ignore();
    cout << "Enter The Name         :";
    getline(cin, names[numStudents]);
    cout << "Enter The Course       :";
    getline(cin, courses[numStudents]);
    cout << "Enter The Section      :";
    cin >> sections[numStudents];
    cout << "Enter The Phone Number :";
    cin >> phones[numStudents];

    numStudents++;
    cout << "Record has been Saved Successfully" << endl;
}

void search() {
    system("cls");
    int roll;
    cout << "Enter Student Roll Number: ";
    cin >> roll;

    for (int i = 0; i < numStudents; i++) {
        if (roll == rolls[i]) {
            cout << "\n\n\t\t\t*STUDENT RECORD SEARCHED SUCCESSFULLY*";
            cout << "\n\n\t Student Roll : " << rolls[i];
            cout << "\n\n\t Student Name : " << names[i];
            cout << "\n\n\t Student Course : " << courses[i];
            cout << "\n\n\t Student Section  : " << sections[i];
            cout << "\n\n\t Student Phone Number : " << phones[i];
            return;
        }
    }
    cout << "Student with roll number " << roll << " not found." << endl;
}
void modify() {
    system("cls");
    int roll;
    cout << "Enter Student Roll Number for Modification: ";
    cin >> roll;

    for (int i = 0; i < numStudents; i++) {
        if (roll == rolls[i]) {
            cout << "Enter The Roll Number  :";
            cin >> rolls[i];
            cin.ignore();
            cout << "Enter The Name         :";
            getline(cin, names[i]);
            cout << "Enter The Course       :";
            getline(cin, courses[i]);
            cout << "Enter The Section      :";
            cin >> sections[i];
            cout << "Enter The Phone Number :";
            cin >> phones[i];
            cout << "Record Modified Successfully..." << endl;
            return;
        }
    }
    cout << "Student with roll number " << roll << " not found." << endl;
}

void del() {
    system("cls");
    int roll;
    cout << "Enter Student Roll Number To Delete Record: ";
    cin >> roll;

    for (int i = 0; i < numStudents; i++) {
        if (roll == rolls[i]) {
            for (int j = i; j < numStudents - 1; j++) {
                rolls[j] = rolls[j + 1];
                names[j] = names[j + 1];
                courses[j] = courses[j + 1];
                sections[j] = sections[j + 1];
                phones[j] = phones[j + 1];
            }
            numStudents--;
            cout << "Record Deleted Successfully..." << endl;
            return;
        }
    }
    cout << "Student with roll number " << roll << " not found." << endl;
}

void list() {
    system("cls");
    cout << "\n\t\t\t*List OF RECORD*" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "\n\n\t Student Roll : " << rolls[i];
        cout << "\n\n\t Student Name : " << names[i];
        cout << "\n\n\t Student Course : " << courses[i];
        cout << "\n\n\t Student Section  : " << sections[i];
        cout << "\n\n\t Student Phone Number : " << phones[i];
    }
}
void cgpaStudent()

{
	system("cls");
int mark1,mark2,mark3,mark4,mark5,cr1,cr2,cr3,cr4,cr5;
float subjectgpa1,subjectgpa2,subjectgpa3,subjectgpa4,subjectgpa5,earngrade1,earngrade2,earngrade3,earngrade4,earngrade5,totalearngrade,totalcr,totalgpa;
cout<<"Enter the marks of 1st subject:";
cin>>mark1;
cout<<"Enter the credit hours of 1st subject:";
cin>>cr1;
cout<<"Enter the marks of 2nd subject:";
cin>>mark2;
cout<<"Enter the credit hours of 2nd subject:";
cin>>cr2;
cout<<"Enter the marks of 3rd subject:";
cin>>mark3;
cout<<"Enter the credit hours of 3rd subject:";
cin>>cr3;
cout<<"Enter the marks of 4th subject:";
cin>>mark4;
cout<<"Enter the credit hours of 4th subject:";
cin>>cr4;
cout<<"Enter the marks of 5th subject:";
cin>>mark5;
cout<<"Enter the credit hours of 5th subject:";
cin>>cr5;
		// For subject 1
	if(mark1>=85&&mark1<=100){subjectgpa1=4;}
	else if(mark1>=80&&mark1<=85){subjectgpa1=3.7;}
	else if(mark1>=75&&mark1<=79){subjectgpa1=3.5;}
	else if(mark1>=70&&mark1<=74){subjectgpa1=3.0;}
	else if(mark1>=65&&mark1<=69){subjectgpa1=2.7;}
	else if(mark1>=60&&mark1<=64){subjectgpa1=2.5;}
	else if(mark1>=55&&mark1<=59){subjectgpa1=2;}
	else if(mark1>=50&&mark1<=54){subjectgpa1=1.7;}
	else{subjectgpa1=0;}
	earngrade1=subjectgpa1*cr1;
		// For subject 2
	if(mark2>=85&&mark2<=100){subjectgpa2=4;}
	else if(mark2>=80&&mark2<=85){subjectgpa2=3.7;}
	else if(mark2>=75&&mark2<=79){subjectgpa2=3.5;}
	else if(mark2>=70&&mark2<=74){subjectgpa2=3.0;}
	else if(mark2>=65&&mark2<=69){subjectgpa2=2.7;}
	else if(mark2>=60&&mark2<=64){subjectgpa2=2.5;}
	else if(mark2>=55&&mark2<=59){subjectgpa2=2;}
	else if(mark2>=50&&mark2<=54){subjectgpa2=1.7;}
	else{subjectgpa2=0;}
	earngrade2=subjectgpa2*cr2;
		// For subject 3
	if(mark3>=85&&mark3<=100){subjectgpa3=4;}
	else if(mark3>=80&&mark3<=85){subjectgpa3=3.7;}
	else if(mark3>=75&&mark3<=79){subjectgpa3=3.5;}
	else if(mark3>=70&&mark3<=74){subjectgpa3=3.0;}
	else if(mark3>=65&&mark3<=69){subjectgpa3=2.7;}
	else if(mark3>=60&&mark3<=64){subjectgpa3=2.5;}
	else if(mark3>=55&&mark3<=59){subjectgpa3=2;}
	else if(mark3>=50&&mark3<=54){subjectgpa3=1.7;}
	else{subjectgpa3=0;}
	earngrade3=subjectgpa3*cr3;
		// For subject 4
	if(mark4>=85&&mark4<=100){subjectgpa4=4;}
	else if(mark4>=80&&mark4<=85){subjectgpa4=3.7;}
	else if(mark4>=75&&mark4<=79){subjectgpa4=3.5;}
	else if(mark4>=70&&mark4<=74){subjectgpa4=3.0;}
	else if(mark4>=65&&mark4<=69){subjectgpa4=2.7;}
	else if(mark4>=60&&mark4<=64){subjectgpa4=2.5;}
	else if(mark4>=55&&mark4<=59){subjectgpa4=2;}
	else if(mark4>=50&&mark4<=54){subjectgpa4=1.7;}
	else{subjectgpa4=0;}
	earngrade4=subjectgpa4*cr4;
		// For subject 5
	if(mark5>=85&&mark5<=100){subjectgpa5=4;}
	else if(mark5>=80&&mark5<=85){subjectgpa5=3.7;}
	else if(mark5>=75&&mark5<=79){subjectgpa5=3.5;}
	else if(mark5>=70&&mark5<=74){subjectgpa5=3.0;}
	else if(mark5>=65&&mark5<=69){subjectgpa5=2.7;}
	else if(mark5>=60&&mark5<=64){subjectgpa5=2.5;}
	else if(mark5>=55&&mark5<=59){subjectgpa5=2;}
	else if(mark5>=50&&mark5<=54){subjectgpa5=1.7;}
	else{subjectgpa5=0;}
	earngrade5=subjectgpa5*cr5;
		
	totalearngrade=earngrade1+earngrade2+earngrade3+earngrade4+earngrade5;
	totalcr=cr1+cr2+cr3+cr4+cr5;
	totalgpa=totalearngrade/totalcr;
	cout<<"Your total gpa is:"<<totalgpa;
}
//teachers functions

void displayteacherMenu() {
    cout << "\nTeacher Management System\n";
    cout << "1. Add Teacher\n";
    cout << "2. Display Teachers\n";
    cout << "3. Search Teacher\n";
    cout << "4. Update Teacher\n";
    cout << "5. Delete Teacher\n";
    cout << "6. Exit\n"<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t7.For The Entering into cleaning staff managment"<<endl;
    system("color 5");
}

void addTeacher(string names[], int ages[], string subjects[], int &numTeachers) {
	    system("color 0C");
    if (numTeachers < MAX_TEACHERS) {
        cout << "Enter teacher name space is not allowed : ";
        cin >> names[numTeachers];

        cout << "Enter teacher age only integer: ";
        cin >> ages[numTeachers];

        cout << "Enter teacher subject inly alphabetical order: ";
        cin >> subjects[numTeachers];

        numTeachers++;
        cout << "Teacher added successfully.\n";
    } else {
        cout << "Cannot add more teachers. Maximum limit reached.\n";
    }

}

void displayTeachers(const string names[], const int ages[], const string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        cout << "\nList of Teachers:\n";
        for (int i = 0; i < numTeachers; ++i) {
            cout << "Name: " << names[i] << "\n";
            cout << "Age: " << ages[i] << "\n";
            cout << "Subject: " << subjects[i] << "\n\n";
        }
    } else {
        cout << "No teachers to display.\n";
    }
}

void searchTeacher(const string names[], const int ages[], const string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        string searchName;
        cout << "Enter teacher name to search: ";
        cin >> searchName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == searchName) {
                cout << "Teacher found:\n";
                cout << "Name: " << names[i] << "\n";
                cout << "Age: " << ages[i] << "\n";
                cout << "Subject: " << subjects[i] << "\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to search.\n";
    }
}

void updateTeacher(string names[], int ages[], string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        string updateName;
        cout << "Enter teacher name to update: ";
        cin >> updateName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == updateName) {
                cout << "Enter new teacher name: ";
                cin >> names[i];

                cout << "Enter new teacher age: ";
                cin >> ages[i];

                cout << "Enter new teacher subject: ";
                cin >> subjects[i];

                cout << "Teacher updated successfully.\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to update.\n";
    }
}

void deleteTeacher(string names[], int ages[], string subjects[], int &numTeachers) {
    if (numTeachers > 0) {
        string deleteName;
        cout << "Enter teacher name to delete: ";
        cin >> deleteName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == deleteName) {
                // Move the last teacher to the position of the deleted teacher
                names[i] = names[numTeachers - 1];
                ages[i] = ages[numTeachers - 1];
                subjects[i] = subjects[numTeachers - 1];
                numTeachers--;

                cout << "Teacher deleted successfully.\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to delete.\n";
    }
}//below start of claeaning staff and security functions
void addGuard() {
    if (guardCount < MAX_GUARDS) {
        cout << "Enter guard details:\n";
        cout << "Name: ";
        cin.ignore();
        cin.getline(guardNames[guardCount], 50);
        cout << "Age: ";
        cin >> guardAges[guardCount];
        cout << "Duty Shift (M or E): ";
        cin >> guardDutyShifts[guardCount];

        guardCount++;
        cout << "Guard added successfully!\n";
    } else {
        cout << "Maximum number of guards reached!\n";
    }
}

void addWeeper() {
    if (weeperCount < MAX_WEEPERS) {
        cout << "Enter weeper details:\n";
        cout << "Name: ";
        cin.ignore();
        cin.getline(weeperNames[weeperCount], 50);
        cout << "Age: ";
        cin >> weeperAges[weeperCount];
        cout << "Assigned Area: ";
        cin.ignore();
        cin.getline(weeperAssignedAreas[weeperCount], 50);

        weeperCount++;
        cout << "Weeper added successfully!\n";
    } else {
        cout << "Maximum number of weepers reached!\n";
    }
}

void displayGuards() {
    cout << "\nList of Guards:\n";
    cout << setw(20) << "Name" << setw(10) << "Age" <<setw(15) << "Duty Shift\n";
    for (int i = 0; i < guardCount; ++i) {
        cout << setw(20) << guardNames[i] <<setw(10) << guardAges[i] << setw(15) << guardDutyShifts[i] << "\n";
    }
}

void displayWeepers() {
    cout << "\nList of Weepers:\n";
    cout << setw(20) << "Name" << setw(10) << "Age" << std::setw(20) << "Assigned Area\n";
    for (int i = 0; i < weeperCount; ++i) {
        cout << setw(20) << weeperNames[i] << setw(10) << weeperAges[i] << setw(20) << weeperAssignedAreas[i] << "\n";
    }
}






int main() {
	string names[MAX_TEACHERS];
    int ages[MAX_TEACHERS];
    string subjects[MAX_TEACHERS];
    int numTeachers = 0;
    int choice;
    string username,usernames;
    string password,passwords;
    bool loginsuccess = false;

    do {
        system("cls");
        cout << "\n\t\t\t\t\t\t\t  ----------------------------- \t\t\t\t";
        cout << "\n\t\t\t\t\t\t\t  | COLLEGE MANAGEMENT SYSTEM | \t\t\t\t";
        cout << "\n\t\t\t\t\t\t\t  ----------------------------- \t\t\t\t";
        cout << "\n\n"; 
        cout << " __          __  _                            " << endl;
        cout<<setw(20) << " \\ \\        / / | |                           " << endl;
        cout<<setw(20) << "  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___   " << endl;
        cout<<setw(20) << "   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\  " << endl;
        cout<<setw(20) << "    \\  /\\  /  __/ | (_| (_) | | | | | |  __/  " << endl;
        cout<<setw(20) << "     \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  " << endl;
         system("color 0A");
          loadingBar();
            system("cls");
        
        	cout << "\n\t*Creat your user id first*" <<endl;
	cout << "\tEnter User Name: " ;
	cin >> usernames ;
	cout << "\tEnter Password: ";
	cin >> passwords ;
	system("cls");
	cout << "\n\tYour ID is creating..........." ;
	cout<<"\n ID created successfully";
	
	cout<<"\n\nWelcome to college management system";

        cout << "\n\n\n\t\t\t Username:";
        cin >> username;
        cout << "\n\n\t\t\t"; 
        cout << "\n\t\t\t\t\t\t";
        cout << " Password:";
        cin >> password;
        cout << "\n\t\t\t\t\t\t";
        if (username ==usernames && password == passwords) {
            cout << "\n\t\t\t\t\t\t Login Successful";
            loginsuccess = true;
        } else {
            cout << "\n\t\t\t\t\t\t Incorrect Password ";
        }
        getch();
    } while (!loginsuccess);
     loadingBar();
   
    system("cls");
     system("color 02");
    

    int option;

    do {
        system("cls");
        cout << "\n\t\t\t-----------------------------";
        cout << "\n\t\t\t| College MANAGEMENT SYSTEM |";
        cout << "\n\t\t\t|     of student module     |";
        cout << "\n\t\t\t-----------------------------";
        cout<<endl<<endl;
        cout << "\n\t\t\t-----------------------------";
        cout << "\n\t\t\t| STUDENT MANAGEMENT SYSTEM |";
        cout << "\n\t\t\t-----------------------------";
        cout << "\n 1. Enter Records";
        cout << "\n 2. Search Records";
        cout << "\n 3. Modify Records";
        cout << "\n 4. Delete Records";
        cout << "\n 5. List of Records";
         cout << "\n 6.Cgpa";
            std::cout << "             \n";
            cout<<endl<<endl;
            cout<<"\tSCROLL THE SCREEN TO "<<endl;
            cout<<"\t  VIEW FUNCTION     " ;  
    cout << "\n\t\t\t\t\t\t\t\t\t      *******       \n";

    cout << "\n\t\t\t\t\t\t\t\t\t**   Welcome to  ** \n";
    cout << "\n\t\t\t\t\t\t\t\t\t**     Library    ** \n";
 
    cout << "\n\t\t\t\t\t\t\t\t\t      *******       \n";
    cout << "\n\t\t\t\t\t\t\t\t\t             \n";
        
        cout << "\n 7. Add Book";
        cout << "\n 8. Search Book";
        cout << "\n 9. Exit"<<endl<<endl;
        cout<<"\npress 10 to enter teacher management";
        cout << "\n\n Please Enter Your Option: ";
        
        cin >> option;
         system("color 6");
         loadingBar();
         

        
            if(option==1)
            {
                enter();
            }
               
            else if(option== 2)
            {
                search();
            }
               
            else if( option== 3)
            {
			
                modify();
            }
               
            else if( option== 4)
            {
			
                del();
            }
               
            else if( option== 5)
            {
                list();
            }
               
            else if( option== 6)
            {
			
                cgpaStudent();
            }
            else if( option== 7)
            {
			
                addBook();
            }
              
            else if( option== 8)
            {
			
                searchBook();
            }
               
           else if( option== 9)
           {
		   
                exit(0);
            }
            else if( option== 10)//teacher mnagment module inside.
            {
            	system("cls");
            	string username,usernames,password,passwords;
            	 bool loginsuccess = false;
            
    do {
        system("cls");
       
        
        	cout << "\n\t*Creat your user id first*" <<endl;
	cout << "\tEnter User Name: " ;
	cin >> usernames ;
	cout << "\tEnter Password: ";
	cin >> passwords ;
	system("cls");
	cout << "\n\tYour ID is creating..........." ;
	cout<<"\n ID created successfully";
	cout<<"\n\nWelcome to college management system";

        cout << "\n\n\n\t\t\t Username:";
        cin >> username;
        cout << "\n\n\t\t\t"; 
        cout << "\n\t\t\t\t\t\t";
        cout << " Password:";
        cin >> password;
        cout << "\n\t\t\t\t\t\t";
        if (username ==usernames && password == passwords) {
            cout << "\n\t\t\t\t\t\t Login Successful";
            loginsuccess = true;
        } else {
            cout << "\n\t\t\t\t\t\t Incorrect Password ";
        }
        getch();
    } while (!loginsuccess);
     loadingBar();
     system("color 2");
    system("cls");
   
	
    
	
			
    do {
    	
        displayteacherMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        
             if(choice== 1)
             {
			 
            	system("cls");
            		
                addTeacher(names, ages, subjects, numTeachers);
            }
                
            else if(choice== 2)
            {
			
            	system("cls");
            	
                displayTeachers(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 3)
            {
			
            	system("cls");
            	
                searchTeacher(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 4)
            {
			
            	system("cls");
            	
                updateTeacher(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 5)
            {
			
            	system("cls");
            	
                deleteTeacher(names, ages, subjects, numTeachers);
            }
                
            else if(choice== 7)//cleaning staff managmentinside teacher module.
            {
            	system("cls");
			
            	system("cls");
            		cout<<"Enter into Cleaning staff management";
            		
    do {
        std::cout << "\nGuard Management System\n";
        std::cout << "1. Add Guard\n";
        std::cout << "2. Add Weeper\n";
        std::cout << "3. Display Guards\n";
        std::cout << "4. Display Weepers\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addGuard();
                break;
            case 2:
                addWeeper();
                break;
            case 3:
                displayGuards();
                break;
            case 4:
                displayWeepers();
                break;
            case 0:
                std::cout << "Exiting the program. Goodbye!\n";
                	system("cls");
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

            	}
            else if(choice==6)
            {
				
            		
                cout << "Exiting program.\n";
            }
                
            else
            {
			
            	system("cls");
            	
                cout << "Invalid choice. Please try again.\n";
            }
        
        
    } while (choice != 6);

}

			
			
		
			else
			{
				cout<<"Invalid choice";
			  }  
			  getch();
}
	 while (true);

	 

    return 0;
}
void loadingBar() 
{ 

    
    char a = 177, b = 219; 
    cout<<"\n\n\t\t\t\t\t\t Loading...\n\n"; 
    cout<<"\t\t\t\t\t"; 
  
    for (int i = 0; i < 26; i++) {
    	cout<<a; 
	}
    cout<<"\r\t\t\t\t\t"; 
  
    for (int i = 0; i < 26; i++) { 
       cout<<b;
  
         Sleep(50); 
      
    } 
      system("cls");
}