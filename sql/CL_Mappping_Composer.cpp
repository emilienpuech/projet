#include "pch.h"
#include "CL_Mapping_Composer.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Composer::Select(void)
{
	return"SELECT [Reference],[RefCommande],[nombreArticle],[PrixUHT],[pourcentageTVA],[Couleur] FROM [projetpoo].[dbo].[Composer]";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Composer::Insert(void)
{
	return "INSERT INTO [projetpoo].[dbo].[Composer] ([Reference],[RefCommande],[nombreArticle],[PrixUHT],[pourcentageTVA],[Couleur]) VALUES(" + this->reference + ",'" + this->refcommande + "'," + this->nombrearticle + "," + this->prixuht + "," + this->pourcentagetva + ",'" + this->couleur + "');";

}

System::String^ NS_Comp_Mappage::CL_Mapping_Composer::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Composer] WHERE Reference = " + this->reference + ";";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Composer::Update(void)
{
	return "UPDATE [projetpoo].[dbo].[Composer] SET RefCommande ='" + this->refcommande+ "', nombreArticle =" + this->nombrearticle+ ", PrixUHT =" + this->prixuht+ ", pourcentageTVA =" + this->pourcentagetva + ", Couleur ='" + this->couleur+ "' WHERE Reference= " + this->reference + "; ";
}



// tout nos Setter NOM PRENOM DATE DE NAISSANCE
void NS_Comp_Mappage::CL_Mapping_Composer::setreference(int reference) { this->reference = reference; }
void NS_Comp_Mappage::CL_Mapping_Composer::setrefcommande(System::String^ refcommande) { this->refcommande = refcommande; }
void NS_Comp_Mappage::CL_Mapping_Composer::setnombrearticle(int nombrearticle) { this->nombrearticle = nombrearticle; }
void NS_Comp_Mappage::CL_Mapping_Composer::setprixuht(int prixuht) { this->prixuht = prixuht; }
void NS_Comp_Mappage::CL_Mapping_Composer::setpourcentagetva(float pourcentagetva) { this->pourcentagetva = pourcentagetva; }
void NS_Comp_Mappage::CL_Mapping_Composer::setcouleur(System::String^ couleur) { this->couleur = couleur; }




/*
.h

#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Composer
	{
	private:
		System::String^ sSql;
		int reference;
		System::String^ refcommande;
		int nombrearticle;
		int prixuht;
		float pourcentagetva;
		System::String^ couleur;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setreference(int reference);
		void setrefcommande(System::String^ refcommande);
		void setnombrearticle(int nombrearticle);
		void setprixuht(int prixuht);
		void setpourcentagetva(float pourcentagetva);
		void setcouleur(System::String^ couleur);

	};
}


*/