#pragma once
#ifndef _VECTORVACIO_H
#define _VECTORVACIO_H
#include <exception>
#include <string>
using namespace std;
class VectorVacio
{
	const char* what() const throw(){

		return "ERROR: El vector esta vacio";
		}
};

#endif