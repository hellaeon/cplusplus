#include "RemoteControl.h"

void RemoteControl::SetCommand(Command * command)
{
	mCmd = command;
}

void RemoteControl::ButtonPressed()
{
	mCmd->Execute();
}
