#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassHotel
{
	int IdHotel;
	String^ NameHotel;
	String^ TypeHotel;
	String^ ClassOfHotel;
	String^ PhoneHotel;
	String^ srcImage;

public:
	ClassHotel() {}

	ClassHotel(int i, String^ n, String^ t, String^ cl, String^ ph, String^ src)
	{
		setId(i);
		setName(n);
		setType(t);
		setClassOfHotel(cl);
		setPhone(ph);
		setSRC(src);
	}

	void setId(int id)
	{
		if (id > 0)
			this->IdHotel = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId()
	{
		return this->IdHotel;
	}

	void setName(String^ doc)
	{
		if (doc->Length != 0)
			this->NameHotel = doc;
		else throw invalid_argument("Неправильно введена назва готелю!");
	}
	String^ getName()
	{
		return this->NameHotel;
	}

	void setType(String^ type)
	{
		if (type->Length != 0)
			this->TypeHotel = type;
		else throw invalid_argument("Некоректний тип готелю!");
	}
	String^ getType()
	{
		return this->TypeHotel;
	}

	void setClassOfHotel(String^ coh)
	{
		if (coh->Length != 0)
			this->ClassOfHotel = coh;
		else throw invalid_argument("Некоректний клас готелю!");
	}
	String^ getClassOfHotel()
	{
		return this->ClassOfHotel;
	}

	void setPhone(String^ phone)
	{
		if (phone->Length != 0)
			this->PhoneHotel = phone;
		else throw invalid_argument("Некоректний ввід номера телефону!");
	}
	String^ getPhone()
	{
		return this->PhoneHotel;
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