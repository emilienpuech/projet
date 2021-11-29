#include "pch.h"
#include "CL_Mapping_Taxe.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Taxe::Select(void)
{
    return "SELECT [IDTaxe],[NomTaxe],[PourcentageTaxe] FROM [projetpoo].[dbo].[Taxe]";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxe::Insert(void)
{
    return "INSERT INTO [projetpoo].[dbo].[Taxe] ([NomTaxe], [PourcentageTaxe]) VALUES('" + this->nom_taxe + "','" + this->pourcentagetaxe + "');";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxe::Delete(void)
{
    return "DELETE FROM [projetpoo].[dbo].[Taxe] WHERE IDTaxe = '" + this->id + "';";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Taxe::Update(void)
{
    return "UPDATE [projetpoo].[dbo].[Taxe] SET NomTaxe ='" + this->nom_taxe + "',PourcentageTaxe = '" + this->pourcentagetaxe +"' WHERE IDTaxe = '" + this->id + "'; ";
}

void NS_Comp_Mappage::CL_Mapping_Taxe::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Taxe::setnom_taxe(System::String^ nom_taxe) { this->nom_taxe = nom_taxe; }
void NS_Comp_Mappage::CL_Mapping_Taxe::setpourcentagetaxe(float pourcentagetaxe) { this->pourcentagetaxe = pourcentagetaxe; }