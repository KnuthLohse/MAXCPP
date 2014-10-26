/*
 * Base64.h
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#ifndef BASE64_H_
#define BASE64_H_

#include <string>
#include <vector>
#include <stdint.h>

//* Define these if they aren't already in your environment
// * #define TEXT(x) Lx    //Unicode
// * #define TCHAR wchar_t //Unicode
#define TCHAR char    //Not unicode
#define TEXT(x) x     //Not unicode
#define DWORD uint32_t
#define BYTE unsigned char
// * They are defined by default in Windows.h
// */

std::vector<BYTE> base64Decode(const std::basic_string<TCHAR>& input);
std::basic_string<TCHAR> base64Encode(std::vector<BYTE> inputBuffer);

#endif /* BASE64_H_ */
