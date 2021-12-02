#include "CL_Mapping_Posseder.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Posseder::Select(void)
{
	return"SELECT [idAdresse],[[typeAdresse]],[numeroClient] FROM [projetpoo].[dbo].[Posseder];";
}

/*System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[Posseder] ( [type]) VALUES('" + this->moyen_de_paiment + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[ModePaiement] WHERE numeroClient = '" + this->id + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Update(void)
{
	return "UPDATE[projetpoo].[dbo].[POsseder] SET TypeAdresse ='" + this->Type_Adresse + "' WHERE idAdresse = '" + this->idAdresse + "'; ";
}


void NS_Comp_Mappage::CL_Mapping_Posseder::setid(int idAdresse) { this->idAdresse = idAdresse; };
void NS_Comp_Mappage::CL_Mapping_Posseder::settypeAdresse(System::String^ Type_Adresse) { this->Type_Adresse = Type_Adresse; };
void NS_Comp_Mappage::CL_Mapping_Posseder::setnumeroClient(int numeroClient) { this->numeroClient = numeroClient; };