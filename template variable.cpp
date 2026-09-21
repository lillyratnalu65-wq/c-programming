#include<iostream>
#include<string>
using namespace std;
class  student
{
	int sid;
	string name;;
	
	public:
		student(int id,string nm):sid(id),name(nm){}
		
		void display()
		{
			cout<<"id:"<<sid
				<<"name:"<<name<<endl;
		}
		
};

int main()
{
	student s1(123,"lilly");
	s1.display();
	return 0;
}
