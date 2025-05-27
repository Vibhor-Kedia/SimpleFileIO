#ifndef SIMPLEFILEIO_H
#define SIMPLEFILEIO_H

#include <string>

bool writeToFile(const std::string& filename, const std::string& content);
std::string readFromFile(const std::string& filename);

#endif