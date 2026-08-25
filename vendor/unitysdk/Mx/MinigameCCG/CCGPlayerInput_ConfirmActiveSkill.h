#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF590)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMACTIVESKILL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1DCF5E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_ConfirmActiveSkill_TypeDefinitionIndex = 20590;

	class CCGPlayerInput_ConfirmActiveSkill : public Il2CppObject
	{
	public:
		Il2CppObject* _Targets_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMACTIVESKILL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Targets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMACTIVESKILL_GET_TARGETS_OFFSET))(nullptr);
		}

	};
}

