#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double ini = 0, inte = 0, pay = 0;
	cout << "Enter initial loan: ";
	cin >> ini;
	cout << "Enter interest rate per year (%): ";
	cin >> inte;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int year = 1;
	double prev = 0, intt =0, newb = ini;
	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	prev = newb;
	cout << setw(13) << left << prev; 
	intt = prev*(inte/100);
	cout << setw(13) << left << intt;
	cout << setw(13) << left << prev+intt;
	newb = prev+intt-pay;
	if (prev+intt<pay) break;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newb;
	cout << "\n";
	year ++;
	}while (true);
	cout << setw(13) << left << prev+intt;
	cout << setw(13) << left << 0.00;
	cout << "\n";
	return 0;
}
