#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLES_KILLEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271740)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x12717C0)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_GET_LOGICFRAME_OFFSET UNITYSDK_OFFSET(0x12717D0)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x12717E0)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x12717F0)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_SET_LOGICFRAME_OFFSET UNITYSDK_OFFSET(0x1271800)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271810)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_GET_KILLERID_OFFSET UNITYSDK_OFFSET(0x1271820)
#define MX_LOGIC_BATTLES_KILLEVENTARGS_SET_KILLERID_OFFSET UNITYSDK_OFFSET(0x1271830)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int KillEventArgs_TypeDefinitionIndex = 14034;

	class KillEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _LogicFrame_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _KillerId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Skills::SkillSpecification* arg4)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LogicFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_GET_LOGICFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_LogicFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_SET_LOGICFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_KillerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_GET_KILLERID_OFFSET))(nullptr);
		}

		::System::Void set_KillerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLEVENTARGS_SET_KILLERID_OFFSET))(arg, nullptr);
		}

	};
}

