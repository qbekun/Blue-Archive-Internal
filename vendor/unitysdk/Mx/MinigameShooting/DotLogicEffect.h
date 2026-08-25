#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_DOTLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464690)
#define MX_MINIGAMESHOOTING_DOTLOGICEFFECT_ONTICK_OFFSET UNITYSDK_OFFSET(0x14646A0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int DotLogicEffect_TypeDefinitionIndex = 15080;

	class DotLogicEffect : public Il2CppObject
	{
	public:
		::System::Int64 TickTime; // 0x48
		Il2CppObject* DotEffects; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_DOTLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTick(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_DOTLOGICEFFECT_ONTICK_OFFSET))(arg, arg2, nullptr);
		}

	};
}

