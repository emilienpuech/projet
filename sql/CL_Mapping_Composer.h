
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