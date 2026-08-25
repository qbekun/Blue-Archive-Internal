#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_MULTIPLELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464810)
#define MX_MINIGAMESHOOTING_MULTIPLELOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1464820)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MultipleLogicEffect_TypeDefinitionIndex = 15083;

	class MultipleLogicEffect : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffects; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MULTIPLELOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MULTIPLELOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

