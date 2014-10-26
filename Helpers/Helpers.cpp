/*
 * Helpers.cpp
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */


#include "Helpers.h"
#include <vector>
#include <sstream>
#include <cstdlib>

namespace MAXCPP {

std::vector<std::string> &split(const std::string &s, const char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> split(const std::string s, const char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

int32_t hexstringToInt32(const std::string &s) {
	char * p;
	long n = strtol( s.c_str(), & p, 16 );
	if ( * p != 0 )
		return -1;
	return n;
}

}
