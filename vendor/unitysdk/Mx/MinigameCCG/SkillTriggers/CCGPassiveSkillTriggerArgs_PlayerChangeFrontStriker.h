#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGStriker; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_AFTERFRONTSTRIKER_OFFSET UNITYSDK_OFFSET(0x1E28040)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E28050)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_BEFOREFRONTSTRIKER_OFFSET UNITYSDK_OFFSET(0x1E28060)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28070)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_PlayerChangeFrontStriker_TypeDefinitionIndex = 20889;

	class CCGPassiveSkillTriggerArgs_PlayerChangeFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGStriker* _BeforeFrontStriker_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGStriker* _AfterFrontStriker_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGStriker* get_AfterFrontStriker()
		{
			return (return (::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_AFTERFRONTSTRIKER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_PLAYER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGStriker* get_BeforeFrontStriker()
		{
			return (return (::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_GET_BEFOREFRONTSTRIKER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg, ::MX::MinigameCCG::CCGStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::MX::MinigameCCG::CCGStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_PLAYERCHANGEFRONTSTRIKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

