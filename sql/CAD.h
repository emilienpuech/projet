
// CAD.H ***********************************************************************************
#pragma once

namespace NS_Comp_Data
{
	ref class CLcad
	{
	private:
		System::String^ sSql; //  String sql command 
		System::String^ sCnx; // connection string 
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}
