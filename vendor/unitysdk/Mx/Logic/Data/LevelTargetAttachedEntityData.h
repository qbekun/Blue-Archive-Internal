#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELTARGETATTACHEDENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC0B0)
#define MX_LOGIC_DATA_LEVELTARGETATTACHEDENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x11FC0C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelTargetAttachedEntityData_TypeDefinitionIndex = 13720;

	class LevelTargetAttachedEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* Abilities; // 0x150

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELTARGETATTACHEDENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELTARGETATTACHEDENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

	};
}

