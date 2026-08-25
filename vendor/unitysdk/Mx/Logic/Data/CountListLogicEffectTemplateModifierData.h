#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA580)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectTemplateModifierData_TypeDefinitionIndex = 13392;

	class CountListLogicEffectTemplateModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* TemplateIdList; // 0x28
		::System::Boolean CountTrueCondition; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

