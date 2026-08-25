#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_REFLECTLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464A10)
#define MX_MINIGAMESHOOTING_REFLECTLOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1464A20)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ReflectLogicEffect_TypeDefinitionIndex = 15085;

	class ReflectLogicEffect : public Il2CppObject
	{
	public:
		::System::Boolean Reflect; // 0x18
		::System::Int32 ReflectCount; // 0x1C
		::System::Int64 ReflectReduceDamage; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_REFLECTLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_REFLECTLOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

