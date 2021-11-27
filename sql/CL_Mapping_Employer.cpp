
#include "pch.h"
#include "CL_Mapping_Employer.h"

// syntaxe de noms de collonnes a corriger 


System::String^ Ns_comp_Mappage::CL_Mapping_Employer::select(void) 
{
	return"Select [IDEmployer],[Nom],[Prenom],[DateEmbauche] FROM [projetpoo].[dbo].[Employer];";
}
System::String^ Ns_comp_Mappage::CL_Mapping_Employer::Insert(void)
{
	return"INSERT INTO [projetpoo].[dbo].[Employer],([nom],[prenom],[date_Embauche]) VALUES('" + this->nom + "','" + this->prenom + "','" + this->date_Embauche + "');";

}
System::String^ Ns_comp_Mappage::CL_Mapping_Employer::Delete(void) 
{
	return"Delete FROM [projetpoo].[dbo].[Employer] WHERE IDE_Employer = " + this->Id + ";";
}
System::String^ Ns_comp_Mappage::CL_Mapping_Employer::Update(void) 
{
	return "UPDATE [projetpoo].[dbo].[Employer] SET Nom = " + this->nom + ", Prenom = " + this->prenom + ", date_Embauche = '' = " + this->nom + " WHERE IDEemployer = " + this->Id + ";";
}
// tout nos Setter NOM PRENOM DATE D'Embauche
void Ns_comp_Mappage::CL_Mapping_Employer::setNom(System::String^ nom) { this->nom = nom; }
void Ns_comp_Mappage::CL_Mapping_Employer::setPrenom(System::String^ prenom) { this->prenom = prenom; }
void Ns_comp_Mappage::CL_Mapping_Employer::setdate_Embauche(System::String^ datEmbauche) { this->date_Embauche = date_Embauche; }

