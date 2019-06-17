#pragma once

#include "mbed.h"
#include "pins.h"
#include <map>
//#include <vector>

class NSS {

public:
	NSS(map<uint8_t,PinName> midiNotes);
	void noteOn(uint8_t midiNote);
	void noteOff(uint8_t midiNote);
	void allOff();

private:
	map<uint8_t, DigitalOut*> midiOutputs;

};