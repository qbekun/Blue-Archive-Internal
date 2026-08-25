#pragma once
#include "unitysdk.h"

class DamageAttributeFloater;
class DamageFloater;
namespace UnityEngine { class Transform; }
class CharacterVisual;
namespace FlatData { class DamageAttribute; }
class GroundObstacleVisual;
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace FlatData { class FontType; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class CharacterShieldHealEventArgs; }
namespace MX::Logic::Battles { class LogicEffectImmuneEventArgs; }

#define UIDAMAGEFLOATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x23BA8D0)
#define UIDAMAGEFLOATER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23BAAD0)
#define UIDAMAGEFLOATER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23BABE0)
#define UIDAMAGEFLOATER_SHOWDAMAGEATTRIBUTEFLOATER_OFFSET UNITYSDK_OFFSET(0x23BAE00)
#define UIDAMAGEFLOATER_SHOWDAMAGEATTRIBUTEFLOATER_OFFSET UNITYSDK_OFFSET(0x23BB0E0)
#define UIDAMAGEFLOATER_ONBLOCKED_OFFSET UNITYSDK_OFFSET(0x23BB3C0)
#define UIDAMAGEFLOATER_ONDAMAGE_OFFSET UNITYSDK_OFFSET(0x23BB4D0)
#define UIDAMAGEFLOATER_ONBARRIERBLOCKED_OFFSET UNITYSDK_OFFSET(0x23BB5F0)
#define UIDAMAGEFLOATER_ONSTATUSREGISTED_OFFSET UNITYSDK_OFFSET(0x23BB6F0)
#define UIDAMAGEFLOATER_ONDAMAGE_OFFSET UNITYSDK_OFFSET(0x23BB800)
#define UIDAMAGEFLOATER_ONSTATUSREGISTED_OFFSET UNITYSDK_OFFSET(0x23BB8F0)
#define UIDAMAGEFLOATER_ONHEAL_OFFSET UNITYSDK_OFFSET(0x23BBA00)
#define UIDAMAGEFLOATER_ONSHIELDHEAL_OFFSET UNITYSDK_OFFSET(0x23BBB20)
#define UIDAMAGEFLOATER_ONIMMUNE_OFFSET UNITYSDK_OFFSET(0x23BBC40)
#define UIDAMAGEFLOATER_ONENDDAMAGEFLOATER_OFFSET UNITYSDK_OFFSET(0x23BBD60)
#define UIDAMAGEFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BBDF0)

	inline static constexpr unsigned int UIDamageFloater_TypeDefinitionIndex = 5240;

	class UIDamageFloater : public Il2CppObject
	{
	public:
		DamageAttributeFloater* DamageAttributeFloater; // 0xD8
		DamageFloater* DamageFont; // 0xE0
		Il2CppObject* pool; // 0xE8
		Il2CppObject* damageAttributeFloaterPool; // 0xF0
		::UnityEngine::Transform* poolParent; // 0xF8
		Il2CppObject* DamageAttributeShowTable; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ShowDamageAttributeFloater(::System::Boolean arg, CharacterVisual* arg2, ::FlatData::DamageAttribute* arg3)
		{
			((::System::Void(*)(::System::Boolean, CharacterVisual*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_SHOWDAMAGEATTRIBUTEFLOATER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowDamageAttributeFloater(::System::Boolean arg, GroundObstacleVisual* arg2, ::FlatData::DamageAttribute* arg3)
		{
			((::System::Void(*)(::System::Boolean, GroundObstacleVisual*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_SHOWDAMAGEATTRIBUTEFLOATER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnBlocked(GroundObstacleVisual* arg)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONBLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDamage(CharacterVisual* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBarrierBlocked(CharacterVisual* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONBARRIERBLOCKED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnStatusRegisted(CharacterVisual* arg, ::FlatData::FontType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(CharacterVisual*, ::FlatData::FontType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONSTATUSREGISTED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDamage(GroundObstacleVisual* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnStatusRegisted(GroundObstacleVisual* arg, ::FlatData::FontType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::FlatData::FontType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONSTATUSREGISTED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnHeal(CharacterVisual* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONHEAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnShieldHeal(CharacterVisual* arg, ::MX::Logic::Battles::CharacterShieldHealEventArgs* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Logic::Battles::CharacterShieldHealEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONSHIELDHEAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnImmune(CharacterVisual* arg, ::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEndDamageFloater(DamageFloater* arg)
		{
			((::System::Void(*)(DamageFloater*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_ONENDDAMAGEFLOATER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEFLOATER_.CTOR_OFFSET))(nullptr);
		}

	};

