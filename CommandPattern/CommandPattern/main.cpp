#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "RemoteControl.h"

int main()
{
	// Reciever
	Light *light = new Light();

	// concrete command objects
	LightOnCommand *lightOn = new LightOnCommand(light);
	LightOffCommand *lightOff = new LightOffCommand(light);

	// invoker
	RemoteControl *control = new RemoteControl();

	// execute
	control->SetCommand(lightOn);
	control->ButtonPressed();
	control->SetCommand(lightOff);
	control->ButtonPressed();

	delete light, lightOn, lightOff, control;

	return 0;
}