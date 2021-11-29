#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

class Calculator {
private:
	double unknownPixels;
	double known;
	double knownPixels;
	double scale;
public:
	Calculator(double known, double knownPixels, double scale) // @suppress("Class members should be properly initialized")
		: known{known},
		  knownPixels{knownPixels},
		  scale{scale}{

	}

	~Calculator() {

	}

	double getUnknownPixels() const {
		return unknownPixels;
	}

	double getKnown() const {
		return known;
	}

	double getKnownPixels() const {
		return knownPixels;
	}

	double calculateUnknown() const {
		return (unknownPixels * known) / knownPixels;
	}

	double calculateScale() const {
		return calculateUnknown() * scale;
	}

	void setUnknownPixels(double unknownPixels) {
		this->unknownPixels = unknownPixels;
	}

	void calculateMeters(Calculator &view);

};

#endif
