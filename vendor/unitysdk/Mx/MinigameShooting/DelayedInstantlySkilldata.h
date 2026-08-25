#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_DELAYEDINSTANTLYSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453F20)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int DelayedInstantlySkilldata_TypeDefinitionIndex = 15009;

	class DelayedInstantlySkilldata : public Il2CppObject
	{
	public:
		::System::Boolean CreateAreaFromTarget; // 0x68
		::System::Single DamageDelay; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_DELAYEDINSTANTLYSKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

