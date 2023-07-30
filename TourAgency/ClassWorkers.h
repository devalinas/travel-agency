#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassWorkers
{
	int IdWorker;
	String^ SurNameWorker;
	String^ BirthWorker;
	String^ EmailWorker;
	String^ AddressWorker;
	String^ PhoneWorker;
	String^ PositionWorker;
	String^ srcImage;

public:
	ClassWorkers() {}

	ClassWorkers(int i, String^ sn, String^ b, String^ e, String^ addr, String^ ph, String^ pos, String^ src)
	{
		setId(i);
		setSurName(sn);
		setBirth(b);
		setEmail(e);
		setAddress(addr);
		setPhone(ph);
		setPosition(pos);
		setSRC(src);
	}

	void setId(int id)
	{
		if (id > 0)
			this->IdWorker = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId()
	{
		return this->IdWorker;
	}

	void setSurName(String^ doc)
	{
		if (doc->Length != 0)
			this->SurNameWorker = doc;
		else throw invalid_argument("Неправильно введені дані ПІБ!");
	}
	String^ getName()
	{
		return this->SurNameWorker;
	}

	void setBirth(String^ birth)
	{
		if (birth->Length != 0)
			this->BirthWorker = birth;
		else throw invalid_argument("Некоректна дата народження!");
	}
	String^ getBirth()
	{
		return this->BirthWorker;
	}

	void setEmail(String^ email)
	{
		this->EmailWorker = email;
	}
	String^ getEmail()
	{
		return this->EmailWorker;
	}

	void setAddress(String^ address)
	{
		this->AddressWorker = address;
	}
	String^ getAddress()
	{
		return this->AddressWorker;
	}

	void setPhone(String^ phone)
	{
		if (phone->Length != 0)
			this->PhoneWorker = phone;
		else throw invalid_argument("Некоректний ввід номера телефону!");
	}
	String^ getPhone()
	{
		return this->PhoneWorker;
	}

	void setPosition(String^ pos)
	{
		if (pos->Length != 0)
			this->PositionWorker = pos;
		else throw invalid_argument("Некоректний ввід назви позиції!");
	}
	String^ getPosition()
	{
		return this->PositionWorker;
	}

	void setSRC(String^ src)
	{
		if (src->Length != 0)
			this->srcImage = src;
		else throw invalid_argument("Некоректний ввід шляху!");
	}
	String^ getSRC()
	{
		return this->srcImage;
	}
};