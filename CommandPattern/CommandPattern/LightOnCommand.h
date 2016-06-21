#pragma once
#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H
#include "Command.h"
#include "Light.h"

// command to turn on the light
class LightOnCommand : public Command {

public:
	LightOnCommand(Light *light) : mLight(light) {}
	void LightOnCommand::Execute() { mLight->On(); }

private:
	Light *mLight;
};

#endif // !LIGHT_ON_COMMAND_H
