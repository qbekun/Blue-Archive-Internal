#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_INSTANTLYSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453FC0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int InstantlySkillData_TypeDefinitionIndex = 15010;

	class InstantlySkillData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_INSTANTLYSKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

