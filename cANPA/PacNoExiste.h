#pragma once
#ifndef _PACNOEXISTE_H
#define _PACNOEXISTE_H

#include <exception>
#include <string>
using namespace std;
class PacNoExiste:public exception
{
	const char* what() const throw() {
		return "El paciente no se encuentra en la lista";
	}

};
#endif
