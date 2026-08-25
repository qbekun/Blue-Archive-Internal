#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELONETIMEABILITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA380)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelOneTimeAbilityData_TypeDefinitionIndex = 13380;

	class LevelOneTimeAbilityData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELONETIMEABILITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

