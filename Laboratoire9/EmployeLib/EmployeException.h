/**
 * \file EmployeException.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-04-07
 */

#ifndef EMPLOYEEXCEPTION_H_
#define EMPLOYEEXCEPTION_H_

#include <stdexcept>

namespace labo10 {

class EmployeException: public std::runtime_error {
public:
	EmployeException (std::string);
	~EmployeException() throw () {

	}
	;
};

class EmployeAbsentException: public EmployeException {
public:
	EmployeAbsentException (std::string);
};

} /* namespace labo10 */

#endif /* EMPLOYEEXCEPTION_H_ */