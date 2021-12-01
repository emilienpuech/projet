#include "CL_Mapping_Paiement.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Select(void)
{
	return"SELECT [IDPaiement],[DatePaiement],[montantPaiement],[RefCommande],[IDMoyenPaiement] FROM [projetpoo].[dbo].[Paiement]";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Insert(void)
{
	return "INSERT INTO [dbo].[Paiement] ([DatePaiement],[montantPaiement],[RefCommande],[IDMoyenPaiement]) VALUES";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Delete(void)
{
	return "";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Paiement::Update(void)
{
	return "";
}


void NS_Comp_Mappage::CL_Mapping_Paiement::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Paiement::setmoyen_de_paiment(System::String^ date_de_paiment) { this->date_de_paiment = date_de_paiment; }
void NS_Comp_Mappage::CL_Mapping_Paiement::setmontantpaiement(int montantpaiement) { this->montantpaiement = montantpaiement; }
void NS_Comp_Mappage::CL_Mapping_Paiement::setrefcommande(System::String^ refcommande) { this->refcommande = refcommande; }
void NS_Comp_Mappage::CL_Mapping_Paiement::setidmoyenpaiement(int idmoyenpaiement) { this->idmoyenpaiement = idmoyenpaiement; }