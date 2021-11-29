#include "CL_Mapping_Remise.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Select(void)
{
    return"SELECT [idPaiement],[pourcentageRemise] FROM [projetpoo].[dbo].[Remise];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Insert(void)
{
    return "INSERT INTO [projetpoo].[dbo].[ID_Paiement] ( [ref_Commande) VALUES('" + this->ID_paiment + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Delete(void)
{
    return "DELETE FROM [projetpoo].[dbo].[ref_Commande] WHERE numeroClient = '" + this->id + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Update(void)
{
    return "UPDATE[projetpoo].[dbo].[ID_paiement] SET ref_Commande ='" + this->ref_Commande + "' WHERE ID_Paiement = '" + this->ID_paiement + "'; ";
}

void NS_Comp_Mappage::CL_Mapping_Remise::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Remise::setNom_Taxe(System::String^ nom_Taxe) { this->nom_Taxe = nom_Taxe; }
void NS_Comp_Mappage::CL_Mapping_Remise::setPourcentageTaxe(float pourcentageTaxe) { this->pourcentageTaxe = pourcentageTaxe; }