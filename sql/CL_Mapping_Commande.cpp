#include "pch.h"
#include "CL_Mapping_Commande.h"



System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Select(void)
{
	return"SELECT [RefCommande],[DateLivraison],[DateEmission],[numeroClient] FROM [projetpoo].[dbo].[Commande]";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[Commande] ([RefCommande],[DateLivraison],[DateEmission],[numeroClient]) VALUES('" + this->RefCommande + "', '" + this->DateLivraison + "', '" + this->DateEmission + "', " + this->client + ", " + this->id_superieur + ")";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Commande] WHERE RefCommande = '" + this->RefCommande + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Commande::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Commande] SET RefCommande='" + this->RefCommande + "', DateLivraison='" + this->DateLivraison + "', DateEmission='" + this->DateEmission + "', numeroClient=" + this->numeroclient + "; ";
}



// tout nos Setter NOM PRENOM DATE DE NAISSANCE
void NS_Comp_Mappage::CL_Mapping_Commande::setRefCommande(System::String^ RefCommande) { this->RefCommande = RefCommande; }
void NS_Comp_Mappage::CL_Mapping_Commande::setDateLivraison(System::String^ DateLivraison) { this->DateLivraison = DateLivraison; }
void NS_Comp_Mappage::CL_Mapping_Commande::setDateEmission(System::String^ DateEmission) { this->DateEmission = DateEmission; }

void NS_Comp_Mappage::CL_Mapping_Commande::setnumeroclient(int numeroclient) { this->numeroclient = numeroclient; }
