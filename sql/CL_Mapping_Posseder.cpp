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
	return "UPDATE[projetpoo].[dbo].[ModePaiement] SET MoyenPaiement ='" + this->moyen_de_paiment + "' WHERE IDMoyenPaiement = '" + this->id + "'; ";
}


void NS_Comp_Mappage::CL_Mapping_Paiement::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Paiement::setmoyen_de_paiment(System::String^ moyen_de_paiment) { this->moyen_de_paiment = moyen_de_paiment; }*/