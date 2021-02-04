#pragma once
#include <iostream>
#include <string>
#include <thread>

class CommandBlock
{
private:
	std::chrono::time_point<std::chrono::system_clock, std::chrono::seconds> time;
	std::chrono::seconds sec;
	std::string command;
	std::string arguments;

	void configureTime();
	void wait();
	void run();

public:
	CommandBlock(std::chrono::hours, std::chrono::minutes, std::chrono::seconds, std::string, std::string);
	CommandBlock(std::chrono::seconds, std::string, std::string);
	~CommandBlock();

	void start();
	
};

