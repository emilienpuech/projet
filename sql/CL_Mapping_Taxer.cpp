#include "pch.h"
#include "CL_Mapping_Taxer.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Taxer::Select(void)
{
	return"Select [Reference],[idtaxe] FROM [projetpoo].[dbo].[Taxer];";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxer::Insert(void)
{
	return"INSERT INTO [projetpoo].[dbo].[Taxer],([Reference],[idtaxe]) VALUES('" + this->Reference + "','" + this->idTaxe + "');";

}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxer::Delete(void)
{
	return"Delete FROM [projetpoo].[dbo].[Taxer] WHERE Reference = " + this->Reference+ ";";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxer::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Article] SET Reference = " + this->Reference + ", idTaxe = " + this->idTaxe + " ";
}
// tout nos Setter NOM PRENOM quantite_de_produit prix_produit
void NS_Comp_Mappage::CL_Mapping_Taxer::setid(int idTaxe) { this->idTaxe = idTaxe; }
void NS_Comp_Mappage::CL_Mapping_Taxer::setReference(int Reference) { this->Reference = Reference; }