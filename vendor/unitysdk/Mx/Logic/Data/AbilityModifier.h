#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ABILITYMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1221960)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AbilityModifier_TypeDefinitionIndex = 13743;

	class AbilityModifier : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ABILITYMODIFIER_.CTOR_OFFSET))(nullptr);
		}

	};
}

