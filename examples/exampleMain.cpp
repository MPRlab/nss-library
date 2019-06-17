#include <mbed.h>
#include <map>
#include "NSS.h"

int main() {

  // Create a map to refer to the solenoid pins 
  //     by the MIDI note
  map<uint8_t,PinName> midiNotes;

  midiNotes[60]=SOLENOID_A01; midiNotes[61]=SOLENOID_A02;
  midiNotes[62]=SOLENOID_A03; midiNotes[63]=SOLENOID_A04;
  midiNotes[64]=SOLENOID_A05; midiNotes[65]=SOLENOID_A06;
  midiNotes[66]=SOLENOID_A07; midiNotes[67]=SOLENOID_A08;
  midiNotes[68]=SOLENOID_A09; midiNotes[69]=SOLENOID_A10;
  midiNotes[70]=SOLENOID_A11; midiNotes[71]=SOLENOID_A12;
  midiNotes[72]=SOLENOID_A13; midiNotes[73]=SOLENOID_A14;
  midiNotes[74]=SOLENOID_A15; midiNotes[75]=SOLENOID_A16;
  midiNotes[76]=SOLENOID_A17; midiNotes[77]=SOLENOID_A18;
  midiNotes[78]=SOLENOID_A19; midiNotes[79]=SOLENOID_A20;
  midiNotes[80]=SOLENOID_A21; midiNotes[81]=SOLENOID_A22;
  midiNotes[82]=SOLENOID_A23; midiNotes[83]=SOLENOID_A24;
  midiNotes[84]=SOLENOID_A25;

  // Create a NSS object
  NSS nss = NSS(midiNotes);

  while(1) {

    // This loop would be replaced by the code to play
    //  the actual music
    for(int i = 60; i < 85; i++) {
      nss.noteOn(i);
      wait(1);
      nss.noteOff(i);
    }
  }
}
