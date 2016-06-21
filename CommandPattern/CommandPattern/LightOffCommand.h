#pragma once
#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H
#include "Command.h"
#include "Light.h"

// command to turn off the light
class LightOffCommand : public Command {

public:
	LightOffCommand(Light *light) : mLight(light) {}
	void LightOffCommand::Execute() { mLight->Off(); }

private:
	Light *mLight;
};

#endif // !LIGHT_OFF_COMMAND_H
