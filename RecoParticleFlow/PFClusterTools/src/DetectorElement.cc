#include "RecoParticleFlow/PFClusterTools/interface/DetectorElement.hh"
#include "RecoParticleFlow/PFClusterTools/interface/PFToolsException.hh"
#include <iostream>
using namespace pftools;
//A comment
DetectorElement::DetectorElement(DetectorElementType type, double calib) :
	myType(type), myCalib(calib) {

}

void DetectorElement::setCalib(double calib) throw(PFToolsException&){
	//I'll tolerate very small negative numbers (artefacts of the minimisation algo
	//but otherwise this shouldn't be allowed.
//	if(calib > -0.01) {
		myCalib = calib;
//	}
//	else {
//		MinimiserException me("Setting calibration <= 0!");
//		throw me;
//	}
}

double DetectorElement::getCalib() const {
	return myCalib;
}

double DetectorElement::getCalib(double eta, double phi) const {
	return getCalib();
}

DetectorElement::~DetectorElement() {
}



std::ostream& pftools::operator<<(std::ostream& s, const DetectorElement& de) {
	s << "DetectorElement: " << pftools::DetElNames[de.getType()] << ", \tcalib: " << de.getCalib();

	return s;
}

