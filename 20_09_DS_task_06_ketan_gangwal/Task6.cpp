#include <iostream>                     // This header file inlcudes all Standard libararies of C++             
using namespace std;
#define CURRENTYEAR 2021                // Declared the Constants respectively for Month , Date and year
#define CURRENTMONTH 9
#define CURRENTDATE 20

class personal                      // Craeted a Class named Personal
{
protected:
	string Name, Surname, address;
	string mobile_no;
	int yr,mt,dt;

public:
	personal()                       // Class Personal is created for Personal Data of the user
	{
		Name = "First Name";
		Surname = "Last Name";
		address = "Local Address";
		
	}
	bool isYearValid(int yr){                                  // Checking tehe condition for Year
    return (yr<=CURRENTYEAR && yr>0);
}

bool isMonthValid(int mt, int yr){                             // Checking the Condition for Month
    if(mt>12 || mt<1) return false;
    if(yr<CURRENTYEAR) return true;
    if(yr==CURRENTYEAR && mt<=CURRENTMONTH) return true;
    return false;
}

bool is31(int mt){                                           // Checking the Conditions for the month having 3 days or not
    if(mt==1 || mt==3 || mt==5 || mt==7 || mt==8 || mt==10 || mt==12) return true;
    return false;
}

bool isLeap(int year){
    if (year % 400 == 0) {                                   // Checking whether the Year entered by the user is a Leap Year or not
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isDateValid(int dt, int mt, int yr){
    if(yr==CURRENTYEAR && mt==CURRENTMONTH && is31(mt) && dt<=CURRENTDATE && dt>0) return true;
    if(yr==CURRENTYEAR && mt==CURRENTMONTH && !is31(mt) && dt<=CURRENTDATE && dt>0) return true;
    if(yr==CURRENTYEAR && mt<CURRENTMONTH && mt!=2 && is31(mt) && dt<=31 && dt>0) return true;
    if(yr==CURRENTYEAR && mt<CURRENTMONTH && mt!=2 && !is31(mt) && dt<=30 && dt>0) return true;
    if(yr==CURRENTYEAR && mt==2 &&  dt<=28 && dt>0) return true;
    if(yr<CURRENTYEAR && mt!=2 &&  is31(mt) && dt<=31 && dt>0) return true;
    if(yr<CURRENTYEAR && mt!=2 &&  !is31(mt) && dt<=30 && dt>0) return true;
    if(yr<CURRENTYEAR && mt==2 && isLeap(yr) && dt<=29 && dt>0) return true;
    if(yr<CURRENTYEAR && mt==2 && !isLeap(yr) && dt<=28 && dt>0) return true;
    return false;
}
	void getpersonaldata()                                   // To Take the input of personal Data From the user
	{
		cout << "\nEnter your first name : ";
		cin >> Name;
		cout << "\nEnter your last name : ";
		cin >> Surname;
		cout << "\nEnter your address : ";
		cin >> address;
		cout << "\nEnter your mobile no. : ";
		cin >> mobile_no;

    	bool notValid=true;
    	while(notValid){
        cout<<"\nPlease Enter Valid Date!"<<endl;
        cout<<"Enter year"<<endl;
        cin>>yr;
        cout<<"Enter month"<<endl;
        cin>>mt;
        cout<<"Enter date"<<endl;
        cin>>dt;
        if(isYearValid(yr) && isMonthValid(mt,yr) && isDateValid(dt,mt,yr)) notValid=false;
		}
		
		
	}
	void putpersonaldata()                                                       // To Print the Personal Data Entered by the user
	{
		cout << "\nYour first name : " << Name;
		cout << "\n Your last name : " << Surname;
		cout << "\n Your address : " << address;
		cout << "\nYour mobile no. : " << mobile_no;
		cout << "\n Your date of birth : " << dt << "-" << mt << "-" << yr << endl;
	}
};

class professional              // Class Professional is created for Professional Data of the user
{
protected:
	string name_of_organization, job_profile, project;

public:
	professional()
	{
		name_of_organization = "VIT Pune";
		job_profile = "Student";
		project = "Robospark";
	}
	void getprofessionaldata()                                          // To take the input of professional Data from the user
	{
		cout << "\nEnter your organization : ";
		cin >> name_of_organization;
		cout << "\nEnter your job profile : ";
		cin >> job_profile;
		cout << "\nEnter your project : ";
		cin >> project;
	}
        
	void putprofessionaldata()                                         // To Print the professional Data entered by the user
	{
		cout << "\nName of Organization : " << name_of_organization;
		cout << "\nJob Profile: " << job_profile;
		cout << "\n Your Project:" << project;
	}
};

class academic                                                       // Class Academic is created for academic Data of the user
{
protected:
	string college_name, branch;
	int year_of_passing, cgpa;

public:
	academic()
	{
		college_name = "VIT Pune";
		branch = "AI&DS";
		year_of_passing = 2020;
		cgpa = 9.6;
	}
	void getacademicdata()                                       // To take the input of Academic data from the user
	{
		cout << "\nEnter your college name : ";
		cin >> college_name;
		cout << "\nEnter your branch : ";
		cin >> branch;
		cout << "\nEnter your year of passing : ";
		cin >> year_of_passing;
		cout << "\nEnter your CGPA : ";
		cin >> cgpa;
	}
	void putacademicdata()                                    // To print the academic data entered by the user
	{
		cout << "\nCollege Name: " << college_name;
		cout << "\nBranch :" << branch;
		cout << "\nYear_of_passing:" << year_of_passing;
		cout << "\nCGPA Scored:" << cgpa;
	}
};

class biodata : public personal, public professional, public academic // Class Biodata is created as the parent Class and Personal ,
																	  // Professional and Academic Class are the child class
{
};

int main()
{
	biodata student;                                                    //  An object of Class biodata has been created
	int option;
	do
	{
		cout << "\nEnter type of data you want to display :" << endl;       // Using Switch case to creates a menu-driven program
		cout << "1-Personal Data>" << endl;
		cout << "2-Professional Data" << endl;
		cout << "3-Academic Data" << endl;
		cout << "0-Exiting" << endl;
		cin >> option;
		switch (option)
		{
		case (1):
		{
			student.getpersonaldata();
			student.putpersonaldata();
			break;
		}
		case (2):
		{
			student.getprofessionaldata();
			student.putprofessionaldata();
			break;
		}
		case (3):
		{
			student.getacademicdata();
			student.putacademicdata();
			break;
		}
		case (0):
		{
			cout << "Exiting" << endl;
		}
		}
	} while (option != 0);

	return 0;
}