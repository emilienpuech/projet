#include "pch.h"
#include "CL_Mapping_Commande.h"



System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Select(void)
{
	return"SELECT [RefCommande],[DateLivraison],[DateEmission];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Insert(void)
{
	return "INSERT INTO [RefCommande],[DateLivraison],[DateEmission];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Commande] WHERE RefCommande = '" + this->RefCommande + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Commande] SET RefCommande='" + this->RefCommande + "', DateLivraison='" + this->DateLivraison + "', DateEmission='" + this->DateEmission + "'; ";
}



// tout nos Setter NOM PRENOM DATE DE NAISSANCE
void NS_Comp_Mappage::CL_Mapping_Commande::setRefCommande(int RefCommande) { this->RefCommande = RefCommande; }
void NS_Comp_Mappage::CL_Mapping_Commande::setDateLivraison(System::String^ DateLivraison) { this->DateLivraison = DateLivraison; }
void NS_Comp_Mappage::CL_Mapping_Commande::setDateEmission(System::String^ DateEmission) { this->DateEmission = DateEmission; }

