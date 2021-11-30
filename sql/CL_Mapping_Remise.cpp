#include "CL_Mapping_Remise.h"


System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Select(void)
{
    return"SELECT [idPaiement],[pourcentageRemise] FROM [projetpoo].[dbo].[Remise];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Insert(void)
{
    return "INSERT INTO [projetpoo].[dbo].[ID_Paiement] ( [ref_Commande) VALUES('" + this->ID_Paiement + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Delete(void)
{
    return "DELETE FROM [projetpoo].[dbo].[ref_Commande] WHERE numeroClient = '" + this->ID_Paiement + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Update(void)
{
    return "UPDATE[projetpoo].[dbo].[ID_paiement] SET ref_Commande ='" + this->RefCommande + "' WHERE ID_Paiement = '" + this->ID_Paiement + "'; ";
}

void NS_Comp_Mappage::CL_Mapping_Remise::setid(int id) { this->ID_Paiement = ID_Paiement; }
void NS_Comp_Mappage::CL_Mapping_Remise::setnomRemise(System::String^ nom_Taxe) { this->nomRemise = nomRemise; }
void NS_Comp_Mappage::CL_Mapping_Remise::setPourcentageRemise(float pourcentageRemise) { this->pourcentageRemise = pourcentageRemise; }