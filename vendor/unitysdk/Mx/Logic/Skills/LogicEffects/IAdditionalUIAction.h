#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int IAdditionalUIAction_TypeDefinitionIndex = 14682;

	class IAdditionalUIAction : public Il2CppObject
	{
	public:
		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIActionParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUIACTION_GET_UIPATH_OFFSET))(nullptr);
		}

	};
}

