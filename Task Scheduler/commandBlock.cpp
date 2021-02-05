#include "commandBlock.h"

void CommandBlock::configureTime()
{
	auto now = std::chrono::system_clock::now();
	auto now_cast = std::chrono::time_point_cast <std::chrono::seconds> (now);
	auto now_secs = std::chrono::duration_cast <std::chrono::seconds> ( now_cast.time_since_epoch() );
	
	now_secs += this->sec;
	this->time = std::chrono::time_point<std::chrono::system_clock,std::chrono::seconds>(now_secs);
}

CommandBlock::CommandBlock(std::chrono::hours hour, std::chrono::minutes min, std::chrono::seconds sec, std::string command, std::string arguments)
{
	sec += std::chrono::duration_cast<std::chrono::seconds>(hour);
	sec += std::chrono::duration_cast<std::chrono::seconds>(min);
	this->sec = sec;
	this->command = command;
	this->arguments = arguments;
}

CommandBlock::CommandBlock(std::chrono::seconds sec, std::string command, std::string arguments)
{
	this->sec = sec;
	this->command = command;
	this->arguments = arguments;
}

CommandBlock::~CommandBlock(){}

void CommandBlock::start()
{
	configureTime();
	wait();
	run();
}

void CommandBlock::wait()
{
	std::this_thread::sleep_until(time);
}

void CommandBlock::run()
{
	const std::string str = command + " " + arguments;
	system( str.c_str() );
}
