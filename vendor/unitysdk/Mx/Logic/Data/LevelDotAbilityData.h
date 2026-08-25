#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELDOTABILITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA320)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelDotAbilityData_TypeDefinitionIndex = 13379;

	class LevelDotAbilityData : public Il2CppObject
	{
	public:
		::System::Int32 TotalCount; // 0x30
		::System::Int32 Interval; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELDOTABILITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

