#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Battles { class CoverStateChangedEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_CHARACTER_COVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13F7DE0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_GET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x13F7E30)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F7E40)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F7FD0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F8150)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityCoverStateChangedExecution_TypeDefinitionIndex = 14626;

	class BattleEntityCoverStateChangedExecution : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::CoverState* _TargetState_k__BackingField; // 0x50

		::System::Void Character_CoverStateChanged(::System::Object* arg, ::MX::Logic::Battles::CoverStateChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CoverStateChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_CHARACTER_COVERSTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::CoverState* get_TargetState()
		{
			return ((::MX::Logic::Skills::CoverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_GET_TARGETSTATE_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3, ::MX::Logic::Skills::CoverState* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::MX::Logic::Skills::CoverState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOVERSTATECHANGEDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

