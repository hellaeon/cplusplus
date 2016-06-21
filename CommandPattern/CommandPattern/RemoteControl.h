#pragma once
#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H
#include "Command.h"

// Invoker 
// Stores the ConcreteCommand object 
class RemoteControl {

public:
	void SetCommand(Command *command);
	void ButtonPressed();

private:
	Command *mCmd;
};
#endif // !REMOTE_CONTROL_H