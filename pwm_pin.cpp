#include <iostream>		// Include all needed libraries here
#include <wiringPi.h>

using namespace std;		// No need to keep using “std”

int main(){
	wiringPiSetup();			// Setup the library
	pinMode(1, OUTPUT);		// Configure GPIO1 as an input
    bool output = 0;
	// Main program loop
	while(1){
        // Toggle the LED test 		
        
        digitalWrite(1, output);
        delay(500); 	// Delay 500ms test

        output++;
	}

	return 0;
}
