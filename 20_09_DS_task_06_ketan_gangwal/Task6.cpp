#include<iostream>               
using namespace std;

class personal
{
	protected:
		string Name, Surname, address;
		string mobile_no;
		string dob;
	public:
		personal()                                 // Class Personal is created for Personal Data of the user
		{
			Name="First Name";
			Surname="Last Name";
			address="Local Address";
		}
		void getpersonaldata()                   
		{
			cout<<"\nEnter your first name : ";
			cin>>Name;
			cout<<"\nEnter your last name : ";
			cin>>Surname;
			cout<<"\nEnter your address : ";
			cin>>address;
			cout<<"\nEnter your mobile no. : ";
			cin>>mobile_no;
			cout<<"\nEnter your date of birth : ";
			cin>>dob;
		}
		
};
 
class professional                                 // Class Professional is created for Professional Data of the user
{
	protected:
		string name_of_organization, job_profile, project;
	public:
		professional()
		{
			name_of_organization="VIT Pune";
			job_profile="Student"; 
			project="Robospark";
		}
		void getprofessionaldata()
		{
			cout<<"\nEnter your organization : ";
			cin>>name_of_organization;
			cout<<"\nEnter your job profile : ";
			cin>>job_profile;
			cout<<"\nEnter your project : ";
			cin>>project;
		}
};

class academic                                 // Class Academic is created for academic Data of the user
{
	protected:
		string college_name, branch;
		int year_of_passing, cgpa;
	public:
		academic()
		{
			college_name="VIT Pune";
			branch="AI&DS";
			year_of_passing=2020;
			cgpa=9.6;
		}
		void getacademicdata()
		{
			cout<<"\nEnter your college name : ";
			cin>>college_name;
			cout<<"\nEnter your branch : ";
			cin>>branch;
			cout<<"\nEnter your year of passing : ";
			cin>>year_of_passing;
			cout<<"\nEnter your CGPA : ";
			cin>>cgpa;
		}
};

class biodata : public personal, public professional, public academic         // Class Biodata is created as the parent Class and Personal ,
 																			  // Professional and Academic Class are the child class
{
	
};

int main()
{
	do{
	biodata student;                                         //  An object of Class biodata has been created
	student.getpersonaldata();
	student.getprofessionaldata();
	student.getacademicdata();
	}while(true);

	return 0;
}