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
		CL_Mapping_Remise(void);
		void getpourcentageRemise();
		void setpourcentageRemise(int);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ DELETE(void);
		String^ UPDATE(void);

	};
}