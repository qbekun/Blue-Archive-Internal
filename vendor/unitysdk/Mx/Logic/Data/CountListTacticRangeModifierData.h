#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListTacticRangeModifierData_TypeDefinitionIndex = 13396;

	class CountListTacticRangeModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRangeList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

