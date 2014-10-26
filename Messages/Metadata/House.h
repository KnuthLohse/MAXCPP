/*
 * House.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef HOUSE_H_
#define HOUSE_H_



namespace MAXCPP {
class HMessage;

class House {
public:
	House();
	virtual ~House();

	void setCubeInformation(const HMessage &hMessage_p);
};

} /* namespace MAXCPP */
#endif /* HOUSE_H_ */
