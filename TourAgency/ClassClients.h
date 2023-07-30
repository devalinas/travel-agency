#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassClients 
{
	int IdClient;
	String^ SurNameClient;
	String^ BirthClient;
	String^ PhoneClient;
	String^ PassportClient;

public:
	ClassClients() {}

	ClassClients(int i, String^ sn, String^ b, String^ ph, String^ pass) 
	{
		setId(i);
		setSurName(sn);
		setBirth(b);
		setPhone(ph);
		setPassport(pass);
	}

	void setId(int id) 
	{
		if (id > 0)
			this->IdClient = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId() 
	{
		return this->IdClient;
	}

	void setSurName(String^ doc) 
	{
		if (doc->Length != 0)
			this->SurNameClient = doc;
		else throw invalid_argument("Неправильно введені дані ПІБ!");
	}
	String^ getName() 
	{
		return this->SurNameClient;
	}

	void setBirth(String^ birth) 
	{
		if (birth->Length != 0)
			this->BirthClient = birth;
		else throw invalid_argument("Некоректна дата народження!");
	}
	String^ getBirth() 
	{
		return this->BirthClient;
	}

	void setPhone(String^ phone) 
	{
		if (phone->Length != 0)
			this->PhoneClient = phone;
		else throw invalid_argument("Некоректний ввід номера телефону!");
	}
	String^ getPhone() 
	{
		return this->PhoneClient;
	}

	void setPassport(String^ pass) 
	{
		if (pass->Length != 0)
			this->PassportClient = pass;
		else throw invalid_argument("Некоректний ввід номера паспорта!");
	}
	String^ getPassport() 
	{
		return this->PassportClient;
	}
};