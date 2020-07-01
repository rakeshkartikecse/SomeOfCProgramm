#include<iostream>
#include<stdlib.h>

//#include<conio.h>

using namespace std;
int main()
{
int choice;

cout<<"1.shutdown";
cout<<"2.restart";
cin>>choice;

switch(choice)
{
case 1:system("shutdown -P");
     break;

case 2:system("shutdown -r");
     break;


default: cout<<"invalid";
}

return 0;

}
