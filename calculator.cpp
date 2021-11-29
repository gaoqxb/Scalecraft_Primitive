#include "calculator.h"
#include <iostream>

void Calculator::calculateMeters(Calculator &view) {
	double unknownPixels{};
	bool neg1 {false};

	std::cout<<"Enter a pixel measurement (Type -1 to return to the main menu):"<<std::endl;

	do {
		std::cin>>unknownPixels;
		if (unknownPixels == -1) {
			neg1 = true;
		} else {
			view.setUnknownPixels(unknownPixels);
			std::cout<<"========================="<<std::endl;
			std::cout<<view.calculateUnknown()<<"m"<<std::endl;
			std::cout<<view.calculateScale()<<" blocks"<<std::endl;
			std::cout<<"========================="<<std::endl;
		}
	} while (!neg1);

}
