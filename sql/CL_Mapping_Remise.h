#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Remise
	{
	private:
		System::String^ nomRemise;
		int pourcentageRemise;
	public:
		void setnomRemise(System::String^ nomRemise);
		void setpourcentageRemise(int pourcentageRemise);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ DELETE(void);
		String^ UPDATE(void);

	};
}