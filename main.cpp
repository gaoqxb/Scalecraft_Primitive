#include <iostream>
#include "calculator.h"

using namespace std;

void calculateBlocks(double scale);

int main() {
	//Add more as needed
	//Enter the information like this:
	//Calculator view(known measurement, known measurement pixels, scale);
// EXAMPLE
//	777-300ER
	double scale = 3;
	Calculator sideView(26.89, 301, scale);
	Calculator topView(26.89, 301, scale);
	Calculator frontView(26.89, 301, scale);

	int viewSelection{};
	bool quit{false};

	do {
		cout<<"Main menu"<<endl;
			cout<<"Make a selection:"<<endl;
			cout<<"--------------------"<<endl;
			cout<<"Pixel counting"<<endl;
			cout<<"[1] - side view"<<endl;
			cout<<"[2] - top view"<<endl;
			cout<<"[3] - front view"<<endl;
			cout<<"--------------------"<<endl;
			cout<<"[4] - scaling calculator"<<endl;
			cout<<"[5] - quit"<<endl;
		cin>>viewSelection;

		switch(viewSelection) {
			case 1 : {
				sideView.calculateMeters(sideView);
				break;
			} case 2 : {
				topView.calculateMeters(topView);
				break;
			} case 3 : {
				frontView.calculateMeters(frontView);
				break;
			} case 4 : {
				calculateBlocks(scale);
				break;
			} case 5 : {
				quit = true;
				break;
			} default : {
				cout<<"Invalid selection"<<endl;
			}
		}

	} while(!quit);

	return 0;
}

void calculateBlocks(double scale) {
	bool neg1 {false};
	double meters{};

	cout<<"Enter a meter amount you want to scale (Type -1 to return to the main menu):"<<endl;

	do {
		cin>>meters;

		if (meters == -1) {
			neg1 = true;
		} else {
			cout<<"===================="<<endl;
			cout<<meters * scale<<" blocks"<<endl;
			cout<<"===================="<<endl;
		}

	} while(!neg1);

}
