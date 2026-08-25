#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class LifeGainType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_SUMMONERID_OFFSET UNITYSDK_OFFSET(0x1271290)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_SUMMONERID_OFFSET UNITYSDK_OFFSET(0x12712A0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x12712B0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x12712C0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x12712D0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x12712E0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x12712F0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1271300)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x1271310)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x1271320)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1271330)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1271340)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_RAWAMOUNT_OFFSET UNITYSDK_OFFSET(0x1271350)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_RAWAMOUNT_OFFSET UNITYSDK_OFFSET(0x1271360)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_LIFEGAINTYPE_OFFSET UNITYSDK_OFFSET(0x1271370)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_LIFEGAINTYPE_OFFSET UNITYSDK_OFFSET(0x1271380)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x1271390)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x12713A0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x12713B0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x12713C0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x12713D0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x12713E0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x12713F0)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x1271400)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1271410)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1271420)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1271430)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1271440)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271450)
#define MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271600)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LifeGainEventArgs_TypeDefinitionIndex = 14033;

	class LifeGainEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _SummonerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::System::Int32 _DotIndex_k__BackingField; // 0x28
		::System::Int64 _Amount_k__BackingField; // 0x30
		::System::Int64 _RawAmount_k__BackingField; // 0x38
		::MX::Logic::Skills::LifeGainType* _LifeGainType_k__BackingField; // 0x40
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0x44
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x45
		::System::Boolean _IsAccumulatedHeal_k__BackingField; // 0x46
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x48
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x50
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x58
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x60
		::System::String* _TemplateId_k__BackingField; // 0x68
		::System::Int32 _Channel_k__BackingField; // 0x70

		::MX::Logic::BattleEntities::EntityId* get_SummonerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_SUMMONERID_OFFSET))(nullptr);
		}

		::System::Void set_SummonerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_SUMMONERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Void set_InvokerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_INVOKERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_DOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_DotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_DOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RawAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_RAWAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RawAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_RAWAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LifeGainType* get_LifeGainType()
		{
			return ((::MX::Logic::Skills::LifeGainType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_LIFEGAINTYPE_OFFSET))(nullptr);
		}

		::System::Void set_LifeGainType(::MX::Logic::Skills::LifeGainType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LifeGainType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_LIFEGAINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::Entity* arg6, ::MX::Logic::Skills::SkillSpecification* arg7, ::System::Int32 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::System::Int32 arg11, ::MX::Logic::Skills::LifeGainType* arg12, ::System::Boolean arg13, ::System::Boolean arg14, ::System::String* str, ::System::Boolean arg15)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int32, ::MX::Logic::Skills::LifeGainType*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, str, arg15, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::Entity* arg6, ::MX::Logic::Skills::SkillSpecification* arg7, ::System::Int32 arg8, ::System::Int64 arg9, ::System::Int32 arg10, ::MX::Logic::Skills::LifeGainType* arg11, ::System::Boolean arg12, ::System::Boolean arg13)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int64, ::System::Int32, ::MX::Logic::Skills::LifeGainType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIFEGAINEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

	};
}

