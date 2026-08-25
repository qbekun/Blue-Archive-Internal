#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_PIERCELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464970)
#define MX_MINIGAMESHOOTING_PIERCELOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1464980)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PierceLogicEffect_TypeDefinitionIndex = 15084;

	class PierceLogicEffect : public Il2CppObject
	{
	public:
		::System::Boolean Pierce; // 0x18
		::System::Int64 PierceReduceDamage; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PIERCELOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PIERCELOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

