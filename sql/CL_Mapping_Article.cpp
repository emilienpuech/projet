#include "pch.h"
#include "CL_Mapping_Article.h"

System::String^ Ns_comp_Mappage::CL_Mapping_Article::Select(void)
{
	return"Select [Reference],[nom],[quantite_de_stock],[prix_produit],[seuilreapprovisionnement] FROM [projetpoo].[dbo].[Article];";
}
System::String^ Ns_comp_Mappage::CL_Mapping_Article::Insert(void)
{
	return"INSERT INTO [projetpoo].[dbo].[Article],([nom],[quantite_de_stock],[prix_produit],[seuilreapprovisionnement]) VALUES('" + this->nom + "','" + this->quantite_de_stock + "','" + this->prix_produit + "','" + this->seuil_reapprovisionnement;"');";

}
System::String^ Ns_comp_Mappage::CL_Mapping_Article::Delete(void)
{
	return"Delete FROM [projetpoo].[dbo].[Article] WHERE Reference = " + this->Id + ";";
}
System::String^ Ns_comp_Mappage::CL_Mapping_Article::Update(void)
{
	return "UPDATE[projetpoo].[dbo].[Article] SET Nom = " + this->nom + ", quantite_de_stock = " + this->quantite_de_stock + ", prix_produit = '' = " + this->nom + " WHERE Reference = " + this->Id + "; ";
}
// tout nos Setter NOM PRENOM quantite_de_produit prix_produit
void Ns_comp_Mappage::CL_Mapping_Article::setnom(System::String^ nom) { this->nom = nom; }
void Ns_comp_Mappage::CL_Mapping_Article::setquantite_de_stock(System::String^ quantite_de_stock) { this->quantite_de_stock = quantite_de_stock; }
void Ns_comp_Mappage::CL_Mapping_Article::setprix_produit(System::String^ prix_produit) { this->prix_produit = prix_produit; }
void Ns_comp_Mappage::CL_Mapping_Article::setseuilreapprovisionnement(System::String^ seuilreapprovisionnement) { this->seuil_reapprovisionnement = seuilreapprovisionnement; }

