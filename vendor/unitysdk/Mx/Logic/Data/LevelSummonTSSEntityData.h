#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELSUMMONTSSENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC050)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelSummonTSSEntityData_TypeDefinitionIndex = 13718;

	class LevelSummonTSSEntityData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSUMMONTSSENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

