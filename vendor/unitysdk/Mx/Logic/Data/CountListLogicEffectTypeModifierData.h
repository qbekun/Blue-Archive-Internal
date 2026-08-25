#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA590)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectTypeModifierData_TypeDefinitionIndex = 13393;

	class CountListLogicEffectTypeModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectTypeList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

