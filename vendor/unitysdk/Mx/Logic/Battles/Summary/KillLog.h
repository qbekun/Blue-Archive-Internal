#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles::Summary { class KillLog; }

#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B0480)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B0490)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x13B04A0)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x13B04B0)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B04C0)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B04D0)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B0590)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13B0600)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13B0660)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13B06D0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int KillLog_TypeDefinitionIndex = 14474;

	class KillLog : public Il2CppObject
	{
	public:
		::System::Int32 _Frame_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x14

		::System::Int32 get_Frame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Void set_Frame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::KillLog* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::KillLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::Summary::KillLog* arg, ::MX::Logic::Battles::Summary::KillLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::KillLog*, ::MX::Logic::Battles::Summary::KillLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::Summary::KillLog* arg, ::MX::Logic::Battles::Summary::KillLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::KillLog*, ::MX::Logic::Battles::Summary::KillLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOG_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

