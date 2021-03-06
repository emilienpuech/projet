#include "pch.h"
#include "CL_Mapping_Ville.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Ville::Select(void)
{
    return "SELECT [IDVille],[NomVille] FROM [projetpoo].[dbo].[Ville]";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Ville::Insert(void)
{
    return "INSERT INTO [projetpoo].[dbo].[Ville] ([NomVille]) VALUES('" + this->nom_ville + "');";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Ville::Delete(void)
{
    return "DELETE FROM [projetpoo].[dbo].[Ville] WHERE IDVille = '" + this->id + "';";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Ville::Update(void)
{
    return "UPDATE [projetpoo].[dbo].[Ville] SET NomVille ='" + this->nom_ville + "'  WHERE IDVille = '" + this->id + "'; ";
}
void NS_Comp_Mappage::CL_Mapping_Ville::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Ville::setnom_ville(System::String^ nom_ville) { this->nom_ville = nom_ville; }
