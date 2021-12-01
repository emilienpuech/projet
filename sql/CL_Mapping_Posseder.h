#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Posseder
    {
    private:
        int idAdresse;
        System::String^ Type_Adresse;
        int numeroClient;


    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid(int idAdresse);
        void settypeAdresse(System::String^ Type_Adresse);
        void setnumeroClient(int numeroClient);

    };
}