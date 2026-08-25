#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_ADDITIONALUIDATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int IAdditionalUISet_TypeDefinitionIndex = 14684;

	class IAdditionalUISet : public Il2CppObject
	{
	public:
		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_UIPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIDataParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IADDITIONALUISET_GET_ADDITIONALUIDATAPARAMETERS_OFFSET))(nullptr);
		}

	};
}

