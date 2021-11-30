#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Taxer
	{
	private:
		System::String^ sSql;
		int idTaxe;
		int Reference;
		
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setid(int idtaxe);
		void setReference(int Reference);


	};
}