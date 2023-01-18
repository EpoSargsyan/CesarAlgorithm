#ifndef CHECK_H
#define CHECK_H

#include <iostream>
#include <string>

bool isValidLine(const std::string&);
void init_command(std::string&);
void init_line(std::string&);
void init_step(int&);
bool isValidCommand(const std::string&);
std::string toLowerCase(std::string&);


#endif // CHECK_H