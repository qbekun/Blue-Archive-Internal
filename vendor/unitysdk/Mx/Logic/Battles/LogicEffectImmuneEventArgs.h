#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace FlatData { class LogicEffectCategory; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace FlatData { class FontType; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills::LogicEffects { class ImmuneEffect; }
namespace MX::Logic::Battles { class LogicEffectImmuneEventArgs; }

#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1271920)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1271930)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271940)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271950)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1271960)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1271970)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1271980)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1271990)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x12719A0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x12719B0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x12719C0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x12719D0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_OVERRIDEFONTTYPE_OFFSET UNITYSDK_OFFSET(0x12719E0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x12719F0)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271A00)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271B10)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1271C00)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1271D00)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1271D40)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1271C30)
#define MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1271DC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LogicEffectImmuneEventArgs_TypeDefinitionIndex = 14036;

	class LogicEffectImmuneEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::System::String* _TemplateId_k__BackingField; // 0x18
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x20
		::System::Int32 _DurationFrame_k__BackingField; // 0x24
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x28
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x30
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x40
		::FlatData::FontType* _OverrideFontType_k__BackingField; // 0x48
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x4C

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_AttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_ATTACKERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void set_TemplateId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_SET_TEMPLATEID_OFFSET))(str, nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_OverrideFontType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_OVERRIDEFONTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::Skills::LogicEffects::ImmuneEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::Skills::LogicEffects::ImmuneEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg, ::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg, ::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTIMMUNEEVENTARGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

