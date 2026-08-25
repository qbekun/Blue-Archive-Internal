#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E28520)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_GET_TURNNUMBER_OFFSET UNITYSDK_OFFSET(0x1E28530)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28540)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_TurnStart_TypeDefinitionIndex = 20895;

	class CCGPassiveSkillTriggerArgs_TurnStart : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10
		::System::Int32 _TurnNumber_k__BackingField; // 0x18

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_GET_TURNNUMBER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_TURNSTART_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

