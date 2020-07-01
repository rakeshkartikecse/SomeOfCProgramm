#include<iostream>
#include<stdlib.h>
//#include<conio>

using namespace std;
int main()
{
int choice;
cout<<"1.Shut down";
cout<<"2.Restart";
cin>>choice;

switch(choice)
{
case 1: system("shutdown -P now ");
break;
case 2:system("shutdown -r");
break;
default:cout<<"invalid!!!!!!!!!!";
}
return 0;
} 
