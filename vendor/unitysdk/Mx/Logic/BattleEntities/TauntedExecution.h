#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusParams; }

#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_REMOVEDEADTARGETFROMTAUNTLIST_OFFSET UNITYSDK_OFFSET(0x1175560)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION__LEAVE_B__5_0_OFFSET UNITYSDK_OFFSET(0x11756F0)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_BATTLECACHE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x1175870)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1175880)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_BATTLECACHE_BATTLEENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x11758B0)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x11758C0)
#define MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_ENTER_OFFSET UNITYSDK_OFFSET(0x1175BB0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TauntedExecution_TypeDefinitionIndex = 13229;

	class TauntedExecution : public Il2CppObject
	{
	public:
		::System::Void RemoveDeadTargetFromTauntList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_REMOVEDEADTARGETFROMTAUNTLIST_OFFSET))(nullptr);
		}

		::System::Boolean _Leave_b__5_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION__LEAVE_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void BattleCache_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_BATTLECACHE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BattleCache_BattleEntityRemoved(::System::Object* arg, ::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_BATTLECACHE_BATTLEENTITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TAUNTEDEXECUTION_ENTER_OFFSET))(arg, nullptr);
		}

	};
}

