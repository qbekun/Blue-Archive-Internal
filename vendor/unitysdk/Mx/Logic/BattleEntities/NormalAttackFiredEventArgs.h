#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x112E100)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_EXECUTERID_OFFSET UNITYSDK_OFFSET(0x112E110)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x112E120)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x112E130)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_INTERSECTPOINT_OFFSET UNITYSDK_OFFSET(0x112E140)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E160)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NormalAttackFiredEventArgs_TypeDefinitionIndex = 13055;

	class NormalAttackFiredEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _ExecuterId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		Il2CppObject* _InterSectPoint_k__BackingField; // 0x18
		::System::Int32 _Delay_k__BackingField; // 0x24

		::System::Int32 get_Delay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_DELAY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ExecuterId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_EXECUTERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_SET_DELAY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InterSectPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_GET_INTERSECTPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, Il2CppObject* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKFIREDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

