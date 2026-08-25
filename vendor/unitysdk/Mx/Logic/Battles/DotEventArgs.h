#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class DotAbility; }

#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1272F30)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1272F40)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1272F50)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1272F60)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1272F70)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x12730D0)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x12730E0)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x12730F0)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1273100)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1273110)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1273120)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1273130)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1273140)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1273150)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_GET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x1273160)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1273170)
#define MX_LOGIC_BATTLES_DOTEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1273180)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DotEventArgs_TypeDefinitionIndex = 14039;

	class DotEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::System::String* _SkillEntityName_k__BackingField; // 0x20
		::System::Int32 _Channel_k__BackingField; // 0x28
		::MX::Core::Services::Hash64* _TemplateIdHash_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::DotAbility* _Invoker_k__BackingField; // 0x40

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_SkillEntityName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLENTITYNAME_OFFSET))(str, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::Void set_TemplateIdHash(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_TEMPLATEIDHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_Invoker(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_INVOKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_ATTACKERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::Services::Hash64* get_TemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_GET_TEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Void set_Channel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_CHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DOTEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

	};
}

