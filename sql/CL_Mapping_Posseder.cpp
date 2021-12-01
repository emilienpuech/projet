#include "CL_Mapping_Posseder.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Posseder::Select(void)
{
	return"SELECT [idAdresse],[[typeAdresse]],[numeroClient] FROM [projetpoo].[dbo].[Posseder];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Posseder::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[Posseder] ( [type]) VALUES('" + this->Type_Adresse + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Posseder::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Posseder] WHERE idAdresse = '" + this->idAdresse + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Posseder::Update(void)
{
	return "UPDATE[projetpoo].[dbo].[ModePaiement] SET Type_Adresse ='" + this->Type_Adresse + "' WHERE idAdresse = '" + this->idAdresse + "'; ";
}


void NS_Comp_Mappage::CL_Mapping_Posseder::setid(int id) { this->idAdresse = idAdresse; };
void NS_Comp_Mappage::CL_Mapping_Posseder::settypeAdresse(System::String^ Type_Adresse) { this->Type_Adresse = Type_Adresse; };
void NS_Comp_Mappage::CL_Mapping_Posseder::setnumeroClient(float numeroClient) {this->numeroClient = numeroClient; };