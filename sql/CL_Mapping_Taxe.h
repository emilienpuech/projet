#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Taxe
	{
		private:
			System::String^ nomtaxe;
			int pourcentagetaxe;
		public :
			void setnomtaxe(System::String^ nomtaxe);
			void setpourcentageTaxe(int pourcentagetaxe);
			String^ SELECT(void);
			String^ INSERT(void);
			String^ DELETE(void);
			String^ UPDATE(void);

	};
}

