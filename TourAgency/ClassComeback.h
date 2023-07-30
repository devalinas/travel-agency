#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassComeback
{
	int IdComeback;
	String^ DateTimeComeback;
	int CountComeback;
	double PriceGiveComeback;
	String^ ReasonComeback;
	int IdOrder;

public:
	ClassComeback() {}

	ClassComeback(int i, String^ dto, int cc, double pgc, String^ rc, int ido)
	{
		setId(i);
		setDateTime(dto);
		setCountComeback(cc);
		setPriceGiveComeback(pgc);
		setReasonComeback(rc);
		setOrder(ido);
	}

	void setId(int id)
	{
		if (id > 0)
			this->IdComeback = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId()
	{
		return this->IdComeback;
	}

	void setDateTime(String^ dt)
	{
		this->DateTimeComeback = dt;
	}
	String^ getDateTime()
	{
		return this->DateTimeComeback;
	}

	void setCountComeback(int co)
	{
		if (co > 0)
			this->CountComeback = co;
		else throw invalid_argument("Некоректна кількість повернень!");
	}
	int getCountComeback()
	{
		return this->CountComeback;
	}

	void setPriceGiveComeback(double gpo)
	{
		if (gpo > 0)
			this->PriceGiveComeback = gpo;
		else throw invalid_argument("Некоректна сума повернення!");
	}
	double getPriceGiveComeback()
	{
		return this->PriceGiveComeback;
	}

	void setReasonComeback(String^ rc)
	{
		this->ReasonComeback = rc;
	}
	String^ getReasonComeback()
	{
		return this->ReasonComeback;
	}

	void setOrder(int idc)
	{
		if (idc > 0)
			this->IdOrder = idc;
		else throw invalid_argument("Некоректне значення id замовлення!");
	}
	int getOrder()
	{
		return this->IdOrder;
	}
};