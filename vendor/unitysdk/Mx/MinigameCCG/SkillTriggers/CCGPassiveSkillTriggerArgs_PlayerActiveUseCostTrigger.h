#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E27DC0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1E27DD0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_AFTERCOST_OFFSET UNITYSDK_OFFSET(0x1E27DE0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27DF0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_BEFORECOST_OFFSET UNITYSDK_OFFSET(0x1E27E50)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_PlayerActiveUseCostTrigger_TypeDefinitionIndex = 20887;

	class CCGPassiveSkillTriggerArgs_PlayerActiveUseCostTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGEntity* _Invoker_k__BackingField; // 0x18
		::System::Int32 _BeforeCost_k__BackingField; // 0x20
		::System::Int32 _AfterCost_k__BackingField; // 0x24

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_PLAYER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Invoker()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::Int32 get_AfterCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_AFTERCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_BeforeCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERACTIVEUSECOSTTRIGGER_GET_BEFORECOST_OFFSET))(nullptr);
		}

	};
}

