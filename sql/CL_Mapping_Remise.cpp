#include "CL_Mapping_Remise.h"

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Select(void)
{
    return"";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Insert(void)
{
    return "";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Delete(void)
{
    return "";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Remise::Update(void)
{
    return "";
}

void NS_Comp_Mappage::CL_Mapping_Remise::setid(int id) { this->id = id; }
void NS_Comp_Mappage::CL_Mapping_Remise::setnomRemise(System::String^ nomRemise) { this->nomRemise = nomRemise; }
void NS_Comp_Mappage::CL_Mapping_Remise::setPourcentageRemise(float pourcentageRemise) { this->pourcentageRemise = pourcentageRemise; }