#pragma once

using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Mode_De_Paiement
    {
    private:
        int idModePaiement;
        System::String^ ModePaiement;




    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid(int idModePaiement);
        void setmodepaiement(System::String^ ModePaiement);


    };

};
