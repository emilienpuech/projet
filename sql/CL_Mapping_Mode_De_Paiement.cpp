#include "pch.h"
#include "CL_Mapping_Mode_De_Paiement.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::Select(void)
{
    return "SELECT [idMoyenPaiement],[ModePaiement] FROM [projetpoo].[dbo].[ModePaiement]";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::Insert(void)
{
    return "INSERT INTO [projetpoo].[dbo].[ModePaiement] ([ModePaiement]) VALUES('" + this->ModePaiement + "');";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::Delete(void)
{
    return "DELETE FROM [projetpoo].[dbo].[ModePaiement] WHERE idModePaiement = " + this->idModePaiement + ";";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::Update(void)
{
    return "UPDATE [projetpoo].[dbo].[ModePaiement] SET ModePaiement ='" + this->ModePaiement + "'  WHERE idModePaiement = " + this->idModePaiement + "; ";
}
void NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::setid(int idModePaiement) { this->idModePaiement = idModePaiement; }
void NS_Comp_Mappage::CL_Mapping_Mode_De_Paiement::setmodepaiement(System::String^ ModePaiement) { this->ModePaiement = ModePaiement; }
