//c++ pro to access data members

#include<bits/stdc++.h>
using namespace std;
class geeks
{	//access pecifier
	public:
	
	//data members
	string geekname;
	
	//member function()
	void printname() 
	{	
		cout<<"geekname is : "<<geekname;
	}
	
};
int main()
{//declare an object of class geeks
geeks obj1;
//accessing the data member 
obj1.geekname="asmita";
//accessing memeber function
obj1.printname();
return 0;
}
