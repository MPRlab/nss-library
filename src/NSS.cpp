#include "NSS.h"

NSS::NSS(map<uint8_t,PinName> midiNotes) {

    map<uint8_t, DigitalOut*> midiOutputs;
    
    for(map<uint8_t,PinName>::iterator it = midiNotes.begin(); it!= midiNotes.end(); ++it) {
        midiOutputs[it->first] = new DigitalOut(it->second);
    }

    this->midiOutputs = midiOutputs;

}

void NSS::noteOn(uint8_t midiNote) {
    midiOutputs[midiNote]->write(1);
}

void NSS::noteOff(uint8_t midiNote) {
    midiOutputs[midiNote]->write(0);
}

void NSS::allOff() {
    for(map<uint8_t,DigitalOut*>::iterator it = midiOutputs.begin(); it!= midiOutputs.end(); ++it) {
        midiOutputs[it->first]->write(0);
    }
}