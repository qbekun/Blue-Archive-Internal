#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_CHANGEPROJECTILELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463C00)
#define MX_MINIGAMESHOOTING_CHANGEPROJECTILELOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1463C10)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ChangeProjectileLogicEffect_TypeDefinitionIndex = 15074;

	class ChangeProjectileLogicEffect : public Il2CppObject
	{
	public:
		Il2CppObject* RemoveProjectile; // 0x18
		Il2CppObject* AddProjectile; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHANGEPROJECTILELOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHANGEPROJECTILELOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

