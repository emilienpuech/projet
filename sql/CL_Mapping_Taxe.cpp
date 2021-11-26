#include "pch.h"
#include "CL_Mapping_Taxe.h"
namespace NS_Comp_Mappage
	CL_Maping_Taxe::CL_Mapping_Taxe(void)
{
	this->nomTaxe = "nomTaxe";
	this->pourcentageTaxe = "RIEN;
}
String^ CL_Mapping_Taxe::SELECT(void)
{
	return "SELECT * FROM `projet`.`article`;";
}
String^ CL_Mapping_Taxe::DELETE(void)
{
	return "DELETE FROM `projet`.`article` WHERE (``
}