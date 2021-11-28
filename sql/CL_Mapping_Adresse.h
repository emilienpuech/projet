#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Adresse
	{
	private:
		System::String^ sSql;
		int id;
		int numero;
		System::String^ rue;
		System::String^ type_adresse;
		int numero_client;
		int id_ville;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setid(int id);
		void setnumero(int numero);
		void setrue(System::String^ rue);
		void settype_adresse(System::String^ type_adresse);
		void setnumero_client(int numero_client);
		void setid_ville(int id_ville);

	};

}
