
//CLmap.CPP*****************************************************************************************
#include "pch.h"
#include "CL_Mapping_Adresse.h"



System::String^ NS_Comp_Mappage::CL_Mapping_Adresse::Select(void)
{
	return"SELECT [IDAdresse],[Numero],[Rue],[TypeAdresse],[numeroClient],[IDVille] FROM [projetpoo].[dbo].[Adresse];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Adresse::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[Adresse] (,[Numero],[Rue],[TypeAdresse],[numeroClient],[IDVille]) VALUES('" + this->numero + "','" + this->rue + "','" + this->type_adresse + "','" + this->numero_client + "','" + this->id_ville + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Adresse::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Adresse] WHERE IDAdresse = '" + this->id + "';";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Adresse::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Adresse] SET Numero='" + this->numero + "', Rue='" + this->rue + "', TypeAdresse='" + this->type_adresse+ "', numeroClient='" + this->numero_client + "', IDVille='" + this->id_ville +"' WHERE IDAdresse = '" + this->id + "'; ";
}



// tout nos Setter NOM PRENOM DATE DE NAISSANCE
void NS_Comp_Mappage::CL_Mapping_Adresse::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Adresse::setnumero(int numero) { this->numero = numero; }
void NS_Comp_Mappage::CL_Mapping_Adresse::setrue(System::String^ rue) { this->rue = rue; }
void NS_Comp_Mappage::CL_Mapping_Adresse::settype_adresse(System::String^ type_adresse) { this->type_adresse = type_adresse; }
void NS_Comp_Mappage::CL_Mapping_Adresse::setnumero_client(int numero_client) { this->numero_client = numero_client; }
void NS_Comp_Mappage::CL_Mapping_Adresse::setid_ville(int id_ville) { this->id_ville = id_ville; }

