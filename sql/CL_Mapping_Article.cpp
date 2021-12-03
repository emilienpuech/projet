#include "pch.h"
#include "CL_Mapping_Article.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Article::Select(void)
{
	return"SELECT [Reference],[Nom],[QuantiteStock],[PrixProduit],[SeuilReapprovisionnement]FROM [projetpoo].[dbo].[Article]";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Article::Insert(void)
{
	return"INSERT INTO [projetpoo].[dbo].[Article] ([Nom],[QuantiteStock],[PrixProduit],[SeuilReapprovisionnement]) VALUES('" + this->nom + "'," + this->quantite_de_stock + "," + this->prix_produit + "," + this->seuil_reapprovisionnement+");";

}
System::String^ NS_Comp_Mappage::CL_Mapping_Article::Delete(void)
{
	return"exec [projetpoo].[dbo].[supprimerArticle] " + this->id + ";";
}
System::String^ NS_Comp_Mappage::CL_Mapping_Article::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Article] SET Nom = '" + this->nom + "', QuantiteStock = '" + this->quantite_de_stock + "', PrixProduit = '" + this->prix_produit + "', SeuilReapprovisionnement = '" +this->seuil_reapprovisionnement +"' WHERE Reference = '" + this->id + "';";
}
// tout nos Setter NOM PRENOM quantite_de_produit prix_produit
void NS_Comp_Mappage::CL_Mapping_Article::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Article::setnom(System::String^ nom) { this->nom = nom; }
void NS_Comp_Mappage::CL_Mapping_Article::setquantite_de_stock(int quantite_de_stock) { this->quantite_de_stock = quantite_de_stock; }
void NS_Comp_Mappage::CL_Mapping_Article::setprix_produit(int prix_produit) { this->prix_produit = prix_produit; }
void NS_Comp_Mappage::CL_Mapping_Article::setseuilreapprovisionnement(int seuilreapprovisionnement) { this->seuil_reapprovisionnement = seuilreapprovisionnement; }

