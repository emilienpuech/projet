
#include "pch.h"
#include "CL_Mapping_Employer.h"

// syntaxe de noms de collonnes a corriger 


System::String^ NS_Comp_Mappage::CL_Mapping_Employer::Select(void)
{
	return"SELECT [IDEmploye],[Nom],[Prenom],[DateEmbauche],[IDAdresse],[IDEmploye_Employe] FROM [projetpoo].[dbo].[Employe];";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Employer::Insert(void)
{
	return"INSERT INTO [projetpoo].[dbo].[Employer],([Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_Employe]) VALUES('" + this->nom + "','" + this->prenom + "','" + this->date_Embauche + "','" + this->id_adresse + "','" + this->id_superieur + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Employer::Delete(void)
{
	return"Delete FROM [projetpoo].[dbo].[Employer] WHERE IDE_Employer = '" + this->id + "';";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Employer::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Employer] SET Nom = '" + this->nom + "', Prenom = '" + this->prenom + "', DateEmbauche = '"+ this->date_Embauche +"',IDAdresse = '" + this->id_adresse + "',IDEmploye_Employe = '"+ this->id_superieur + "'  WHERE IDEmploye = " + this->id + ";";
}
// tout nos Setter NOM PRENOM DATE D'Embauche

void NS_Comp_Mappage::CL_Mapping_Employer::setid(int id) { this->id= id; }
void NS_Comp_Mappage::CL_Mapping_Employer::setNom(System::String^ nom) { this->nom = nom; }
void NS_Comp_Mappage::CL_Mapping_Employer::setPrenom(System::String^ prenom) { this->prenom = prenom; }
void NS_Comp_Mappage::CL_Mapping_Employer::setdate_Embauche(System::String^ date_Embauche) { this->date_Embauche = date_Embauche; }
void NS_Comp_Mappage::CL_Mapping_Employer::setid_adresse(int id_adresse) { this->id_adresse = id_adresse; }
void NS_Comp_Mappage::CL_Mapping_Employer::setid_superieur(int id_superieur) { this->id_superieur = id_superieur; }
