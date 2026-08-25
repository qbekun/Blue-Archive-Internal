#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126F6E0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126F6F0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x126F700)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x126F710)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126F720)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x126F730)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x126F740)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_RAWAMOUNT_OFFSET UNITYSDK_OFFSET(0x126F750)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x126F760)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x126F770)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126F780)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x126F790)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_RAWAMOUNT_OFFSET UNITYSDK_OFFSET(0x126F7A0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x126F7B0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x126F7C0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F7D0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126F900)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x126F910)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x126F920)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x126F930)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126F940)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x126F950)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x126F960)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x126F970)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterShieldHealEventArgs_TypeDefinitionIndex = 14025;

	class CharacterShieldHealEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::System::Int32 _DotIndex_k__BackingField; // 0x20
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0x24
		::System::Int64 _Amount_k__BackingField; // 0x28
		::System::Int64 _RawAmount_k__BackingField; // 0x30
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x38
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x40
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x48
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x50
		::System::Int32 _Channel_k__BackingField; // 0x58
		::System::String* _ShieldId_k__BackingField; // 0x60
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x68

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_SHIELDID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_RawAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_RAWAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_InvokerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_INVOKERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RawAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_RAWAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::Entity* arg6, ::MX::Logic::Skills::SkillSpecification* arg7, ::System::Int32 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::System::Int32 arg11, ::System::String* str, ::System::Boolean arg12, ::System::Boolean arg13)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, str, arg12, arg13, nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Void set_DotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_SET_DOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::System::Int32 get_DotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDHEALEVENTARGS_GET_DOTINDEX_OFFSET))(nullptr);
		}

	};
}

