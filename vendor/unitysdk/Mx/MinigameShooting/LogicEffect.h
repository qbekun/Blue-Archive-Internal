#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_LOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1463B20)
#define MX_MINIGAMESHOOTING_LOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463B40)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int LogicEffect_TypeDefinitionIndex = 15081;

	class LogicEffect : public Il2CppObject
	{
	public:
		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

