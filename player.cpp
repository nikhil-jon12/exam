#include<iostream>
#include<cstring>
using namespace std;
class player 
{
	char name [20];
	int age;
	char country[20];
	
	
	public:
		 player();
		 player(char* ,int ,char*,int);
		 void accept();
		 void display();
		 
};
	
player::player()
{
	strcpy (name, "ABC");
	age=25;
	strcpy (country, "usa");
	
	
}
player::player(char *n,int a,char *c,int p)
{
	strcpy(name,n);
	age=a;
	strcpy(country,c);
	
	
}
void player::accept()
{
	cout<<"enter name,age,country"<<endl;
	cin >>name>>age>>country;
}
void player::display()
{
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<country<<endl;
	
	
}
int main()	
{
	player p1;
	player p2("xyz",45,"pak ",436025);
	p2.display();
	/*//p.accept();
	p.display();*/
	return 0;
}

	

