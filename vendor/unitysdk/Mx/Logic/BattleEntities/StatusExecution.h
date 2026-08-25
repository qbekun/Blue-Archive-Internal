#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class StatusParams; }

#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x11745B0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11745C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_ENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x11745D0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x11745E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_CACHESOURCE_OFFSET UNITYSDK_OFFSET(0x11735B0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x1173850)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_SET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x11745F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1173690)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusExecution_TypeDefinitionIndex = 13223;

	class StatusExecution : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Owner_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x18
		::System::Int32 _Duration_k__BackingField; // 0x1C

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Duration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Void CacheSource(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_CACHESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void set_InvokerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_SET_INVOKERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSEXECUTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

