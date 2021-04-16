#include <Arduino.h>
class  NTC10K
{
 public:
	unsigned char Analog_pin;
	NTC10K(unsigned char AD_pin);
	float AD_to_temp();
};

