/*
 * Helpers.h
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#ifndef HELPERS_H_
#define HELPERS_H_

#include <string>
#include <vector>
#include <stdint.h>


namespace MAXCPP {


std::vector<std::string> split(const std::string &s, const char delim);
int32_t hexstringToInt32(const std::string &s);


}
#endif /* HELPERS_H_ */
