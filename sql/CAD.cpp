
//CAD.CPP**************************************************************************************
#include "pch.h"
#include "CAD.h"


NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source=DESKTOP-B8TDUS7\\SQLSERVER;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName){
	//Execute Query
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;

}
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql){
	//Execute non Query
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}

