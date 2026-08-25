#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28330)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E28370)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_GET_TURNNUMBER_OFFSET UNITYSDK_OFFSET(0x1E28380)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_TurnEnd_TypeDefinitionIndex = 20893;

	class CCGPassiveSkillTriggerArgs_TurnEnd : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10
		::System::Int32 _TurnNumber_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNEND_GET_TURNNUMBER_OFFSET))(nullptr);
		}

	};
}

