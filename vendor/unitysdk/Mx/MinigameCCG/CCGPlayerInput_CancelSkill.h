#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_CANCELSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF6E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_CancelSkill_TypeDefinitionIndex = 20593;

	class CCGPlayerInput_CancelSkill : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CANCELSKILL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

