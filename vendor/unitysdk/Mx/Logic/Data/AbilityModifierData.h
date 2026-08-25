#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }

#define MX_LOGIC_DATA_ABILITYMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA430)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AbilityModifierData_TypeDefinitionIndex = 13382;

	class AbilityModifierData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ModifierCheckTarget* CheckTarget; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ABILITYMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

