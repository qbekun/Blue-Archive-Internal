#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_DAMAGELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464550)
#define MX_MINIGAMESHOOTING_DAMAGELOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1464560)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int DamageLogicEffect_TypeDefinitionIndex = 15078;

	class DamageLogicEffect : public Il2CppObject
	{
	public:
		::System::Int64 Damage; // 0x18
		::System::Int64 DamageHpRate; // 0x20
		::System::Boolean IsCritical; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_DAMAGELOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_DAMAGELOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

