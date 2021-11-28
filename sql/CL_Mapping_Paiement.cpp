#include "CL_Mapping_Paiement.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Select(void)
{
	return"SELECT [IDMoyenPaiement],[[MoyenPaiement]] FROM [projetpoo].[dbo].[ModePaiement];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[ModePaiement] ( [MoyenPaiement]) VALUES('" + this->moyen_de_paiment + "');";
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
void NS_Comp_Mappage::CL_Mapping_Paiement::setmoyen_de_paiment(System::String^ moyen_de_paiment) { this->moyen_de_paiment = moyen_de_paiment; }