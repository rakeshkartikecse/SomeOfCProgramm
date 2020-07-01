#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
int feet;
float inches;
public:
void getdist() //get length from user
{
cout<<"\n Enter feet: "; 
cin>> feet;
cout<< " Enter inches: "; 
cin>> inches;
}
void showdist() const //display distance
{ 
cout << feet << "\'-" << inches << '\"'; 
}
};
////////////////////////////////////////////////////////////////
int main()
{
Distance dist[100];
int n=0;
char ans;

cout<<endl;
do { //get distances from user
cout<< "Enter distance number " << n+1;
dist[n++].getdist(); //store distance in array
cout<< "Enter another (y/n)?: ";
cin>> ans;
} 
while( ans !='n' ); //quit if user types ‘n’

for(int j=0; j<n; j++) //display all distances
{
cout << "\nDistance number " << j+1 << "is ";
dist[j].showdist();
}
cout << endl;
return 0;
}
