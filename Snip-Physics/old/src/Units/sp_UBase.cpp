#include "sp_UBase.hpp"

sp_UBase::sp_UBase(double amount)
{
	this.amount = amount;
}

double sp_UBase::GetBase()
{
	return base;
}

sp_UBase sp_UBase::Convert(sp_UBase from)
{
	sp_UBase* to(from.GetBase() * this.GetBase());
	return to;
}
