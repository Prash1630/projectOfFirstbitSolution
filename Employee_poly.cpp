	
	using namespace std;
	#include <iostream>
	#include <string.h>
	
	class emp
	{
		int id;
		char name[20];
	protected :
		int salary;
	
	public:	
		emp()
		{
			this->id=0;
			strcpy(this->name,"xxx");
			this->salary=0;
		}
		emp(int a,char* nm,int sal)
		{
			this->id=a;
			strcpy(this->name,nm);
			this->salary=sal;
		}
		void setid(int a)
		{
			this->id=a;
		}
		void setname(char* nm)
		{
			strcpy(this->name,nm);
		}
		void setsalary(int a)
		{
			this->salary=a;
		}
		int getid()
		{
			return this->id;
		}
		char* getname()
		{
			return this->name;
		}
		int getsalary()
		{
			return this->salary;
		}
		
		virtual void display()
		{
			cout<<"Empolyee id is "<<id<<"\n";
			cout<<"Empolyee name-"<<name<<"\n";
			cout<<"Empolyee salary is "<<salary<<"\n";
		}
	};//Emp class end here..
	
	class Salesmanager:public emp
	{
		double incentive;
		int target;
		
		public:
		Salesmanager():emp()
		{
			this->incentive=00;
			this->target=00;
		}
		Salesmanager(int id,char* name,int salary,double in,int t):emp(id,name,salary)
		{
			this->incentive=in;
			this->target=t;
		}
		void setincentive(double a)
		{
			this->incentive=a;
		}
		void settarget(int a)
		{
			this->target=a;
		}						//setter end
		
		double getincentive()
		{
			return this->incentive;
		}
		int gettarget()
		{
			return this->target;
		}						//getter end
		void display()
		{
			emp::display();
			cout<<"Incentive is "<<incentive<<"\n";
			cout<<"Target is "<<target<<"\n";
			cout<<"Total Salary is "<<salary+incentive<<"\n";			
		}
	};// Sales manager ends
	
	
	class Admin:public emp
	{
		double allowance;
		
		public:
		Admin():emp()
		{
			this->allowance=00;
		}
		Admin(int id,char* nm,int salary,double al):emp(id,nm,salary)
		{
			this->allowance=al;
		}
		
		void setallowance(double a)
		{
			this->allowance=a;
		}
		
		double getallowance()
		{
			return this->allowance;
		}
		
		void display()
		{
			emp::display();
			cout<<"Allowance is "<<allowance<<"\n";
			cout<<"Total Salary is "<<salary+allowance<<"\n";
		}
	};// Admin ends
	
	class Hr: public emp
	{
		float comm;
		
		public:
		Hr():emp()
		{
			this->comm=00;
		}
		Hr(int id,char* nm,int salary,float cm):emp(id,nm,salary)
		{
			this->comm=cm;
		}		
		void setcomm(float a)
		{
			this->comm=a;
		}
		
		float getcomm()
		{
			return this->comm;
		}
		
		void display()
		{
			emp::display();
			cout<<"Commision is "<<comm<<"\n";
			cout<<"Total Salary is "<<salary+comm<<"\n";
		}
	};
	
	int main()
	{
		emp* ep;
		ep= new Salesmanager(2405,"Tom",20000,3000,5);
		ep->display();
		
		
		cout<<"\n\n";
		
		ep= new Admin(24,"Sam",20000,4000);
		ep->display();
		
		
		cout<<"\n\n";
		
		ep= new Hr(24,"Sam",20000,2000);
		ep->display();
		cout<<"\n\n";
		
	}
	
