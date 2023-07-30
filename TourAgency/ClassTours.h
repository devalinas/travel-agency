#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassTours
{
	int IdTours;
	String^ NameTours;
	String^ TypeTours;
	String^ SeasonTours;
	double PriceTours;
	int DurationTours;
	int CountTourists;
	String^ CountriesTours;
	int IdHotel;
	String^ DateTours;

public:
	ClassTours() {}

	ClassTours(int i, String^ n, String^ t, String^ s, double pr, int d, int c, String^ ct, int idh, String^ dt)
	{
		setId(i);
		setName(n);
		setType(t);
		setSeason(s);
		setPrice(pr);
		setDuration(d);
		setCountTourists(c);
		setCountries(ct);
		setHotel(idh);
		setDate(dt);
	}

	void setId(int id)
	{
		if (id > 0)
			this->IdTours = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId()
	{
		return this->IdTours;
	}

	void setName(String^ doc)
	{
		if (doc->Length != 0)
			this->NameTours = doc;
		else throw invalid_argument("Неправильно введена назва туру!");
	}
	String^ getName()
	{
		return this->NameTours;
	}

	void setType(String^ type)
	{
		if (type->Length != 0)
			this->TypeTours = type;
		else throw invalid_argument("Некоректний тип туру!");
	}
	String^ getType()
	{
		return this->TypeTours;
	}

	void setSeason(String^ coh)
	{
		if (coh->Length != 0)
			this->SeasonTours = coh;
		else throw invalid_argument("Некоректна назва сезону туру!");
	}
	String^ getSeason()
	{
		return this->SeasonTours;
	}

	void setPrice(double pr)
	{
		if (pr > 0)
			this->PriceTours = pr;
		else throw invalid_argument("Некоректне значення ціни!");
	}
	double getPrice()
	{
		return this->PriceTours;
	}

	void setDuration(int d)
	{
		if (d > 0)
			this->DurationTours = d;
		else throw invalid_argument("Некоректне значення тривалості туру!");
	}
	int getDuration()
	{
		return this->DurationTours;
	}

	void setCountTourists(int c)
	{
		if (c > 0)
			this->CountTourists = c;
		else throw invalid_argument("Некоректне значення кількості туристів!");
	}
	int getCountTourists()
	{
		return this->CountTourists;
	}

	void setCountries(String^ ct)
	{
		if (ct->Length != 0)
			this->CountriesTours = ct;
		else throw invalid_argument("Некоректна назва країни!");
	}
	String^ getCountries()
	{
		return this->CountriesTours;
	}

	void setHotel(int id)
	{
		if (id > 0)
			this->IdHotel = id;
		else throw invalid_argument("Некоректне значення id готелю!");
	}
	int getHotel()
	{
		return this->IdHotel;
	}

	void setDate(String^ dt)
	{
		this->DateTours = dt;
	}
	String^ getDate()
	{
		return this->DateTours;
	}
};