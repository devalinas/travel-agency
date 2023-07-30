#pragma once
#include <stdexcept>
#include <String.h>

using namespace std;
using namespace System;

ref class ClassOrders
{
	int IdOrder;
	String^ DateTimeOrder;
	int CountOrders;
	double GeneralPriceOrder;
	int IdWorker;
	int IdClient;
	int IdTours;

public:
	ClassOrders() {}

	ClassOrders(int i, String^ dto, int co, double gpo, int idw, int idc, int idt)
	{
		setId(i);
		setDateTime(dto);
		setCountOrders(co);
		setGeneralPriceOrder(gpo);
		setWorker(idw);
		setClient(idc);
		setTours(idt);
	}

	void setId(int id)
	{
		if (id > 0)
			this->IdOrder = id;
		else throw invalid_argument("Некоректне id!");
	}
	int getId()
	{
		return this->IdOrder;
	}

	void setDateTime(String^ dt)
	{
		this->DateTimeOrder = dt;
	}
	String^ getDateTime()
	{
		return this->DateTimeOrder;
	}

	void setCountOrders(int co)
	{
		if (co > 0)
			this->CountOrders = co;
		else throw invalid_argument("Некоректна кількість замовлень!");
	}
	int getCountOrders()
	{
		return this->CountOrders;
	}

	void setGeneralPriceOrder(double gpo)
	{
		if (gpo > 0)
			this->GeneralPriceOrder = gpo;
		else throw invalid_argument("Некоректна сума замовлення!");
	}
	double getGeneralPriceOrder()
	{
		return this->GeneralPriceOrder;
	}

	void setWorker(int idw)
	{
		if (idw > 0)
			this->IdWorker = idw;
		else throw invalid_argument("Некоректне значення id працівника!");
	}
	int getWorker()
	{
		return this->IdWorker;
	}

	void setClient(int idc)
	{
		if (idc > 0)
			this->IdClient = idc;
		else throw invalid_argument("Некоректне значення id клієнта!");
	}
	int getClient()
	{
		return this->IdClient;
	}

	void setTours(int idt)
	{
		if (idt > 0)
			this->IdTours = idt;
		else throw invalid_argument("Некоректне значення id туру!");
	}
	int getTours()
	{
		return this->IdTours;
	}
};