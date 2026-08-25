#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGStriker; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_KILLED_OFFSET UNITYSDK_OFFSET(0x1E277F0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1E27800)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_DAMAGEDSTRIKER_OFFSET UNITYSDK_OFFSET(0x1E27810)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27820)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1E27880)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_StrikerDamaged_TypeDefinitionIndex = 20883;

	class CCGPassiveSkillTriggerArgs_StrikerDamaged : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGStriker* _DamagedStriker_k__BackingField; // 0x10
		::System::Int32 _Damage_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntity* _Attacker_k__BackingField; // 0x20
		::System::Boolean _Killed_k__BackingField; // 0x28

		::System::Boolean get_Killed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_KILLED_OFFSET))(nullptr);
		}

		::System::Int32 get_Damage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_DAMAGE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGStriker* get_DamagedStriker()
		{
			return (return (::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_DAMAGEDSTRIKER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg, ::System::Int32 arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::System::Int32, ::MX::MinigameCCG::CCGEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Attacker()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_STRIKERDAMAGED_GET_ATTACKER_OFFSET))(nullptr);
		}

	};
}

