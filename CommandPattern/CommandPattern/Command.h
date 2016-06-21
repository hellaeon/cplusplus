#pragma once
#ifndef COMMAND_H
#define COMMAND_H

// Command Interface
class Command {

public:
	virtual void Execute() = 0;
};

#endif