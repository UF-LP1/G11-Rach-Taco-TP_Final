#pragma once
#ifndef _PACREPETIDO_H
#define _PACREPETIDO_H
#include <exception>
#include <string>
using namespace std;
class Pacrepetido:public exception
{

	const char* what() const throw() {
		return "ERROR: El paciente ya se encuentra en la lista";
	}

};
#endif
