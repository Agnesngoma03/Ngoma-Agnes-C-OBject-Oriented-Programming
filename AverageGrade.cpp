//Grading system to show the average
#include <iostream>
using namespace std;
int main () {
int maths,eng,french,sci,CRE,avg;
cout<<"enter marks for 5 units"<<endl;
cin>>maths>>eng>>french>>sci>>CRE;
avg=(maths+eng+french+sci+CRE)/5;
if (avg>=70&avg<=100)
{
	cout<<"grade A";
}
else if(avg>=60&avg<=69)
{	
	cout<<"grade B";
}	
else if(avg>=50&avg<=59)
{
	cout<<"grade C";
}
else if (avg>=40&avg<=49)
{
	cout<<"grade D";
}	
else if (avg<=40)
{
	cout<<"grade E";
}
else
{
cout<<"enter valid marks";
}
return 0;			
}
