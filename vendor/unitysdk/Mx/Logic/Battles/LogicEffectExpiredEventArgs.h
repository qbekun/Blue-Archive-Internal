#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TYPEOFLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1272930)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_TYPEOFLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1272940)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1272950)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1272960)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1272970)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1272980)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1272990)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x12729A0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x12729B0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x12729C0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x12729D0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x12729E0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x12729F0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1272A00)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1272A10)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1272A20)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_ISDISPELLED_OFFSET UNITYSDK_OFFSET(0x1272A30)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_DISPELLERID_OFFSET UNITYSDK_OFFSET(0x1272A40)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1272A50)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1272BA0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1272CE0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1272D20)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1272BD0)
#define MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1272DA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LogicEffectExpiredEventArgs_TypeDefinitionIndex = 14038;

	class LogicEffectExpiredEventArgs : public Il2CppObject
	{
	public:
		::System::Type* _TypeOfLogicEffect_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x1C
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::System::Int32 _Channel_k__BackingField; // 0x28
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x30
		::System::String* _SkillEntityName_k__BackingField; // 0x38
		::System::String* _TemplateId_k__BackingField; // 0x40
		::MX::Logic::Skills::SkillType* _SkillType_k__BackingField; // 0x48
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x4C
		::System::Boolean _IsDispelled_k__BackingField; // 0x50
		::MX::Logic::BattleEntities::EntityId* _DispellerId_k__BackingField; // 0x54

		::System::Type* get_TypeOfLogicEffect()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TYPEOFLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_TypeOfLogicEffect(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_TYPEOFLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_AttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_ATTACKERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_Channel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_CHANNEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void set_SkillEntityName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_SET_SKILLENTITYNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_SkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispelled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_ISDISPELLED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_DispellerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GET_DISPELLERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::System::Boolean arg2, ::MX::Logic::BattleEntities::EntityId* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::System::Boolean, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTEXPIREDEVENTARGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

