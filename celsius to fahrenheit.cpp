#include <iostream>
#include <string>
using namespace std;
int main ()
{
	float celsius;
	float fahrenheit ;
    cout << "Enter Celsius temperature : " ;
	cin >> celsius ;
	fahrenheit = ((celsius*9)/5.0)+32;
	cout << " Fahrenheit = " << fahrenheit << endl;
	string messege = (fahrenheit >= 70)? " Now weather in Thailand is HOT" : "Now weather in Thailand is COOL" ;
	cout << messege << endl;
    
	return (0);

}