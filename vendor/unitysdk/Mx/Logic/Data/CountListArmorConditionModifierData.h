#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA530)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListArmorConditionModifierData_TypeDefinitionIndex = 13387;

	class CountListArmorConditionModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* ArmorTypeList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

